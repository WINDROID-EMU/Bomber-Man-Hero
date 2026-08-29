/**
 * android_main.cpp — Android entry point for Bomberman Hero: Recompiled
 *
 * This file serves as the Android-specific bridge, replacing the desktop main.cpp.
 * It:
 *   1. Provides SDL_main() — the entry point SDL2 calls on Android
 *   2. Stubs out nativefiledialog-extended (nfd) with JNI calls to FilePickerActivity
 *   3. Redirects filesystem paths to Android internal storage
 *   4. Includes the original main.cpp with Android-specific guards active
 */

#ifdef __ANDROID__

#include <jni.h>
#include <android/log.h>
#include <android/native_activity.h>

#include <cstring>
#include <cstdlib>
#include <string>
#include <sys/stat.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_system.h>

#define LOG_TAG "BMHeroRecomp"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,  LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,  LOG_TAG, __VA_ARGS__)

// ============================================================
// NFD (nativefiledialog) Android Stub
//
// nfd uses GTK3 on Linux and Win32 on Windows — neither compiles
// on Android. We provide our own implementations that forward to
// Java via JNI.
// ============================================================

#include "nfd.h"

// ============================================================
// NFD internal helpers (normally provided by nfd platform impls)
// We provide them since we're replacing the entire NFD library on Android.
// ============================================================
static char g_nfd_error[256] = {0};

static void NFDi_SetError(const char* msg) {
    if (msg) {
        strncpy(g_nfd_error, msg, sizeof(g_nfd_error) - 1);
        g_nfd_error[sizeof(g_nfd_error) - 1] = '\0';
    }
}

template <typename T>
static T* NFDi_Malloc(size_t bytes) {
    T* ptr = static_cast<T*>(malloc(bytes));
    if (!ptr) {
        NFDi_SetError("NFDi_Malloc failed.");
    }
    return ptr;
}

template <typename T>
static void NFDi_Free(T* ptr) {
    free(static_cast<void*>(ptr));
}

// Public NFD free functions (called by user code)
extern "C" void NFD_FreePathN(nfdnchar_t* filePath) {
    NFDi_Free(filePath);
}
extern "C" void NFD_FreePathU8(nfdu8char_t* filePath) {
    NFDi_Free(filePath);
}

// Global JVM reference — initialized lazily (SDL2 provides its own JNI_OnLoad
// and we cannot have duplicate symbols).
static JavaVM* g_jvm = nullptr;

// Cache the MainActivity class and method references
static jclass    g_mainActivityClass = nullptr;
static jmethodID g_openFilePickerMethod = nullptr;

/**
 * Get the JavaVM pointer on demand.
 * Use SDL_AndroidGetJNIEnv() to get a JNIEnv first, then extract the JavaVM.
 */
static JavaVM* GetJavaVM() {
    if (!g_jvm) {
        // SDL_AndroidGetJNIEnv() returns already-attached JNIEnv* (cast to void*)
        JNIEnv* env = static_cast<JNIEnv*>(SDL_AndroidGetJNIEnv());
        if (env) {
            JavaVM* vm = nullptr;
            if (env->GetJavaVM(&vm) == JNI_OK && vm) {
                g_jvm = vm;
            }
        }
    }
    return g_jvm;
}

/**
 * Helper: get a JNIEnv for the current thread.
 * First try SDL_AndroidGetJNIEnv (works on SDL's thread). If that fails,
 * attach the thread to the JVM directly.
 */
static JNIEnv* GetJNIEnv(bool* needsDetach = nullptr) {
    if (needsDetach) *needsDetach = false;

    // Fast path: SDL_AndroidGetJNIEnv() returns env for the SDL thread
    JNIEnv* env = static_cast<JNIEnv*>(SDL_AndroidGetJNIEnv());
    if (env) {
        return env;
    }

    // Slow path: attach the current thread to the JVM
    JavaVM* const vm = GetJavaVM();
    if (!vm) return nullptr;

    int result = vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6);
    if (result == JNI_EDETACHED) {
        JavaVMAttachArgs args = { JNI_VERSION_1_6, "BMHeroNativeThread", nullptr };
        result = vm->AttachCurrentThread(&env, &args);
        if (needsDetach) *needsDetach = (result == JNI_OK);
    }

    return (result == JNI_OK) ? env : nullptr;
}

/**
 * Internal: open a file picker dialog using Android SAF via JNI.
 * Blocks the calling thread until the user selects a file or cancels.
 *
 * @param filterList  comma-separated extensions, e.g. "z64,n64,v64"
 * @return            allocated string with the file path (caller must free), or nullptr
 */
static char* AndroidOpenFilePicker(const char* filterList) {
    bool needsDetach = false;
    JNIEnv* env = GetJNIEnv(&needsDetach);
    if (!env) {
        LOGE("AndroidOpenFilePicker: failed to get JNIEnv");
        return nullptr;
    }

    // Get the SDLActivity instance (SDL2 stores this as a static in the Java layer)
    // We call org.libsdl.app.SDLActivity.getContext() which returns the Activity
    jclass sdlClass = env->FindClass("org/libsdl/app/SDLActivity");
    if (!sdlClass) {
        LOGE("AndroidOpenFilePicker: SDLActivity class not found");
        if (needsDetach) g_jvm->DetachCurrentThread();
        return nullptr;
    }

    jmethodID getContextMethod = env->GetStaticMethodID(sdlClass, "getContext",
        "()Landroid/content/Context;");
    if (!getContextMethod) {
        env->DeleteLocalRef(sdlClass);
        LOGE("AndroidOpenFilePicker: getContext method not found");
        if (needsDetach) g_jvm->DetachCurrentThread();
        return nullptr;
    }

    jobject activityObj = env->CallStaticObjectMethod(sdlClass, getContextMethod);
    env->DeleteLocalRef(sdlClass);
    if (!activityObj) {
        LOGE("AndroidOpenFilePicker: failed to get activity instance");
        if (needsDetach) g_jvm->DetachCurrentThread();
        return nullptr;
    }

    // Get the actual class of the activity (com.bmherorecompiled.MainActivity)
    jclass activityClass = env->GetObjectClass(activityObj);

    jmethodID openPickerMethod = env->GetMethodID(activityClass, "openFilePicker",
        "(Ljava/lang/String;)Ljava/lang/String;");

    if (!openPickerMethod) {
        LOGE("AndroidOpenFilePicker: openFilePicker method not found on activity");
        env->DeleteLocalRef(activityClass);
        env->DeleteLocalRef(activityObj);
        if (needsDetach) g_jvm->DetachCurrentThread();
        return nullptr;
    }

    jstring filterStr = env->NewStringUTF(filterList ? filterList : "z64,n64,v64");
    jstring resultStr = (jstring)env->CallObjectMethod(activityObj, openPickerMethod, filterStr);

    env->DeleteLocalRef(filterStr);
    env->DeleteLocalRef(activityClass);
    env->DeleteLocalRef(activityObj);

    char* result = nullptr;
    if (resultStr) {
        const char* chars = env->GetStringUTFChars(resultStr, nullptr);
        if (chars) {
            result = strdup(chars);
            env->ReleaseStringUTFChars(resultStr, chars);
        }
        env->DeleteLocalRef(resultStr);
    }

    if (needsDetach) g_jvm->DetachCurrentThread();

    LOGI("AndroidOpenFilePicker: result = %s", result ? result : "(null)");
    return result;
}

// ----------------------------------------------------------------
// NFD API Implementation (replaces nfd library on Android)
// ----------------------------------------------------------------

nfdresult_t NFD_Init() {
    LOGI("NFD_Init: Android stub");
    return NFD_OKAY;
}

void NFD_Quit() {
    LOGI("NFD_Quit: Android stub");
}

#include <filesystem>

namespace android_fs {
    std::filesystem::path get_app_data_dir();
}

nfdresult_t NFD_OpenDialogN(nfdnchar_t** outPath,
                             const nfdnfilteritem_t* filterList,
                             nfdfiltersize_t filterCount,
                             const nfdnchar_t* defaultPath)
{
    std::vector<std::filesystem::path> candidates = {
        android_fs::get_app_data_dir() / "bmhero.z64",
        android_fs::get_app_data_dir() / "roms/bmhero.z64",
        std::filesystem::path("/sdcard/BMH/bmhero.z64"),
        std::filesystem::path("/sdcard/bmhero.z64"),
        std::filesystem::path("/storage/emulated/0/BMH/bmhero.z64"),
        std::filesystem::path("/storage/emulated/0/bmhero.z64")
    };

    for (const auto& rom_path : candidates) {
        std::error_code ec;
        if (std::filesystem::exists(rom_path, ec) && std::filesystem::file_size(rom_path, ec) > 0) {
            *outPath = NFDi_Malloc<nfdnchar_t>(rom_path.string().length() + 1);
            if (*outPath) {
                strcpy(*outPath, rom_path.string().c_str());
                LOGI("Found ROM at: %s", rom_path.string().c_str());
                return NFD_OKAY;
            }
        }
    }

    std::string extensions = "z64,n64,v64";
    char* path = AndroidOpenFilePicker(extensions.c_str());
    if (!path) {
        return NFD_CANCEL;
    }

    *outPath = NFDi_Malloc<nfdnchar_t>(strlen(path) + 1);
    if (!*outPath) {
        free(path);
        return NFD_ERROR;
    }
    strcpy(*outPath, path);
    free(path);
    return NFD_OKAY;
}

nfdresult_t NFD_OpenDialogMultipleN(const nfdpathset_t** outPaths,
                                     const nfdnfilteritem_t* filterList,
                                     nfdfiltersize_t filterCount,
                                     const nfdnchar_t* defaultPath)
{
    // Not supported on Android — return cancel
    (void)outPaths; (void)filterList; (void)filterCount; (void)defaultPath;
    return NFD_CANCEL;
}

nfdresult_t NFD_SaveDialogN(nfdnchar_t** outPath,
                              const nfdnfilteritem_t* filterList,
                              nfdfiltersize_t filterCount,
                              const nfdnchar_t* defaultPath,
                              const nfdnchar_t* defaultName)
{
    // Save dialogs not supported on Android — return cancel
    (void)outPath; (void)filterList; (void)filterCount;
    (void)defaultPath; (void)defaultName;
    return NFD_CANCEL;
}

nfdresult_t NFD_PickFolderN(nfdnchar_t** outPath, const nfdnchar_t* defaultPath) {
    // Folder picking not needed on Android
    (void)outPath; (void)defaultPath;
    return NFD_CANCEL;
}

const char* NFD_GetError() {
    return "NFD: Android stub — only NFD_OpenDialogN is supported";
}

void NFD_ClearError() {}

nfdresult_t NFD_PathSet_GetCount(const nfdpathset_t* pathSet, nfdpathsetsize_t* count) {
    (void)pathSet;
    *count = 0;
    return NFD_OKAY;
}

nfdresult_t NFD_PathSet_GetPathN(const nfdpathset_t* pathSet, nfdpathsetsize_t index, nfdnchar_t** outPath) {
    (void)pathSet; (void)index; (void)outPath;
    return NFD_ERROR;
}

void NFD_PathSet_FreePathN(const nfdnchar_t* filePath) {
    (void)filePath;
}

void NFD_PathSet_Free(const nfdpathset_t* pathSet) {
    (void)pathSet;
}

// ============================================================
// Android filesystem helpers
// ============================================================

#include <filesystem>

/**
 * Initialize AdrenoTools driver loading for Android.
 * Called from create_gfx() in the included main.cpp before SDL init.
 * This sets up custom Vulkan driver loading support for Qualcomm Adreno GPUs.
 */
#ifdef BMHERO_ADRENOTOOLS_ENABLED
#include <dlfcn.h>
#include <adrenotools/driver.h>
#endif

extern "C" void init_adrenotools_driver() {
#ifdef BMHERO_ADRENOTOOLS_ENABLED
    LOGI("init_adrenotools_driver: initializing adrenotools");
    const char* internal_dir = SDL_AndroidGetInternalStoragePath();
    if (!internal_dir) {
        internal_dir = "/data/data/com.bmherorecompiled/files";
    }

    std::filesystem::path internal_path(internal_dir);
    std::filesystem::path drivers_dir = internal_path / "drivers";
    std::filesystem::path turnip_dir = drivers_dir / "turnip";
    std::filesystem::create_directories(turnip_dir);

    // Extract built-in Turnip driver from APK assets to internal app storage
    std::vector<std::pair<std::string, std::string>> driver_assets = {
        {"drivers/vulkan.ad07XX.so", "drivers/turnip/vulkan.ad07XX.so"},
        {"drivers/meta.json", "drivers/turnip/meta.json"},
        {"drivers/vulkan.ad07XX.so", "drivers/vulkan.ad07XX.so"},
        {"drivers/meta.json", "drivers/meta.json"}
    };

    for (const auto& [asset_path, target_rel] : driver_assets) {
        auto target_path = internal_path / target_rel;
        if (!std::filesystem::exists(target_path) || std::filesystem::file_size(target_path) == 0) {
            SDL_RWops* rw = SDL_RWFromFile(asset_path.c_str(), "rb");
            if (rw) {
                Sint64 size = SDL_RWsize(rw);
                if (size > 0) {
                    std::vector<uint8_t> buffer(size);
                    SDL_RWread(rw, buffer.data(), 1, size);
                    SDL_RWclose(rw);
                    std::filesystem::create_directories(target_path.parent_path());
                    FILE* out = fopen(target_path.string().c_str(), "wb");
                    if (out) {
                        fwrite(buffer.data(), 1, size, out);
                        fclose(out);
                        chmod(target_path.string().c_str(), 0755);
                        LOGI("Extracted driver asset to %s (%lld bytes)", target_path.c_str(), (long long)size);
                    }
                } else {
                    SDL_RWclose(rw);
                }
            }
        }
    }

    // Enable Adreno GPU Turbo Mode
    adrenotools_set_turbo(true);

    std::string hook_dir = "";
    Dl_info info;
    if (dladdr((void*)init_adrenotools_driver, &info) && info.dli_fname) {
        std::filesystem::path lib_path(info.dli_fname);
        hook_dir = lib_path.parent_path().string();
    }
    if (hook_dir.empty()) {
        hook_dir = "/data/app/com.bmherorecompiled/lib/arm64";
    }

    // Read driver preferences from config.json
    std::string driver_type = "turnip";
    std::string custom_driver_path = "";
    std::string custom_driver_lib = "";

    std::vector<std::string> config_paths = {
        "/sdcard/BMH/config.json",
        "/storage/emulated/0/BMH/config.json",
        std::string(internal_dir) + "/config/config.json",
        std::string(internal_dir) + "/config.json"
    };

    for (const auto& cp : config_paths) {
        FILE* f = fopen(cp.c_str(), "r");
        if (f) {
            fseek(f, 0, SEEK_END);
            long sz = ftell(f);
            fseek(f, 0, SEEK_SET);
            if (sz > 0 && sz < 1048576) {
                std::vector<char> buf(sz + 1, 0);
                fread(buf.data(), 1, sz, f);
                std::string content(buf.data());

                auto parse_json_key = [&](const std::string& key) -> std::string {
                    auto pos = content.find("\"" + key + "\"");
                    if (pos != std::string::npos) {
                        auto colon = content.find(':', pos);
                        if (colon != std::string::npos) {
                            auto val_start = content.find('"', colon);
                            if (val_start != std::string::npos) {
                                auto val_end = content.find('"', val_start + 1);
                                if (val_end != std::string::npos) {
                                    return content.substr(val_start + 1, val_end - val_start - 1);
                                }
                            }
                        }
                    }
                    return "";
                };

                std::string dt = parse_json_key("driverType");
                if (!dt.empty()) driver_type = dt;

                std::string cdp = parse_json_key("customDriverPath");
                if (!cdp.empty()) custom_driver_path = cdp;

                std::string cdl = parse_json_key("customDriverLibrary");
                if (!cdl.empty()) custom_driver_lib = cdl;
            }
            fclose(f);
            break;
        }
    }

    LOGI("AdrenoTools: hook_dir=%s, selected driver_type=%s", hook_dir.c_str(), driver_type.c_str());

    void* handle = nullptr;

    if (driver_type == "custom" && !custom_driver_path.empty() && !custom_driver_lib.empty()) {
        LOGI("init_adrenotools_driver: Attempting to load custom driver (%s / %s)...", custom_driver_path.c_str(), custom_driver_lib.c_str());
        handle = adrenotools_open_libvulkan(
            RTLD_NOW,
            ADRENOTOOLS_DRIVER_CUSTOM,
            internal_dir,
            hook_dir.c_str(),
            custom_driver_path.c_str(),
            custom_driver_lib.c_str(),
            nullptr,
            nullptr
        );
        if (handle) {
            LOGI("init_adrenotools_driver: Custom driver loaded successfully!");
        } else {
            LOGW("init_adrenotools_driver: Failed to load custom driver, falling back to Turnip...");
        }
    }

    if (!handle && (driver_type == "turnip" || driver_type == "custom")) {
        LOGI("init_adrenotools_driver: Attempting to load integrated Turnip driver (vulkan.ad07XX.so)...");
        handle = adrenotools_open_libvulkan(
            RTLD_NOW,
            ADRENOTOOLS_DRIVER_CUSTOM,
            internal_dir,
            hook_dir.c_str(),
            turnip_dir.string().c_str(),
            "vulkan.ad07XX.so",
            nullptr,
            nullptr
        );
        if (!handle) {
            handle = adrenotools_open_libvulkan(
                RTLD_NOW,
                ADRENOTOOLS_DRIVER_CUSTOM,
                internal_dir,
                hook_dir.c_str(),
                drivers_dir.string().c_str(),
                "vulkan.ad07XX.so",
                nullptr,
                nullptr
            );
        }
        if (handle) {
            LOGI("init_adrenotools_driver: Turnip Mesa driver loaded successfully!");
        } else {
            LOGW("init_adrenotools_driver: Turnip failed to load, falling back to system driver...");
        }
    }

    if (!handle) {
        LOGI("init_adrenotools_driver: Loading system default driver with AdrenoTools hooks...");
        handle = adrenotools_open_libvulkan(
            RTLD_NOW,
            0,
            internal_dir,
            hook_dir.c_str(),
            nullptr,
            nullptr,
            nullptr,
            nullptr
        );
        if (handle) {
            LOGI("init_adrenotools_driver: System Vulkan driver initialized with hooks!");
        } else {
            LOGW("init_adrenotools_driver: System Vulkan driver without hooks will be used.");
        }
    }
#else
    LOGI("init_adrenotools_driver: AdrenoTools not available for this ABI (stub)");
#endif
}

namespace android_fs {

/**
 * Returns the Android internal storage path for the app.
 * This is equivalent to Context.getFilesDir() on the Java side.
 */
std::filesystem::path get_app_data_dir() {
    std::error_code ec;
    std::filesystem::path bmh_sdcard = "/sdcard/BMH";
    std::filesystem::create_directories(bmh_sdcard, ec);
    if (!ec && std::filesystem::exists(bmh_sdcard)) {
        return bmh_sdcard;
    }

    std::filesystem::path bmh_storage = "/storage/emulated/0/BMH";
    std::filesystem::create_directories(bmh_storage, ec);
    if (!ec && std::filesystem::exists(bmh_storage)) {
        return bmh_storage;
    }

    const char* path = SDL_AndroidGetInternalStoragePath();
    if (path) return std::filesystem::path(path);
    return std::filesystem::path("/data/data/com.bmherorecompiled/files");
}

/**
 * Returns the external storage path (if available).
 */
std::filesystem::path get_external_storage_dir() {
    const char* path = SDL_AndroidGetExternalStoragePath();
    if (path) return std::filesystem::path(path);
    return get_app_data_dir();
}

/**
 * Initialize the app directory structure.
 * Creates saves/, config/, mods/ directories.
 */
void init_directories() {
    auto base = get_app_data_dir();
    std::filesystem::create_directories(base / "saves");
    std::filesystem::create_directories(base / "config");
    std::filesystem::create_directories(base / "mods");
    std::filesystem::create_directories(base / "roms");
    std::filesystem::create_directories(base / "assets");
    LOGI("App data dir initialized: %s", base.string().c_str());
}

void extract_apk_assets() {
    auto base = get_app_data_dir();
    std::vector<std::string> asset_files = {
        "InterVariable.ttf",
        "NimbusSansNarrow-Bold.ttf",
        "NotoEmoji-Regular.ttf",
        "Suplexmentary Comic NC.ttf",
        "recomp.rcss",
        "BMHeroLogo.svg",
        "Logo.svg",
        "RecompiledLogo.svg",
        "Explosion.svg",
        "JiggyColor.svg",
        "JiggyHole.svg",
        "JiggyShine.svg",
        "Banjo.svg",
        "Kazooie.svg",
        "Cloud1.svg",
        "Cloud2.svg",
        "Cloud3.svg",
        "Cloud4.svg",
        "ember1.svg",
        "ember2.svg",
        "ember3.svg",
        "ember4.svg",
        "ember5.svg",
        "promptfont/promptfont.ttf",
        "icons/RecordBorder.svg",
        "icons/Keyboard.svg",
        "icons/X.svg",
        "icons/Trash.svg",
        "icons/Cont.svg",
        "icons/Port.svg",
        "icons/Caret.svg",
        "icons/Arrow.svg",
        "icons/Quit.svg",
        "icons/Reset.svg",
        "icons/Plus.svg",
        "icons/PlusKeyboard.svg",
        "icons/RecordSpinner.svg",
        "icons/Question.svg",
        "icons/VizMap/DPad.svg",
        "icons/VizMap/Map.svg",
        "icons/VizMap/ButtonLarge.svg",
        "icons/VizMap/Shield.svg",
        "icons/VizMap/Target.svg",
        "icons/VizMap/ButtonSmall.svg",
        "icons/VizMap/DPadArrow.svg",
        "icons/VizMap/ButtonMedium.svg",
        "roms/bmhero.z64",
        "bmhero.z64"
    };

    for (const auto& rel_path : asset_files) {
        auto target_path = base / "assets" / rel_path;
        auto alt_target_path = base / rel_path;
        std::error_code ec1, ec2;
        bool need_target = !std::filesystem::exists(target_path, ec1) || std::filesystem::file_size(target_path, ec1) == 0;
        bool need_alt = !std::filesystem::exists(alt_target_path, ec2) || std::filesystem::file_size(alt_target_path, ec2) == 0;
        if (need_target || need_alt) {
            SDL_RWops* rw = SDL_RWFromFile(rel_path.c_str(), "rb");
            if (!rw) {
                std::string assets_prefix = std::string("assets/") + rel_path;
                rw = SDL_RWFromFile(assets_prefix.c_str(), "rb");
            }
            if (rw) {
                Sint64 size = SDL_RWsize(rw);
                if (size > 0) {
                    std::vector<uint8_t> buffer(size);
                    SDL_RWread(rw, buffer.data(), 1, size);
                    SDL_RWclose(rw);

                    std::filesystem::create_directories(target_path.parent_path());
                    std::filesystem::create_directories(alt_target_path.parent_path());

                    FILE* out = fopen(target_path.string().c_str(), "wb");
                    if (out) {
                        fwrite(buffer.data(), 1, size, out);
                        fclose(out);
                        LOGI("Extracted asset to: %s (%lld bytes)", target_path.string().c_str(), (long long)size);
                    }
                    FILE* out2 = fopen(alt_target_path.string().c_str(), "wb");
                    if (out2) {
                        fwrite(buffer.data(), 1, size, out2);
                        fclose(out2);
                    }
                } else {
                    SDL_RWclose(rw);
                }
            } else {
                LOGW("Asset not found in APK: %s", rel_path.c_str());
            }
        }
    }
}

} // namespace android_fs

// ============================================================
// Virtual Touch Controller JNI Interface (Zelda64 Compatible)
// ============================================================

namespace {
int g_virtualJoystickId = -1;
SDL_Joystick* g_virtualJoystick = nullptr;
SDL_JoystickID g_virtualJoystickInstanceId = -1;
}

extern "C" __attribute__((visibility("default"))) jboolean Java_com_bmherorecompiled_MainActivity_attachController(
    JNIEnv*,
    jobject) {
    if (g_virtualJoystick != nullptr) {
        return JNI_TRUE;
    }

    if ((SDL_WasInit(SDL_INIT_JOYSTICK) & SDL_INIT_JOYSTICK) == 0) {
        LOGW("SDL joystick subsystem is not ready for touch controller");
        return JNI_FALSE;
    }

    g_virtualJoystickId = SDL_JoystickAttachVirtual(SDL_JOYSTICK_TYPE_GAMECONTROLLER, 6, 16, 0);
    if (g_virtualJoystickId < 0) {
        LOGE("Could not attach touch controller: %s", SDL_GetError());
        return JNI_FALSE;
    }

    g_virtualJoystick = SDL_JoystickOpen(g_virtualJoystickId);
    if (g_virtualJoystick == nullptr) {
        LOGE("Could not open touch controller: %s", SDL_GetError());
        SDL_JoystickDetachVirtual(g_virtualJoystickId);
        g_virtualJoystickId = -1;
        g_virtualJoystickInstanceId = -1;
        return JNI_FALSE;
    }

    g_virtualJoystickInstanceId = SDL_JoystickInstanceID(g_virtualJoystick);
    LOGI("Touch controller attached as virtual joystick %d instance %d", g_virtualJoystickId, g_virtualJoystickInstanceId);
    return JNI_TRUE;
}

extern "C" __attribute__((visibility("default"))) void Java_com_bmherorecompiled_MainActivity_detachController(
    JNIEnv*,
    jobject) {
    if (g_virtualJoystick != nullptr) {
        SDL_JoystickClose(g_virtualJoystick);
        g_virtualJoystick = nullptr;
    }
    if (g_virtualJoystickId >= 0) {
        SDL_JoystickDetachVirtual(g_virtualJoystickId);
        g_virtualJoystickId = -1;
    }
    g_virtualJoystickInstanceId = -1;
}

extern "C" __attribute__((visibility("default"))) void Java_com_bmherorecompiled_MainActivity_setButton(
    JNIEnv*,
    jobject,
    jint button,
    jboolean value) {
    if (g_virtualJoystick == nullptr) {
        return;
    }
    SDL_JoystickSetVirtualButton(g_virtualJoystick, button, value ? 1 : 0);
}

extern "C" __attribute__((visibility("default"))) void Java_com_bmherorecompiled_MainActivity_setAxis(
    JNIEnv*,
    jobject,
    jint axis,
    jshort value) {
    if (g_virtualJoystick == nullptr) {
        return;
    }
    SDL_JoystickSetVirtualAxis(g_virtualJoystick, axis, value);
}

// ============================================================
// SDL_main — called by SDL2's Android glue
// ============================================================

// Include the original main.cpp. The #define SDL_MAIN_HANDLED and
// Android-specific #ifdefs will correctly route the program flow.
// We include it here so android_main.cpp "owns" the compilation unit.
#include "../../../../../../src/main/main.cpp"

#endif // __ANDROID__
