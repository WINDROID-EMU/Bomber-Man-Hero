package com.bmherorecompiled

import android.content.Intent
import android.os.Build
import android.os.Bundle
import android.view.WindowManager
import org.libsdl.app.SDLActivity

/**
 * MainActivity — Bomberman Hero: Recompiled (Android Port)
 *
 * Extends SDLActivity from the SDL2 Android layer, which handles all the heavy lifting:
 * - Loads the native library (libBMHeroRecompiled.so)
 * - Creates the SDL window backed by an ANativeWindow / Vulkan surface
 * - Routes touch, key, and joystick events to SDL
 * - Manages the audio thread
 *
 * We override getLibraries() to specify our native library load order.
 */
class MainActivity : SDLActivity() {

    companion object {
        // Exposed to native code via JNI for file picker operations.
        // @JvmStatic on properties makes their getters/setters static — no explicit functions needed.
        @JvmStatic
        var filePickerResult: String? = null

        @JvmStatic
        var filePickerReady = false

        private const val FILE_PICKER_REQUEST_CODE = 1001
    }

    override fun getLibraries(): Array<String> {
        return arrayOf(
            // C++ shared runtime must be loaded first
            "c++_shared",
            // Our main native library
            "BMHeroRecompiled"
        )
    }

    override fun getMainFunction(): String = "SDL_main"

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        // Keep screen on while game is running
        window.addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON)

        // Fullscreen immersive mode
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P) {
            window.attributes.layoutInDisplayCutoutMode =
                WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES
        }
    }

    /**
     * Called from native code (via JNI) to open an Android file picker for ROM selection.
     * This is the Android replacement for nativefiledialog-extended (nfd).
     *
     * @param filterExtensions Comma-separated list of allowed extensions (e.g., "z64,n64,v64")
     * @return The file path string, or null if cancelled
     */
    @Suppress("unused") // Called from JNI
    fun openFilePicker(filterExtensions: String): String? {
        filePickerResult = null
        filePickerReady = false

        val intent = Intent(this, FilePickerActivity::class.java).apply {
            putExtra(FilePickerActivity.EXTRA_FILTER, filterExtensions)
        }
        @Suppress("DEPRECATION")
        startActivityForResult(intent, FILE_PICKER_REQUEST_CODE)

        // Block the calling thread until result is ready (JNI call comes from game thread)
        // SDL runs its main function on a background thread, so blocking here is safe.
        val deadline = System.currentTimeMillis() + 120_000 // 2 min timeout
        while (!filePickerReady && System.currentTimeMillis() < deadline) {
            Thread.sleep(50)
        }

        return filePickerResult
    }

    @Deprecated("Deprecated in Java")
    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)
        if (requestCode == FILE_PICKER_REQUEST_CODE) {
            filePickerResult = data?.getStringExtra(FilePickerActivity.RESULT_PATH)
            filePickerReady = true
        }
    }
}
