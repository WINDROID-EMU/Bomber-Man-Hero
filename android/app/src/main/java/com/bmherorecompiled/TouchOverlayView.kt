package com.bmherorecompiled

import android.content.Context
import android.graphics.Canvas
import android.graphics.Color
import android.graphics.Paint
import android.graphics.RectF
import android.view.KeyEvent
import android.view.MotionEvent
import android.view.View
import org.libsdl.app.SDLActivity
import kotlin.math.atan2
import kotlin.math.hypot

/**
 * TouchOverlayView — Virtual Touchscreen Controller Overlay for Bomberman Hero
 *
 * Renders translucent D-Pad, A, B, Z, R, and Start buttons on top of SDL Surface.
 * Dispatches native KeyEvents directly to SDLActivity.onNativeKeyDown/Up.
 */
class TouchOverlayView(context: Context) : View(context) {

    private val paint = Paint(Paint.ANTI_ALIAS_FLAG)
    private val textPaint = Paint(Paint.ANTI_ALIAS_FLAG).apply {
        color = Color.WHITE
        textAlign = Paint.Align.CENTER
        textSize = 28f
        isFakeBoldText = true
    }

    private data class TouchButton(
        val name: String,
        val keyCode: Int,
        var rect: RectF = RectF(),
        var isPressed: Boolean = false,
        var pointerId: Int = -1,
        val color: Int = Color.argb(140, 255, 255, 255)
    )

    // Action buttons
    private val btnA = TouchButton("A", KeyEvent.KEYCODE_BUTTON_A, color = Color.argb(160, 46, 204, 113))
    private val btnB = TouchButton("B", KeyEvent.KEYCODE_BUTTON_B, color = Color.argb(160, 231, 76, 60))
    private val btnZ = TouchButton("Z", KeyEvent.KEYCODE_BUTTON_L1, color = Color.argb(160, 155, 89, 182))
    private val btnR = TouchButton("R", KeyEvent.KEYCODE_BUTTON_R1, color = Color.argb(160, 52, 152, 219))
    private val btnStart = TouchButton("START", KeyEvent.KEYCODE_BUTTON_START, color = Color.argb(160, 241, 196, 15))

    private val actionButtons = listOf(btnA, btnB, btnZ, btnR, btnStart)

    // Joystick / D-Pad state
    private var joystickCenterX = 0f
    private var joystickCenterY = 0f
    private var joystickRadius = 120f
    private var stickX = 0f
    private var stickY = 0f
    private var joystickPointerId = -1

    private var activeDpadKeys = mutableSetOf<Int>()

    override fun onSizeChanged(w: Int, h: Int, oldw: Int, oldh: Int) {
        super.onSizeChanged(w, h, oldw, oldh)

        val realW = if (w > h) w else h
        val realH = if (w > h) h else w

        // Compact ergonomics for mobile touch controller (always landscape)
        joystickRadius = realH * 0.15f
        joystickCenterX = joystickRadius + 60f
        joystickCenterY = realH - joystickRadius - 60f
        stickX = joystickCenterX
        stickY = joystickCenterY

        val btnRadius = realH * 0.065f
        val rightX = realW - btnRadius - 80f
        val bottomY = realH - btnRadius - 80f

        btnA.rect.set(rightX - btnRadius, bottomY - btnRadius, rightX + btnRadius, bottomY + btnRadius)
        btnB.rect.set(rightX - btnRadius * 2.5f - btnRadius, bottomY + btnRadius * 0.3f - btnRadius, rightX - btnRadius * 2.5f + btnRadius, bottomY + btnRadius * 0.3f + btnRadius)
        btnZ.rect.set(rightX - btnRadius * 1.3f - btnRadius, bottomY - btnRadius * 2.3f - btnRadius, rightX - btnRadius * 1.3f + btnRadius, bottomY - btnRadius * 2.3f + btnRadius)
        btnR.rect.set(rightX + btnRadius * 0.2f - btnRadius, bottomY - btnRadius * 2.3f - btnRadius, rightX + btnRadius * 0.2f + btnRadius, bottomY - btnRadius * 2.3f + btnRadius)

        // Start button on top right
        val startW = 100f
        val startH = 48f
        btnStart.rect.set(realW - startW - 30f, 24f, realW - 30f, 24f + startH)
    }

    override fun onDraw(canvas: Canvas) {
        super.onDraw(canvas)

        // Draw Joystick Base
        paint.color = Color.argb(80, 255, 255, 255)
        paint.style = Paint.Style.FILL
        canvas.drawCircle(joystickCenterX, joystickCenterY, joystickRadius, paint)

        paint.color = Color.argb(160, 255, 255, 255)
        paint.style = Paint.Style.STROKE
        paint.strokeWidth = 6f
        canvas.drawCircle(joystickCenterX, joystickCenterY, joystickRadius, paint)

        // Draw Joystick Stick Knob
        paint.style = Paint.Style.FILL
        paint.color = if (joystickPointerId != -1) Color.argb(200, 52, 152, 219) else Color.argb(140, 200, 200, 200)
        canvas.drawCircle(stickX, stickY, joystickRadius * 0.45f, paint)

        // Draw Action Buttons
        for (btn in actionButtons) {
            paint.style = Paint.Style.FILL
            paint.color = if (btn.isPressed) Color.WHITE else btn.color
            if (btn == btnStart) {
                canvas.drawRoundRect(btn.rect, 20f, 20f, paint)
            } else {
                canvas.drawCircle(btn.rect.centerX(), btn.rect.centerY(), btn.rect.width() / 2f, paint)
            }

            // Text label
            textPaint.color = if (btn.isPressed) Color.BLACK else Color.WHITE
            val textY = btn.rect.centerY() - ((textPaint.descent() + textPaint.ascent()) / 2f)
            canvas.drawText(btn.name, btn.rect.centerX(), textY, textPaint)
        }
    }

    override fun onTouchEvent(event: MotionEvent): Boolean {
        val action = event.actionMasked
        val pointerIndex = event.actionIndex
        val pointerId = event.getPointerId(pointerIndex)
        val x = event.getX(pointerIndex)
        val y = event.getY(pointerIndex)

        when (action) {
            MotionEvent.ACTION_DOWN, MotionEvent.ACTION_POINTER_DOWN -> {
                // Check if touch is in Joystick area
                if (joystickPointerId == -1 && hypot(x - joystickCenterX, y - joystickCenterY) <= joystickRadius * 1.5f) {
                    joystickPointerId = pointerId
                    updateJoystick(x, y)
                } else {
                    // Check Action Buttons
                    for (btn in actionButtons) {
                        if (!btn.isPressed && btn.rect.contains(x, y)) {
                            btn.isPressed = true
                            btn.pointerId = pointerId
                            pressKey(btn.keyCode, true)
                            invalidate()
                            break
                        }
                    }
                }
            }

            MotionEvent.ACTION_MOVE -> {
                for (i in 0 until event.pointerCount) {
                    val pId = event.getPointerId(i)
                    val px = event.getX(i)
                    val py = event.getY(i)

                    if (pId == joystickPointerId) {
                        updateJoystick(px, py)
                    }
                }
            }

            MotionEvent.ACTION_UP, MotionEvent.ACTION_POINTER_UP, MotionEvent.ACTION_CANCEL -> {
                if (pointerId == joystickPointerId) {
                    joystickPointerId = -1
                    stickX = joystickCenterX
                    stickY = joystickCenterY
                    clearDpadKeys()
                    invalidate()
                } else {
                    for (btn in actionButtons) {
                        if (btn.pointerId == pointerId) {
                            btn.isPressed = false
                            btn.pointerId = -1
                            pressKey(btn.keyCode, false)
                            invalidate()
                        }
                    }
                }
            }
        }
        return true
    }

    private fun updateJoystick(touchX: Float, touchY: Float) {
        val dx = touchX - joystickCenterX
        val dy = touchY - joystickCenterY
        val dist = hypot(dx, dy)

        if (dist <= joystickRadius) {
            stickX = touchX
            stickY = touchY
        } else {
            val angle = atan2(dy, dx)
            stickX = joystickCenterX + (joystickRadius * kotlin.math.cos(angle))
            stickY = joystickCenterY + (joystickRadius * kotlin.math.sin(angle))
        }

        // Convert offset to D-Pad key presses
        val normX = (stickX - joystickCenterX) / joystickRadius
        val normY = (stickY - joystickCenterY) / joystickRadius

        val newKeys = mutableSetOf<Int>()
        val deadzone = 0.35f

        if (normY < -deadzone) newKeys.add(KeyEvent.KEYCODE_DPAD_UP)
        if (normY > deadzone) newKeys.add(KeyEvent.KEYCODE_DPAD_DOWN)
        if (normX < -deadzone) newKeys.add(KeyEvent.KEYCODE_DPAD_LEFT)
        if (normX > deadzone) newKeys.add(KeyEvent.KEYCODE_DPAD_RIGHT)

        // Release keys no longer active
        for (k in activeDpadKeys - newKeys) {
            pressKey(k, false)
        }
        // Press new keys
        for (k in newKeys - activeDpadKeys) {
            pressKey(k, true)
        }
        activeDpadKeys = newKeys
        invalidate()
    }

    private fun clearDpadKeys() {
        for (k in activeDpadKeys) {
            pressKey(k, false)
        }
        activeDpadKeys.clear()
    }

    private fun pressKey(keyCode: Int, down: Boolean) {
        try {
            if (down) {
                SDLActivity.onNativeKeyDown(keyCode)
            } else {
                SDLActivity.onNativeKeyUp(keyCode)
            }
        } catch (e: Exception) {
            // Ignore if native JNI not ready
        }
    }
}
