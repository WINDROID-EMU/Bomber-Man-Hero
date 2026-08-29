package com.bmherorecompiled

import android.content.Context
import android.content.Intent
import android.content.SharedPreferences
import android.content.pm.ActivityInfo
import android.os.Build
import android.os.Bundle
import android.os.Handler
import android.os.Looper
import android.util.Log
import android.view.LayoutInflater
import android.view.MotionEvent
import android.view.View
import android.view.ViewGroup
import android.view.WindowManager
import android.widget.Button
import android.widget.FrameLayout
import android.widget.ImageView
import org.libsdl.app.SDLActivity
import java.io.File
import kotlin.math.sqrt

/**
 * MainActivity — Bomberman Hero: Recompiled (Android Port)
 * Features touch controls matching Zelda64Recomp-Android with virtual joystick support.
 */
class MainActivity : SDLActivity() {

    companion object {
        private const val TAG = "BMHeroMainActivity"
        private const val PREFS_NAME = "bmhero_prefs"
        private const val PREF_TOUCH_CONTROLS_HIDDEN = "touch_controls_hidden"
        private const val PREF_TOUCH_CONTROLS_DISABLED = "touch_controls_disabled"
        private const val RIGHT_STICK_DRAG_RADIUS_DP = 56f
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

    // Native JNI functions
    external fun attachController(): Boolean
    external fun detachController()
    external fun setButton(button: Int, value: Boolean)
    external fun setAxis(axis: Int, value: Short)

    private lateinit var preferences: SharedPreferences
    private var overlayView: View? = null
    private var buttonGroup: ViewGroup? = null
    private var buttonToggle: Button? = null
    private var leftJoystick: FrameLayout? = null
    private var leftJoystickKnob: ImageView? = null
    private var rightScreenArea: View? = null

    private var touchControllerAttached = false
    private var touchControllerAttachRetries = 0
    private val mainHandler = Handler(Looper.getMainLooper())
    private var rightStickPointerId = MotionEvent.INVALID_POINTER_ID
    private var rightStickStartX = 0f
    private var rightStickStartY = 0f

    private val touchControllerAttachRetry = Runnable { retryTouchControllerAttach() }

    override fun getLibraries(): Array<String> {
        return arrayOf(
            "c++_shared",
            "BMHeroRecompiled"
        )
    }

    override fun getMainFunction(): String = "SDL_main"

    override fun onCreate(savedInstanceState: Bundle?) {
        requestedOrientation = ActivityInfo.SCREEN_ORIENTATION_SENSOR_LANDSCAPE
        super.onCreate(savedInstanceState)

        preferences = getSharedPreferences(PREFS_NAME, Context.MODE_PRIVATE)
        System.setProperty("nativeLibraryDir", applicationInfo.nativeLibraryDir)
        window.addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON)

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P) {
            window.attributes.layoutInDisplayCutoutMode =
                WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES
        }

        checkAndRequestStoragePermissions()
        ConfigManager.load()

        setupControllerOverlay()
        ensureTouchControllerAttached()
    }

    override fun onResume() {
        super.onResume()
        ensureTouchControllerAttached()
    }

    override fun onDestroy() {
        mainHandler.removeCallbacks(touchControllerAttachRetry)
        detachController()
        super.onDestroy()
    }

    private fun ensureTouchControllerAttached() {
        if (!touchControllerAttached) {
            touchControllerAttached = attachController()
            if (!touchControllerAttached && touchControllerAttachRetries < 20) {
                touchControllerAttachRetries++
                mainHandler.postDelayed(touchControllerAttachRetry, 250)
            }
        }
    }

    private fun retryTouchControllerAttach() {
        touchControllerAttached = attachController()
        if (!touchControllerAttached && touchControllerAttachRetries < 20) {
            touchControllerAttachRetries++
            mainHandler.postDelayed(touchControllerAttachRetry, 250)
        }
    }

    private fun setupControllerOverlay() {
        val inflater = getSystemService(Context.LAYOUT_INFLATER_SERVICE) as LayoutInflater
        val overlay = inflater.inflate(R.layout.touchcontrol_overlay, null)
        overlayView = overlay

        val layoutParams = FrameLayout.LayoutParams(
            FrameLayout.LayoutParams.MATCH_PARENT,
            FrameLayout.LayoutParams.MATCH_PARENT
        )
        overlay.layoutParams = layoutParams
        addContentView(overlay, layoutParams)

        buttonGroup = overlay.findViewById(R.id.button_group)
        buttonToggle = overlay.findViewById(R.id.buttonToggle)
        leftJoystick = overlay.findViewById(R.id.left_joystick)
        leftJoystickKnob = overlay.findViewById(R.id.left_joystick_knob)
        rightScreenArea = overlay.findViewById(R.id.right_screen_area)

        addButtonTouchListener(overlay.findViewById(R.id.buttonA), ControllerButtons.BUTTON_A)
        addButtonTouchListener(overlay.findViewById(R.id.buttonB), ControllerButtons.BUTTON_X)
        addButtonTouchListener(overlay.findViewById(R.id.buttonX), ControllerButtons.BUTTON_B)
        addButtonTouchListener(overlay.findViewById(R.id.buttonY), ControllerButtons.BUTTON_Y)
        addButtonTouchListener(overlay.findViewById(R.id.buttonL), ControllerButtons.BUTTON_LB)
        addAxisButtonTouchListener(overlay.findViewById(R.id.buttonR), ControllerButtons.AXIS_RT, Short.MAX_VALUE)
        addAxisButtonTouchListener(overlay.findViewById(R.id.buttonZ), ControllerButtons.AXIS_LT, Short.MAX_VALUE)
        addButtonTouchListener(overlay.findViewById(R.id.buttonStart), ControllerButtons.BUTTON_START)
        addButtonTouchListener(overlay.findViewById(R.id.buttonBack), ControllerButtons.BUTTON_BACK)

        addAxisButtonTouchListener(overlay.findViewById(R.id.buttonDpadUp), ControllerButtons.AXIS_RY, Short.MIN_VALUE)
        addAxisButtonTouchListener(overlay.findViewById(R.id.buttonDpadDown), ControllerButtons.AXIS_RY, Short.MAX_VALUE)
        addAxisButtonTouchListener(overlay.findViewById(R.id.buttonDpadLeft), ControllerButtons.AXIS_RX, Short.MIN_VALUE)
        addAxisButtonTouchListener(overlay.findViewById(R.id.buttonDpadRight), ControllerButtons.AXIS_RX, Short.MAX_VALUE)

        setupJoystick()
        setupRightStickArea()
        setupToggleButton()
        applyTouchControlsVisibility()
    }

    private fun setupToggleButton() {
        buttonToggle?.setOnClickListener {
            val hidden = buttonGroup?.visibility == View.VISIBLE
            preferences.edit().putBoolean(PREF_TOUCH_CONTROLS_HIDDEN, hidden).apply()
            applyTouchControlsVisibility()
        }
    }

    private fun applyTouchControlsVisibility() {
        val bg = buttonGroup ?: return
        val ov = overlayView ?: return
        val disabled = preferences.getBoolean(PREF_TOUCH_CONTROLS_DISABLED, false)
        ov.visibility = if (disabled) View.GONE else View.VISIBLE

        val hidden = preferences.getBoolean(PREF_TOUCH_CONTROLS_HIDDEN, false)
        bg.visibility = if (hidden) View.INVISIBLE else View.VISIBLE
    }

    private fun addButtonTouchListener(button: Button?, buttonNum: Int) {
        button?.setOnTouchListener { _, event ->
            when (event.actionMasked) {
                MotionEvent.ACTION_DOWN -> {
                    ensureTouchControllerAttached()
                    setButton(buttonNum, true)
                    button.isPressed = true
                    true
                }
                MotionEvent.ACTION_UP, MotionEvent.ACTION_CANCEL -> {
                    setButton(buttonNum, false)
                    button.isPressed = false
                    true
                }
                else -> true
            }
        }
    }

    private fun addAxisButtonTouchListener(button: Button?, axis: Int, value: Short) {
        button?.setOnTouchListener { _, event ->
            when (event.actionMasked) {
                MotionEvent.ACTION_DOWN -> {
                    ensureTouchControllerAttached()
                    setAxis(axis, value)
                    button.isPressed = true
                    true
                }
                MotionEvent.ACTION_UP, MotionEvent.ACTION_CANCEL -> {
                    setAxis(axis, 0)
                    button.isPressed = false
                    true
                }
                else -> true
            }
        }
    }

    private fun setupJoystick() {
        val joystick = leftJoystick ?: return
        val knob = leftJoystickKnob ?: return

        joystick.post {
            val joystickCenterX = joystick.width / 2.0f
            val joystickCenterY = joystick.height / 2.0f
            val maxRadius = joystick.width / 2.0f - knob.width / 2.0f

            joystick.setOnTouchListener { _, event ->
                when (event.actionMasked) {
                    MotionEvent.ACTION_DOWN, MotionEvent.ACTION_MOVE -> {
                        ensureTouchControllerAttached()
                        var deltaX = event.x - joystickCenterX
                        var deltaY = event.y - joystickCenterY
                        val distance = sqrt((deltaX * deltaX + deltaY * deltaY).toDouble()).toFloat()
                        if (distance > maxRadius && distance > 0.0f) {
                            val scale = maxRadius / distance
                            deltaX *= scale
                            deltaY *= scale
                        }

                        knob.x = joystickCenterX + deltaX - knob.width / 2.0f
                        knob.y = joystickCenterY + deltaY - knob.height / 2.0f

                        setAxis(ControllerButtons.AXIS_LX, (deltaX / maxRadius * Short.MAX_VALUE).toInt().toShort())
                        setAxis(ControllerButtons.AXIS_LY, (deltaY / maxRadius * Short.MAX_VALUE).toInt().toShort())
                        true
                    }
                    MotionEvent.ACTION_UP, MotionEvent.ACTION_CANCEL -> {
                        knob.x = joystickCenterX - knob.width / 2.0f
                        knob.y = joystickCenterY - knob.height / 2.0f
                        setAxis(ControllerButtons.AXIS_LX, 0)
                        setAxis(ControllerButtons.AXIS_LY, 0)
                        true
                    }
                    else -> true
                }
            }
        }
    }

    private fun setupRightStickArea() {
        val area = rightScreenArea ?: return
        val maxRadius = RIGHT_STICK_DRAG_RADIUS_DP * resources.displayMetrics.density

        area.setOnTouchListener { view, event ->
            when (event.actionMasked) {
                MotionEvent.ACTION_DOWN -> {
                    if (event.getX(0) < view.width * 0.5f) {
                        return@setOnTouchListener false
                    }
                    ensureTouchControllerAttached()
                    rightStickPointerId = event.getPointerId(0)
                    rightStickStartX = event.getX(0)
                    rightStickStartY = event.getY(0)
                    setAxis(ControllerButtons.AXIS_RX, 0)
                    setAxis(ControllerButtons.AXIS_RY, 0)
                    true
                }
                MotionEvent.ACTION_POINTER_DOWN -> {
                    if (rightStickPointerId == MotionEvent.INVALID_POINTER_ID) {
                        val pointerIndex = event.actionIndex
                        ensureTouchControllerAttached()
                        rightStickPointerId = event.getPointerId(pointerIndex)
                        rightStickStartX = event.getX(pointerIndex)
                        rightStickStartY = event.getY(pointerIndex)
                    }
                    true
                }
                MotionEvent.ACTION_MOVE -> {
                    val pointerIndex = event.findPointerIndex(rightStickPointerId)
                    if (pointerIndex >= 0) {
                        var deltaX = event.getX(pointerIndex) - rightStickStartX
                        var deltaY = event.getY(pointerIndex) - rightStickStartY
                        val distance = sqrt((deltaX * deltaX + deltaY * deltaY).toDouble()).toFloat()
                        if (distance > maxRadius && distance > 0.0f) {
                            val scale = maxRadius / distance
                            deltaX *= scale
                            deltaY *= scale
                        }
                        setAxis(ControllerButtons.AXIS_RX, (deltaX / maxRadius * Short.MAX_VALUE).toInt().toShort())
                        setAxis(ControllerButtons.AXIS_RY, (deltaY / maxRadius * Short.MAX_VALUE).toInt().toShort())
                    }
                    true
                }
                MotionEvent.ACTION_POINTER_UP -> {
                    if (event.getPointerId(event.actionIndex) == rightStickPointerId) {
                        rightStickPointerId = MotionEvent.INVALID_POINTER_ID
                        setAxis(ControllerButtons.AXIS_RX, 0)
                        setAxis(ControllerButtons.AXIS_RY, 0)
                    }
                    true
                }
                MotionEvent.ACTION_UP, MotionEvent.ACTION_CANCEL -> {
                    rightStickPointerId = MotionEvent.INVALID_POINTER_ID
                    setAxis(ControllerButtons.AXIS_RX, 0)
                    setAxis(ControllerButtons.AXIS_RY, 0)
                    true
                }
                else -> true
            }
        }
    }

    private fun checkAndRequestStoragePermissions() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            if (!android.os.Environment.isExternalStorageManager()) {
                try {
                    val intent = Intent(android.provider.Settings.ACTION_MANAGE_APP_ALL_FILES_ACCESS_PERMISSION).apply {
                        data = android.net.Uri.parse("package:$packageName")
                    }
                    startActivity(intent)
                } catch (e: Exception) {
                    try {
                        startActivity(Intent(android.provider.Settings.ACTION_MANAGE_ALL_FILES_ACCESS_PERMISSION))
                    } catch (ignored: Exception) {}
                }
            }
        } else {
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
        val candidates = arrayOf(
            File(filesDir, "bmhero.z64").absolutePath,
            File(filesDir, "roms/bmhero.z64").absolutePath,
            "/sdcard/BMH/bmhero.z64",
            "/sdcard/bmhero.z64"
        )
        for (candidate in candidates) {
            val file = File(candidate)
            if (file.exists() && file.length() > 0) {
                return candidate
            }
        }
        return null
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
