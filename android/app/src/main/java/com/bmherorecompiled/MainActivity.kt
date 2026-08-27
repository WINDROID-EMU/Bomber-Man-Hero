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
        private const val FILE_PICKER_REQUEST_CODE = 1001

        private var filePickerResultValue: String? = null
        private var filePickerReadyValue = false

        @JvmStatic
        fun getFilePickerResult(): String? = filePickerResultValue

        @JvmStatic
        fun isFilePickerReady(): Boolean = filePickerReadyValue

        fun setFilePickerResult(value: String?) {
            filePickerResultValue = value
        }

        fun setFilePickerReady(value: Boolean) {
            filePickerReadyValue = value
        }
    }

    override fun getLibraries(): Array<String> {
        return arrayOf(
            "c++_shared",
            "BMHeroRecompiled"
        )
    }

    override fun getMainFunction(): String = "SDL_main"

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        window.addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON)

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P) {
            window.attributes.layoutInDisplayCutoutMode =
                WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES
        }
    }

    @Suppress("unused")
    fun openFilePicker(filterExtensions: String): String? {
        setFilePickerResult(null)
        setFilePickerReady(false)

        val intent = Intent(this, FilePickerActivity::class.java).apply {
            putExtra(FilePickerActivity.EXTRA_FILTER, filterExtensions)
        }
        startActivityForResult(intent, FILE_PICKER_REQUEST_CODE)

        val deadline = System.currentTimeMillis() + 120_000
        while (!isFilePickerReady() && System.currentTimeMillis() < deadline) {
            Thread.sleep(50)
        }

        return getFilePickerResult()
    }

    @Deprecated("Deprecated in Java")
    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)
        if (requestCode == FILE_PICKER_REQUEST_CODE) {
            setFilePickerResult(data?.getStringExtra(FilePickerActivity.RESULT_PATH))
            setFilePickerReady(true)
        }
    }
}
