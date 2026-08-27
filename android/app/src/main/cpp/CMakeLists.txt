cmake_minimum_required(VERSION 3.22.1)

project(BMHeroRecompiled LANGUAGES C CXX)

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# ---- Project root (two levels up from this CMakeLists.txt) ----
set(BMHERO_ROOT ${BMHERO_PROJECT_ROOT})
if (NOT BMHERO_ROOT)
    set(BMHERO_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/../../../../..")
endif()

message(STATUS "BMHERO_ROOT = ${BMHERO_ROOT}")

# ---- DXC Shader Compiler ----
# ---- DXC Shader Compiler ----
set(DXC_COMMON_OPTS "-I${BMHERO_ROOT}/lib/rt64/src")
set(DXC_DXIL_OPTS "-Wno-ignored-attributes")
set(DXC_SPV_OPTS "-spirv" "-fspv-target-env=vulkan1.0" "-fvk-use-dx-layout")
set(DXC_PS_OPTS "${DXC_COMMON_OPTS}" "-E" "PSMain" "-T" "ps_6_0" "-D" "DYNAMIC_RENDER_PARAMS")
set(DXC_VS_OPTS "${DXC_COMMON_OPTS}" "-E" "VSMain" "-T" "vs_6_0" "-D" "DYNAMIC_RENDER_PARAMS" "-fvk-invert-y")
set(DXC_CS_OPTS "${DXC_COMMON_OPTS}" "-E" "CSMain" "-T" "cs_6_0")
set(DXC_GS_OPTS "${DXC_COMMON_OPTS}" "-E" "GSMain" "-T" "gs_6_0")
set(DXC_RT_OPTS "${DXC_COMMON_OPTS}" "-D" "RT_SHADER" "-T" "lib_6_3" "-fspv-target-env=vulkan1.1spirv1.4" "-fspv-extension=SPV_KHR_ray_tracing" "-fspv-extension=SPV_EXT_descriptor_indexing")

if (CMAKE_HOST_SYSTEM_PROCESSOR STREQUAL "x86_64" OR CMAKE_HOST_SYSTEM_PROCESSOR STREQUAL "AMD64" OR NOT DEFINED CMAKE_HOST_SYSTEM_PROCESSOR)
    set(DXC "LD_LIBRARY_PATH=${BMHERO_ROOT}/lib/rt64/src/contrib/dxc/lib/x64" "${BMHERO_ROOT}/lib/rt64/src/contrib/dxc/bin/x64/dxc-linux" CACHE STRING "DXC executable" FORCE)
else()
    set(DXC "LD_LIBRARY_PATH=${BMHERO_ROOT}/lib/rt64/src/contrib/dxc/lib/arm64" "${BMHERO_ROOT}/lib/rt64/src/contrib/dxc/bin/arm64/dxc-linux" CACHE STRING "DXC executable" FORCE)
endif()

# ---- Android-specific settings ----
add_compile_definitions(
    __ANDROID__
    ANDROID
    HLSL_CPU
    RT64_SDL_WINDOW_VULKAN
    PLUME_SDL_VULKAN_ENABLED
    BMHERO_ANDROID
)

# Disable warnings that spam the build
add_compile_options(
    -fno-strict-aliasing
    -fms-extensions
    -Wno-unused-variable
    -Wno-unused-function
    -Wno-implicit-function-declaration
    -Wno-nullability-completeness
)

# ---- SDL2 for Android ----
# Use the SDL2 sources we cloned alongside the android/ folder
set(SDL2_ANDROID_SOURCE_DIR "${BMHERO_ROOT}/android/SDL2")

if (EXISTS "${SDL2_ANDROID_SOURCE_DIR}/CMakeLists.txt")
    message(STATUS "Found SDL2 sources at ${SDL2_ANDROID_SOURCE_DIR}")
    # Build SDL2 as a static library
    set(SDL_SHARED OFF CACHE BOOL "" FORCE)
    set(SDL_STATIC ON  CACHE BOOL "" FORCE)
    set(SDL_TEST   OFF CACHE BOOL "" FORCE)
    add_subdirectory(${SDL2_ANDROID_SOURCE_DIR} ${CMAKE_BINARY_DIR}/SDL2)
    set(SDL2_INCLUDE_DIRS "${SDL2_ANDROID_SOURCE_DIR}/include")
    set(SDL2_LIBRARIES SDL2-static)
    set(SDL2_FOUND TRUE)
else()
    message(FATAL_ERROR "SDL2 sources not found at ${SDL2_ANDROID_SOURCE_DIR}. Run: git clone https://github.com/libsdl-org/SDL.git android/SDL2")
endif()

# ---- RT64 ----
set(RT64_STATIC TRUE)
set(RT64_SDL_WINDOW_VULKAN TRUE)
set(PLUME_SDL_VULKAN_ENABLED TRUE)

# Android system libraries
find_library(log-lib log)
find_library(android-lib android)
find_library(vulkan-lib vulkan)

# Tell RT64's CMakeLists that SDL2 is provided (we built it as a subproject above).
# RT64 will skip find_package(SDL2) on Android thanks to our patch.
# Provide real include dirs and library name so targets get proper includes.
set(SDL2_FOUND TRUE)
set(SDL2_INCLUDE_DIRS "${BMHERO_ROOT}/android/SDL2/include")
set(SDL2_LIBRARIES "SDL2-static")

add_subdirectory(${BMHERO_ROOT}/lib/rt64 ${CMAKE_BINARY_DIR}/rt64)
# After rt64 target exists, add SDL2 includes so rt64 compiles correctly
target_include_directories(rt64 PRIVATE "${BMHERO_ROOT}/android/SDL2/include")

# ---- N64ModernRuntime ----
add_subdirectory(${BMHERO_ROOT}/lib/N64ModernRuntime ${CMAKE_BINARY_DIR}/N64ModernRuntime)

# ---- FreeType (required by RmlUi) ----
# Build FreeType from sources for Android (NDK does not ship it as a system library).
set(FT_ANDROID_SOURCE_DIR "${BMHERO_ROOT}/android/freetype")
if (EXISTS "${FT_ANDROID_SOURCE_DIR}/CMakeLists.txt")
    message(STATUS "Building FreeType from sources: ${FT_ANDROID_SOURCE_DIR}")
    set(FT_DISABLE_ZLIB ON CACHE BOOL "" FORCE)
    set(FT_DISABLE_BZIP2 ON CACHE BOOL "" FORCE)
    set(FT_DISABLE_PNG ON CACHE BOOL "" FORCE)
    set(FT_DISABLE_HARFBUZZ ON CACHE BOOL "" FORCE)
    set(FT_DISABLE_BROTLI ON CACHE BOOL "" FORCE)
    add_subdirectory(${FT_ANDROID_SOURCE_DIR} ${CMAKE_BINARY_DIR}/freetype)
    # RmlUi needs Freetype::Freetype alias target
    if (NOT TARGET Freetype::Freetype)
        add_library(Freetype::Freetype ALIAS freetype)
    endif()
    set(FREETYPE_FOUND TRUE)
    set(FREETYPE_INCLUDE_DIRS "${FT_ANDROID_SOURCE_DIR}/include")
    set(FREETYPE_LIBRARIES freetype)
else()
    message(FATAL_ERROR "FreeType sources not found. Run: git clone https://gitlab.freedesktop.org/freetype/freetype.git android/freetype")
endif()

# ---- RecompFrontend ----
set(RECOMP_FRONTEND_N64MODERNRUNTIME_PATH ${BMHERO_ROOT}/lib/N64ModernRuntime)
set(RECOMP_FRONTEND_RT64_PATH ${BMHERO_ROOT}/lib/rt64)
add_subdirectory(${BMHERO_ROOT}/lib/RecompFrontend ${CMAKE_BINARY_DIR}/RecompFrontend)

# ---- RecompiledFuncs (the static-recompiled N64 game code) ----
add_library(RecompiledFuncs STATIC)
target_compile_options(RecompiledFuncs PRIVATE
    -fno-strict-aliasing
    -Wno-unused-variable
    -Wno-implicit-function-declaration
)
target_include_directories(RecompiledFuncs PRIVATE
    ${BMHERO_ROOT}/include
    ${BMHERO_ROOT}/lib/N64ModernRuntime/ultramodern/include
    ${BMHERO_ROOT}/lib/N64ModernRuntime/librecomp/include
    ${BMHERO_ROOT}/lib/N64ModernRuntime/N64Recomp/include
)
file(GLOB FUNC_C_SOURCES ${BMHERO_ROOT}/RecompiledFuncs/*.c)
file(GLOB FUNC_CXX_SOURCES ${BMHERO_ROOT}/RecompiledFuncs/*.cpp)
target_sources(RecompiledFuncs PRIVATE ${FUNC_C_SOURCES} ${FUNC_CXX_SOURCES})

# ---- PatchesLib ----
add_library(PatchesLib STATIC)
target_compile_options(PatchesLib PRIVATE
    -fno-strict-aliasing
    -Wno-unused-variable
    -Wno-implicit-function-declaration
)
target_include_directories(PatchesLib PRIVATE
    ${BMHERO_ROOT}/include
    ${BMHERO_ROOT}/lib/N64ModernRuntime/ultramodern/include
    ${BMHERO_ROOT}/lib/N64ModernRuntime/librecomp/include
    ${BMHERO_ROOT}/lib/N64ModernRuntime/N64Recomp/include
)
target_sources(PatchesLib PRIVATE
    ${BMHERO_ROOT}/RecompiledPatches/patches.c
    ${BMHERO_ROOT}/RecompiledPatches/patches_bin.c
)
set_source_files_properties(${BMHERO_ROOT}/RecompiledPatches/patches.c
    PROPERTIES COMPILE_FLAGS -fno-strict-aliasing)

# ---- icon_bytes ----
# Generate icon_bytes.c from the app icon PNG at configure time using file_to_c
# The file_to_c tool is built by rt64's CMakeLists
add_custom_command(
    OUTPUT ${CMAKE_BINARY_DIR}/icon_bytes.c ${CMAKE_BINARY_DIR}/icon_bytes.h
    COMMAND file_to_c
        ${BMHERO_ROOT}/icons/app.png
        icon_bytes
        ${CMAKE_BINARY_DIR}/icon_bytes.c
        ${CMAKE_BINARY_DIR}/icon_bytes.h
    DEPENDS ${BMHERO_ROOT}/icons/app.png file_to_c
)

# ---- RSP microcode ----
# The RSP recompiled source is pre-built
set(RSP_SOURCES ${BMHERO_ROOT}/rsp/n_aspMain.cpp)

# ---- NRM mods (embedded) ----
file(GLOB NRM_FILES "${BMHERO_ROOT}/mods/*.nrm")
set(GENERATED_NRM_SOURCES "")
foreach(NRM_FILE ${NRM_FILES})
    get_filename_component(NRM_NAME ${NRM_FILE} NAME_WE)
    set(OUT_C "${CMAKE_BINARY_DIR}/mods/${NRM_NAME}.c")
    set(OUT_H "${CMAKE_BINARY_DIR}/mods/${NRM_NAME}.h")
    add_custom_command(
        OUTPUT ${OUT_C} ${OUT_H}
        COMMAND file_to_c ${NRM_FILE} ${NRM_NAME} ${OUT_C} ${OUT_H}
        DEPENDS ${NRM_FILE} file_to_c
    )
    list(APPEND GENERATED_NRM_SOURCES ${OUT_C})
endforeach()

# ---- Main shared library (the Android .so) ----
add_library(BMHeroRecompiled SHARED
    # Android bridge (replaces main.cpp entry point for Android)
    ${CMAKE_CURRENT_SOURCE_DIR}/android_main.cpp

    # Original game sources (with Android-aware includes)
    ${BMHERO_ROOT}/src/main/launcher_animation.cpp
    ${BMHERO_ROOT}/src/main/register_overlays.cpp
    ${BMHERO_ROOT}/src/main/register_patches.cpp
    ${BMHERO_ROOT}/src/main/theme.cpp

    ${BMHERO_ROOT}/src/game/config.cpp
    ${BMHERO_ROOT}/src/game/debug.cpp
    ${BMHERO_ROOT}/src/game/recomp_api.cpp
    ${BMHERO_ROOT}/src/game/recomp_extension_api.cpp
    ${BMHERO_ROOT}/src/game/recomp_data_api.cpp
    ${BMHERO_ROOT}/src/game/rom_decompression.cpp

    ${RSP_SOURCES}

    # Generated icon bytes
    ${CMAKE_BINARY_DIR}/icon_bytes.c

    # Embedded mods
    ${GENERATED_NRM_SOURCES}
)

target_include_directories(BMHeroRecompiled PRIVATE
    ${BMHERO_ROOT}/include
    ${BMHERO_ROOT}/lib/N64ModernRuntime/N64Recomp/include
    ${BMHERO_ROOT}/lib/N64ModernRuntime/thirdparty/sse2neon
    ${BMHERO_ROOT}/lib/rt64/src/contrib
    ${BMHERO_ROOT}/lib/rt64/src/contrib/hlslpp/include
    ${BMHERO_ROOT}/lib/rt64/src/contrib/dxc/inc
    ${BMHERO_ROOT}/lib/rt64/src
    ${BMHERO_ROOT}/lib/rt64/src/rhi
    ${BMHERO_ROOT}/lib/rt64/src/render
    ${BMHERO_ROOT}/lib/RecompFrontend/recompinput/include
    ${BMHERO_ROOT}/lib/RecompFrontend/recompui/include
    ${BMHERO_ROOT}/lib/RecompFrontend/recompui/src
    ${BMHERO_ROOT}/lib/rt64/src/contrib/nativefiledialog-extended/src/include
    ${BMHERO_ROOT}/lib/SlotMap
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_BINARY_DIR}
    # Android-specific headers
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(BMHeroRecompiled
    PatchesLib
    RecompiledFuncs
    recompui
    recompinput
    librecomp
    ultramodern
    rt64
    # SDL2
    ${SDL2_LIBRARIES}
    # Android system libraries
    ${log-lib}
    ${android-lib}
    ${vulkan-lib}
    # C++ STL
)
