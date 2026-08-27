package com.bmherorecompiled

import android.app.Activity
import android.content.Context
import android.content.Intent
import android.os.Bundle
import android.os.Environment
import android.view.View
import android.widget.Button
import android.widget.RadioButton
import android.widget.RadioGroup
import android.widget.Toast
import java.io.File

/**
 * DriverSelectorActivity - Allows user to select custom Vulkan driver
 * 
 * This activity provides a UI for selecting between:
 * - System default driver (no custom driver)
 * - Custom driver from device storage (e.g., Turnip)
 * 
 * The selected driver path is stored and passed to MainActivity for loading via adrenotools.
 */
class DriverSelectorActivity : Activity() {

    companion object {
        const val EXTRA_DRIVER_PATH = "driver_path"
        const val EXTRA_DRIVER_NAME = "driver_name"
        const val RESULT_DRIVER_SELECTED = 2001
        
        // Shared preferences key for storing driver selection
        private const val PREFS_NAME = "DriverPrefs"
        private const val PREF_DRIVER_PATH = "custom_driver_path"
        private const val PREF_DRIVER_NAME = "custom_driver_name"
        private const val PREF_USE_CUSTOM = "use_custom_driver"
        
        fun getStoredDriverPath(context: Context): String? {
            val prefs = context.getSharedPreferences(PREFS_NAME, Context.MODE_PRIVATE)
            return if (prefs.getBoolean(PREF_USE_CUSTOM, false)) {
                prefs.getString(PREF_DRIVER_PATH, null)
            } else {
                null
            }
        }
        
        fun getStoredDriverName(context: Context): String? {
            val prefs = context.getSharedPreferences(PREFS_NAME, Context.MODE_PRIVATE)
            return if (prefs.getBoolean(PREF_USE_CUSTOM, false)) {
                prefs.getString(PREF_DRIVER_NAME, null)
            } else {
                null
            }
        }
    }

    private lateinit var radioGroup: RadioGroup
    private lateinit var rbSystemDriver: RadioButton
    private lateinit var rbCustomDriver: RadioButton
    private lateinit var btnSelectCustom: Button
    private lateinit var btnConfirm: Button
    
    private var customDriverPath: String? = null
    private var customDriverName: String? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        
        // Create a simple UI programmatically
        val layout = android.widget.LinearLayout(this).apply {
            orientation = android.widget.LinearLayout.VERTICAL
            setPadding(32, 32, 32, 32)
        }
        
        // Title
        val title = android.widget.TextView(this).apply {
            text = "Vulkan Driver Selection"
            textSize = 20f
            setTypeface(null, android.graphics.Typeface.BOLD)
            setPadding(0, 0, 0, 24)
        }
        layout.addView(title)
        
        // Description
        val desc = android.widget.TextView(this).apply {
            text = "Select the Vulkan driver to use for rendering.\n\n" +
                   "System Default: Uses the device's default Adreno driver\n" +
                   "Turnip (Mesa 26.0.0): Open-source Vulkan driver for Adreno GPUs\n" +
                   "  - May fix compatibility issues with newer Vulkan features\n" +
                   "  - Better support for AHB (Android Hardware Buffer)"
            textSize = 14f
            setPadding(0, 0, 0, 16)
        }
        layout.addView(desc)
        
        // Radio group for driver selection
        radioGroup = RadioGroup(this)
        
        rbSystemDriver = RadioButton(this).apply {
            text = "System Default Driver"
            id = View.generateViewId()
        }
        radioGroup.addView(rbSystemDriver)
        
        rbCustomDriver = RadioButton(this).apply {
            text = "Turnip (Mesa 26.0.0)"
            id = View.generateViewId()
        }
        radioGroup.addView(rbCustomDriver)
        
        layout.addView(radioGroup)
        
        // Button to select custom driver file
        btnSelectCustom = Button(this).apply {
            text = "Select Custom Driver File"
            setOnClickListener { selectCustomDriver() }
            isEnabled = false
            setPadding(0, 16, 0, 8)
        }
        layout.addView(btnSelectCustom)
        
        // Selected driver info
        val driverInfo = android.widget.TextView(this).apply {
            id = View.generateViewId()
            text = ""
            textSize = 12f
            setPadding(0, 0, 0, 16)
        }
        layout.addView(driverInfo)
        
        // Confirm button
        btnConfirm = Button(this).apply {
            text = "Confirm Selection"
            setOnClickListener { confirmSelection() }
            setPadding(0, 16, 0, 0)
        }
        layout.addView(btnConfirm)
        
        setContentView(layout)
        
        // Load saved preference
        loadSavedPreference()
        
        // Setup radio button listener
        radioGroup.setOnCheckedChangeListener { _, checkedId ->
            btnSelectCustom.isEnabled = (checkedId == rbCustomDriver.id)
        }
    }
    
    private fun loadSavedPreference() {
        val prefs = getSharedPreferences(PREFS_NAME, Context.MODE_PRIVATE)
        val useCustom = prefs.getBoolean(PREF_USE_CUSTOM, false)
        
        if (useCustom) {
            customDriverPath = prefs.getString(PREF_DRIVER_PATH, null)
            customDriverName = prefs.getString(PREF_DRIVER_NAME, null)
            rbCustomDriver.isChecked = true
            updateDriverInfo()
        } else {
            rbSystemDriver.isChecked = true
        }
    }
    
    private fun selectCustomDriver() {
        // Extract Turnip driver from assets to internal storage
        val filesDir = filesDir.absolutePath
        val driverDir = File(filesDir, "turnip")
        val driverFile = File(driverDir, "vulkan.ad07XX.so")
        val metaFile = File(driverDir, "meta.json")
        
        // Create driver directory if it doesn't exist
        if (!driverDir.exists()) {
            driverDir.mkdirs()
        }
        
        // Extract driver from assets if not already extracted
        try {
            if (!driverFile.exists()) {
                assets.open("drivers/vulkan.ad07XX.so").use { input ->
                    driverFile.outputStream().use { output ->
                        input.copyTo(output)
                    }
                }
            }
            
            if (!metaFile.exists()) {
                assets.open("drivers/meta.json").use { input ->
                    metaFile.outputStream().use { output ->
                        input.copyTo(output)
                    }
                }
            }
            
            // Set executable permissions
            driverFile.setExecutable(true)
            
            customDriverPath = driverFile.absolutePath
            customDriverName = "vulkan.ad07XX.so"
            updateDriverInfo()
            Toast.makeText(this, "Turnip driver extracted and selected", Toast.LENGTH_SHORT).show()
            
        } catch (e: Exception) {
            Toast.makeText(this, "Failed to extract driver: ${e.message}", Toast.LENGTH_LONG).show()
            e.printStackTrace()
        }
    }
    
    private fun updateDriverInfo() {
        val driverInfo = findViewById<android.widget.TextView>(View.generateViewId())
        if (customDriverPath != null) {
            driverInfo.text = "Selected: $customDriverName\nPath: $customDriverPath"
        } else {
            driverInfo.text = ""
        }
    }
    
    private fun confirmSelection() {
        val prefs = getSharedPreferences(PREFS_NAME, Context.MODE_PRIVATE)
        val editor = prefs.edit()
        
        if (rbCustomDriver.isChecked && customDriverPath != null) {
            editor.putBoolean(PREF_USE_CUSTOM, true)
            editor.putString(PREF_DRIVER_PATH, customDriverPath)
            editor.putString(PREF_DRIVER_NAME, customDriverName)
        } else {
            editor.putBoolean(PREF_USE_CUSTOM, false)
            editor.remove(PREF_DRIVER_PATH)
            editor.remove(PREF_DRIVER_NAME)
        }
        editor.apply()
        
        // Return result to MainActivity
        val resultIntent = Intent().apply {
            if (rbCustomDriver.isChecked && customDriverPath != null) {
                putExtra(EXTRA_DRIVER_PATH, customDriverPath)
                putExtra(EXTRA_DRIVER_NAME, customDriverName)
            }
        }
        setResult(RESULT_DRIVER_SELECTED, resultIntent)
        finish()
    }
}
