package com.bmherorecompiled

import android.os.Environment
import android.util.Log
import org.json.JSONObject
import java.io.File

/**
 * ConfigManager — Configuration Storage Manager for Bomberman Hero Recompiled
 * Saves and loads options safely from /sdcard/BMH/config.json or internal fallback.
 */
object ConfigManager {
    private const val TAG = "BMHConfig"

    private fun getConfigFile(): File {
        try {
            val publicFolder = File(Environment.getExternalStorageDirectory(), "BMH")
            if (publicFolder.exists() || publicFolder.mkdirs()) {
                return File(publicFolder, "config.json")
            }
        } catch (e: Exception) {
            Log.w(TAG, "Cannot access external storage /sdcard/BMH, using internal fallback", e)
        }
        val fallback = File("/data/data/com.bmherorecompiled/files/config/config.json")
        try {
            fallback.parentFile?.mkdirs()
        } catch (ignored: Exception) {}
        return fallback
    }

    // Default configuration values
    var resolution: String = "720p"          // "Auto", "720p", "1080p", "240p"
    var aspectRatio: String = "16:9"         // "16:9", "4:3"
    var msaa: String = "Off"                 // "Off", "2x", "4x"
    var framerate: Int = 60                  // 30, 60, 120
    var bgmVolume: Int = 100                 // 0 to 100
    var sfxVolume: Int = 100                 // 0 to 100
    var touchOpacity: Int = 80               // 10 to 100 (%)
    var vibrationStrength: Int = 100         // 0 to 100 (%)
    var driverType: String = "turnip"        // "system", "turnip", "custom"
    var driverName: String = "Turnip (Mesa 26.0.0)"
    var customDriverPath: String = ""
    var customDriverLibrary: String = ""

    fun load() {
        try {
            val file = getConfigFile()
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
            driverType = json.optString("driverType", "turnip")
            driverName = json.optString("driverName", "Turnip (Mesa 26.0.0)")
            customDriverPath = json.optString("customDriverPath", "")
            customDriverLibrary = json.optString("customDriverLibrary", "")

            Log.i(TAG, "Config loaded successfully from ${file.absolutePath}")
        } catch (e: Exception) {
            Log.e(TAG, "Error loading config file", e)
        }
    }

    fun save() {
        try {
            val file = getConfigFile()
            file.parentFile?.mkdirs()
            val json = JSONObject().apply {
                put("resolution", resolution)
                put("aspectRatio", aspectRatio)
                put("msaa", msaa)
                put("framerate", framerate)
                put("bgmVolume", bgmVolume)
                put("sfxVolume", sfxVolume)
                put("touchOpacity", touchOpacity)
                put("vibrationStrength", vibrationStrength)
                put("driverType", driverType)
                put("driverName", driverName)
                put("customDriverPath", customDriverPath)
                put("customDriverLibrary", customDriverLibrary)
            }
            file.writeText(json.toString(4))
            Log.i(TAG, "Config saved successfully to ${file.absolutePath}")
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
        driverType = "turnip"
        driverName = "Turnip (Mesa 26.0.0)"
        customDriverPath = ""
        customDriverLibrary = ""
        save()
    }

    fun extractTurnipDriver(context: android.content.Context) {
        try {
            val turnipDir = File(context.filesDir, "drivers/turnip")
            if (!turnipDir.exists()) {
                turnipDir.mkdirs()
            }
            val driversDir = File(context.filesDir, "drivers")
            if (!driversDir.exists()) {
                driversDir.mkdirs()
            }

            val availableAssets = context.assets.list("drivers") ?: emptyArray()
            Log.i(TAG, "Assets in drivers/: ${availableAssets.joinToString(", ")}")

            for (assetName in availableAssets) {
                try {
                    val outFile = File(turnipDir, assetName)
                    if (!outFile.exists() || outFile.length() == 0L) {
                        context.assets.open("drivers/$assetName").use { input ->
                            outFile.outputStream().use { output ->
                                input.copyTo(output)
                            }
                        }
                        if (assetName.endsWith(".so")) {
                            outFile.setExecutable(true)
                        }
                        Log.i(TAG, "Extracted asset drivers/$assetName (${outFile.length()} bytes)")
                    }

                    if (assetName.endsWith(".so")) {
                        // Also make lowercase alias
                        val lowerFile = File(turnipDir, assetName.lowercase())
                        if (!lowerFile.exists() || lowerFile.length() == 0L) {
                            outFile.copyTo(lowerFile, overwrite = true)
                            lowerFile.setExecutable(true)
                        }

                        // Copy to root drivers folder
                        val rootFile = File(driversDir, assetName)
                        val rootFileLower = File(driversDir, assetName.lowercase())
                        if (!rootFile.exists() || rootFile.length() == 0L) {
                            outFile.copyTo(rootFile, overwrite = true)
                            rootFile.setExecutable(true)
                        }
                        if (!rootFileLower.exists() || rootFileLower.length() == 0L) {
                            outFile.copyTo(rootFileLower, overwrite = true)
                            rootFileLower.setExecutable(true)
                        }
                    } else if (assetName.endsWith(".json")) {
                        val rootMeta = File(driversDir, assetName)
                        if (!rootMeta.exists() || rootMeta.length() == 0L) {
                            outFile.copyTo(rootMeta, overwrite = true)
                        }
                    }
                } catch (e: Exception) {
                    Log.w(TAG, "Error extracting asset drivers/$assetName: ${e.message}")
                }
            }
        } catch (e: Exception) {
            Log.w(TAG, "Could not list or extract turnip drivers: ${e.message}")
        }
    }
}
