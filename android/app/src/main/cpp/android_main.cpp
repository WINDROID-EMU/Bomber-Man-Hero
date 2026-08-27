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
#include <cstdlib>
#include <cstring>
#include <string>

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

// SDL2 already provides JNI_OnLoad and manages the JavaVM.
// SDL_AndroidGetJNIEnv() (returns void*, cast to JNIEnv*) is the safe cross-thread accessor.
// We include SDL.h before using it to get the real declaration.

// Cache the MainActivity class and method references
static jclass    g_mainActivityClass = nullptr;
static jmethodID g_openFilePickerMethod = nullptr;

// SDL_AndroidGetJNIEnv returns void* per SDL_system.h
extern "C" void* SDL_AndroidGetJNIEnv(void);

/**
 * Helper: get a JNIEnv for the current thread via SDL2.
 * SDL2 attaches native threads automatically.
 * needsDetach is kept for API compatibility but SDL handles detach itself.
 */
static JNIEnv* GetJNIEnv(bool* /*needsDetach*/ = nullptr) {
    return reinterpret_cast<JNIEnv*>(SDL_AndroidGetJNIEnv());
}

/**
 * Internal: open a file picker dialog using Android SAF via JNI.
 * Blocks the calling thread until the user selects a file or cancels.
 *
 * @param filterList  comma-separated extensions, e.g. "z64,n64,v64"
 * @return            allocated string with the file path (caller must free), or nullptr
 */
static char* AndroidOpenFilePicker(const char* filterList) {
    JNIEnv* env = GetJNIEnv();
    if (!env) {
        LOGE("AndroidOpenFilePicker: failed to get JNIEnv");
        return nullptr;
    }

    // Get the SDLActivity instance (SDL2 stores this as a static in the Java layer)
    // We call org.libsdl.app.SDLActivity.getContext() which returns the Activity
    jclass sdlClass = env->FindClass("org/libsdl/app/SDLActivity");
    if (!sdlClass) {
        LOGE("AndroidOpenFilePicker: SDLActivity class not found");
        return nullptr;
    }

    jmethodID getContextMethod = env->GetStaticMethodID(sdlClass, "getContext",
        "()Landroid/content/Context;");
    if (!getContextMethod) {
        env->DeleteLocalRef(sdlClass);
        LOGE("AndroidOpenFilePicker: getContext method not found");
        return nullptr;
    }

    jobject activityObj = env->CallStaticObjectMethod(sdlClass, getContextMethod);
    env->DeleteLocalRef(sdlClass);
    if (!activityObj) {
        LOGE("AndroidOpenFilePicker: failed to get activity instance");
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

    LOGI("AndroidOpenFilePicker: result = %s", result ? result : "(null)");
    return result;
}

// ----------------------------------------------------------------
// NFD API Implementation (replaces nfd library on Android)
// All functions must use C linkage to match nfd.h's extern "C" block
// ----------------------------------------------------------------

extern "C" {

nfdresult_t NFD_Init() {
    LOGI("NFD_Init: Android stub");
    return NFD_OKAY;
}

void NFD_Quit() {
    LOGI("NFD_Quit: Android stub");
}

nfdresult_t NFD_OpenDialogN(nfdnchar_t** outPath,
                             const nfdnfilteritem_t* filterList,
                             nfdfiltersize_t filterCount,
                             const nfdnchar_t* defaultPath)
{
    (void)defaultPath;
    // Build extension filter string from filterList
    std::string extensions;
    if (filterList && filterCount > 0) {
        for (nfdfiltersize_t i = 0; i < filterCount; ++i) {
            if (i > 0) extensions += ",";
            if (filterList[i].spec) {
                extensions += filterList[i].spec;
            }
        }
    } else {
        extensions = "z64,n64,v64";
    }

    char* path = AndroidOpenFilePicker(extensions.c_str());
    if (!path) {
        return NFD_CANCEL;
    }

    // NFD allocates the result string with malloc
    *outPath = (nfdnchar_t*)malloc(strlen(path) + 1);
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

void NFD_FreePathN(nfdnchar_t* filePath) {
    if (filePath) {
        free(filePath);
    }
}

void NFD_PathSet_Free(const nfdpathset_t* pathSet) {
    (void)pathSet;
}

} // extern "C"

// ============================================================
// Android filesystem helpers
// ============================================================

#include <SDL2/SDL.h>
#include <string>
#include <filesystem>

namespace android_fs {

/**
 * Returns the Android internal storage path for the app.
 * This is equivalent to Context.getFilesDir() on the Java side.
 */
std::filesystem::path get_app_data_dir() {
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
    LOGI("App data dir: %s", base.string().c_str());
}

} // namespace android_fs

// ============================================================
// SDL_main — called by SDL2's Android glue
// ============================================================

// Include the original main.cpp. The #define SDL_MAIN_HANDLED and
// Android-specific #ifdefs will correctly route the program flow.
// We include it here so android_main.cpp "owns" the compilation unit.
#include "../../../../../../src/main/main.cpp"

#endif // __ANDROID__
