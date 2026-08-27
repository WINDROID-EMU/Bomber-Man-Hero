package com.bmherorecompiled

import android.util.Log
import org.json.JSONObject
import java.io.File

/**
 * ConfigManager — Configuration Storage Manager for Bomberman Hero Recompiled
 * Saves and loads options to/from /sdcard/BMH/config.json
 */
object ConfigManager {
    private const val TAG = "BMHConfig"
    private const val CONFIG_PATH = "/sdcard/BMH/config.json"

    // Default configuration values
    var resolution: String = "720p"          // "Auto", "720p", "1080p", "240p"
    var aspectRatio: String = "16:9"         // "16:9", "4:3"
    var msaa: String = "Off"                 // "Off", "2x", "4x"
    var framerate: Int = 60                  // 30, 60, 120
    var bgmVolume: Int = 100                 // 0 to 100
    var sfxVolume: Int = 100                 // 0 to 100
    var touchOpacity: Int = 80               // 10 to 100 (%)
    var vibrationStrength: Int = 100         // 0 to 100 (%)

    fun load() {
        try {
            val file = File(CONFIG_PATH)
            if (!file.exists()) {
                save() // create default config file
                return
            }
            val jsonStr = file.readText()
            val json = JSONObject(jsonStr)

            resolution = json.optString("resolution", "720p")
            aspectRatio = json.optString("aspectRatio", "16:9")
            msaa = json.optString("msaa", "Off")
            framerate = json.optInt("framerate", 60)
            bgmVolume = json.optInt("bgmVolume", 100)
            sfxVolume = json.optInt("sfxVolume", 100)
            touchOpacity = json.optInt("touchOpacity", 80)
            vibrationStrength = json.optInt("vibrationStrength", 100)

            Log.i(TAG, "Config loaded successfully from $CONFIG_PATH")
        } catch (e: Exception) {
            Log.e(TAG, "Error loading config file", e)
        }
    }

    fun save() {
        try {
            val folder = File("/sdcard/BMH")
            if (!folder.exists()) {
                folder.mkdirs()
            }
            val json = JSONObject().apply {
                put("resolution", resolution)
                put("aspectRatio", aspectRatio)
                put("msaa", msaa)
                put("framerate", framerate)
                put("bgmVolume", bgmVolume)
                put("sfxVolume", sfxVolume)
                put("touchOpacity", touchOpacity)
                put("vibrationStrength", vibrationStrength)
            }
            File(CONFIG_PATH).writeText(json.toString(4))
            Log.i(TAG, "Config saved successfully to $CONFIG_PATH")
        } catch (e: Exception) {
            Log.e(TAG, "Error saving config file", e)
        }
    }

    fun resetToDefaults() {
        resolution = "720p"
        aspectRatio = "16:9"
        msaa = "Off"
        framerate = 60
        bgmVolume = 100
        sfxVolume = 100
        touchOpacity = 80
        vibrationStrength = 100
        save()
    }
}
