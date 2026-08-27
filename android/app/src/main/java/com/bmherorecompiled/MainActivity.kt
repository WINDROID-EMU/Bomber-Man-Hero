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
        requestedOrientation = android.content.pm.ActivityInfo.SCREEN_ORIENTATION_LANDSCAPE
        super.onCreate(savedInstanceState)

        System.setProperty("nativeLibraryDir", applicationInfo.nativeLibraryDir)

        window.addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON)

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P) {
            window.attributes.layoutInDisplayCutoutMode =
                WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES
        }

        checkAndRequestStoragePermissions()
        ConfigManager.load()

        val touchOverlay = TouchOverlayView(this)
        val layoutParams = android.view.ViewGroup.LayoutParams(
            android.view.ViewGroup.LayoutParams.MATCH_PARENT,
            android.view.ViewGroup.LayoutParams.MATCH_PARENT
        )
        mLayout.addView(touchOverlay, layoutParams)
    }

    private fun checkAndRequestStoragePermissions() {
        if (Build.VERSION.SDK_INT < Build.VERSION_CODES.R) {
            val permissions = arrayOf(
                android.Manifest.permission.READ_EXTERNAL_STORAGE,
                android.Manifest.permission.WRITE_EXTERNAL_STORAGE
            )
            val needed = permissions.filter {
                checkSelfPermission(it) != android.content.pm.PackageManager.PERMISSION_GRANTED
            }
            if (needed.isNotEmpty()) {
                requestPermissions(needed.toTypedArray(), 1002)
            }
        }
    }

    @Suppress("unused")
    fun openFilePicker(filterExtensions: String): String? {
        val path = "/sdcard/BMH/bmhero.z64"
        return if (java.io.File(path).exists()) path else null
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
