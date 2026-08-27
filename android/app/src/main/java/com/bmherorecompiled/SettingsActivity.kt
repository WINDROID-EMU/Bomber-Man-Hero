package com.bmherorecompiled

import android.content.pm.ActivityInfo
import android.os.Bundle
import android.widget.ArrayAdapter
import android.widget.Button
import android.widget.SeekBar
import android.widget.Spinner
import android.widget.TextView
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity

/**
 * SettingsActivity — Configuration Screen for Bomberman Hero Recompiled
 * Allows tweaking graphics, audio, and touch control settings.
 */
class SettingsActivity : AppCompatActivity() {

    private lateinit var spinResolution: Spinner
    private lateinit var spinAspectRatio: Spinner
    private lateinit var spinMSAA: Spinner
    private lateinit var seekTouchOpacity: SeekBar
    private lateinit var seekVibration: SeekBar
    private lateinit var seekBgmVolume: SeekBar
    private lateinit var txtTouchOpacityValue: TextView
    private lateinit var txtVibrationValue: TextView
    private lateinit var txtBgmValue: TextView

    private val resOptions = arrayOf("720p", "Auto", "1080p", "240p (Nativo)")
    private val aspectOptions = arrayOf("16:9 (Widescreen)", "4:3 (Original)")
    private val msaaOptions = arrayOf("Off", "2x", "4x")

    override fun onCreate(savedInstanceState: Bundle?) {
        requestedOrientation = ActivityInfo.SCREEN_ORIENTATION_LANDSCAPE
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_settings)

        spinResolution = findViewById(R.id.spinResolution)
        spinAspectRatio = findViewById(R.id.spinAspectRatio)
        spinMSAA = findViewById(R.id.spinMSAA)
        seekTouchOpacity = findViewById(R.id.seekTouchOpacity)
        seekVibration = findViewById(R.id.seekVibration)
        seekBgmVolume = findViewById(R.id.seekBgmVolume)
        txtTouchOpacityValue = findViewById(R.id.txtTouchOpacityValue)
        txtVibrationValue = findViewById(R.id.txtVibrationValue)
        txtBgmValue = findViewById(R.id.txtBgmValue)

        val btnSave = findViewById<Button>(R.id.btnSave)
        val btnReset = findViewById<Button>(R.id.btnReset)

        setupSpinners()
        setupSeekBars()
        loadCurrentConfig()

        btnSave.setOnClickListener {
            saveCurrentConfig()
            Toast.makeText(this, "Configurações salvas com sucesso!", Toast.LENGTH_SHORT).show()
            finish()
        }

        btnReset.setOnClickListener {
            ConfigManager.resetToDefaults()
            loadCurrentConfig()
            Toast.makeText(this, "Configurações restauradas para o padrão!", Toast.LENGTH_SHORT).show()
        }
    }

    private fun setupSpinners() {
        val adapterRes = ArrayAdapter(this, android.R.layout.simple_spinner_dropdown_item, resOptions)
        spinResolution.adapter = adapterRes

        val adapterAspect = ArrayAdapter(this, android.R.layout.simple_spinner_dropdown_item, aspectOptions)
        spinAspectRatio.adapter = adapterAspect

        val adapterMsaa = ArrayAdapter(this, android.R.layout.simple_spinner_dropdown_item, msaaOptions)
        spinMSAA.adapter = adapterMsaa
    }

    private fun setupSeekBars() {
        seekTouchOpacity.setOnSeekBarChangeListener(object : SeekBar.OnSeekBarChangeListener {
            override fun onProgressChanged(seekBar: SeekBar?, progress: Int, fromUser: Boolean) {
                txtTouchOpacityValue.text = "${progress.coerceAtLeast(10)}%"
            }
            override fun onStartTrackingTouch(seekBar: SeekBar?) {}
            override fun onStopTrackingTouch(seekBar: SeekBar?) {}
        })

        seekVibration.setOnSeekBarChangeListener(object : SeekBar.OnSeekBarChangeListener {
            override fun onProgressChanged(seekBar: SeekBar?, progress: Int, fromUser: Boolean) {
                txtVibrationValue.text = "$progress%"
            }
            override fun onStartTrackingTouch(seekBar: SeekBar?) {}
            override fun onStopTrackingTouch(seekBar: SeekBar?) {}
        })

        seekBgmVolume.setOnSeekBarChangeListener(object : SeekBar.OnSeekBarChangeListener {
            override fun onProgressChanged(seekBar: SeekBar?, progress: Int, fromUser: Boolean) {
                txtBgmValue.text = "$progress%"
            }
            override fun onStartTrackingTouch(seekBar: SeekBar?) {}
            override fun onStopTrackingTouch(seekBar: SeekBar?) {}
        })
    }

    private fun loadCurrentConfig() {
        ConfigManager.load()

        spinResolution.setSelection(resOptions.indexOf(ConfigManager.resolution).coerceAtLeast(0))
        val aspectIndex = if (ConfigManager.aspectRatio.contains("16:9")) 0 else 1
        spinAspectRatio.setSelection(aspectIndex)
        spinMSAA.setSelection(msaaOptions.indexOf(ConfigManager.msaa).coerceAtLeast(0))

        seekTouchOpacity.progress = ConfigManager.touchOpacity
        seekVibration.progress = ConfigManager.vibrationStrength
        seekBgmVolume.progress = ConfigManager.bgmVolume

        txtTouchOpacityValue.text = "${ConfigManager.touchOpacity}%"
        txtVibrationValue.text = "${ConfigManager.vibrationStrength}%"
        txtBgmValue.text = "${ConfigManager.bgmVolume}%"
    }

    private fun saveCurrentConfig() {
        ConfigManager.resolution = spinResolution.selectedItem.toString()
        ConfigManager.aspectRatio = if (spinAspectRatio.selectedItemPosition == 0) "16:9" else "4:3"
        ConfigManager.msaa = spinMSAA.selectedItem.toString()
        ConfigManager.touchOpacity = seekTouchOpacity.progress.coerceAtLeast(10)
        ConfigManager.vibrationStrength = seekVibration.progress
        ConfigManager.bgmVolume = seekBgmVolume.progress

        ConfigManager.save()
    }
}
