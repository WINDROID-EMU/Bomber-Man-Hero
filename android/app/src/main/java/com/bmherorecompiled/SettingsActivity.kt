package com.bmherorecompiled

import android.app.Activity
import android.content.Intent
import android.content.pm.ActivityInfo
import android.net.Uri
import android.os.Bundle
import android.util.Log
import android.view.View
import android.widget.AdapterView
import android.widget.ArrayAdapter
import android.widget.Button
import android.widget.SeekBar
import android.widget.Spinner
import android.widget.TextView
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import org.json.JSONObject
import java.io.File
import java.io.FileOutputStream
import java.util.zip.ZipInputStream

/**
 * SettingsActivity — Configuration Screen for Bomberman Hero Recompiled
 * Allows tweaking graphics, audio, touch control settings, and Vulkan GPU Drivers (AdrenoTools).
 */
class SettingsActivity : AppCompatActivity() {

    companion object {
        private const val TAG = "SettingsActivity"
        private const val REQUEST_PICK_DRIVER = 3001
    }

    private lateinit var spinResolution: Spinner
    private lateinit var spinAspectRatio: Spinner
    private lateinit var spinMSAA: Spinner
    private lateinit var spinDriver: Spinner
    private lateinit var txtDriverInfo: TextView
    private lateinit var btnInstallDriver: Button

    private lateinit var seekTouchOpacity: SeekBar
    private lateinit var seekVibration: SeekBar
    private lateinit var seekBgmVolume: SeekBar
    private lateinit var txtTouchOpacityValue: TextView
    private lateinit var txtVibrationValue: TextView
    private lateinit var txtBgmValue: TextView

    private val resOptions = arrayOf("720p", "Auto", "1080p", "240p (Nativo)")
    private val aspectOptions = arrayOf("16:9 (Widescreen)", "4:3 (Original)")
    private val msaaOptions = arrayOf("Off", "2x", "4x")
    private val driverOptions = arrayOf(
        "Turnip (Mesa 26.0.0 Integrado)",
        "Padrão do Sistema (System Default)",
        "Personalizado (Custom Driver)"
    )

    override fun onCreate(savedInstanceState: Bundle?) {
        requestedOrientation = ActivityInfo.SCREEN_ORIENTATION_LANDSCAPE
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_settings)

        spinResolution = findViewById(R.id.spinResolution)
        spinAspectRatio = findViewById(R.id.spinAspectRatio)
        spinMSAA = findViewById(R.id.spinMSAA)
        spinDriver = findViewById(R.id.spinDriver)
        txtDriverInfo = findViewById(R.id.txtDriverInfo)
        btnInstallDriver = findViewById(R.id.btnInstallDriver)

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

        btnInstallDriver.setOnClickListener {
            openDriverPicker()
        }

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

        val adapterDriver = ArrayAdapter(this, android.R.layout.simple_spinner_dropdown_item, driverOptions)
        spinDriver.adapter = adapterDriver

        spinDriver.onItemSelectedListener = object : AdapterView.OnItemSelectedListener {
            override fun onItemSelected(parent: AdapterView<*>?, view: View?, position: Int, id: Long) {
                updateDriverInfoText(position)
            }
            override fun onNothingSelected(parent: AdapterView<*>?) {}
        }
    }

    private fun updateDriverInfoText(position: Int) {
        when (position) {
            0 -> {
                txtDriverInfo.text = "Driver ativo: Turnip Mesa 26.0.0 (Adreno Vulkan 1.4)"
            }
            1 -> {
                txtDriverInfo.text = "Driver ativo: Padrão do Dispositivo (Qualcomm / Sistema)"
            }
            2 -> {
                if (ConfigManager.customDriverLibrary.isNotEmpty()) {
                    txtDriverInfo.text = "Driver ativo: ${ConfigManager.driverName} (${ConfigManager.customDriverLibrary})"
                } else {
                    txtDriverInfo.text = "Nenhum driver customizado instalado ainda. Clique em 'Instalar Driver'."
                }
            }
        }
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

        val driverIndex = when (ConfigManager.driverType) {
            "turnip" -> 0
            "system" -> 1
            "custom" -> 2
            else -> 0
        }
        spinDriver.setSelection(driverIndex)
        updateDriverInfoText(driverIndex)

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

        ConfigManager.driverType = when (spinDriver.selectedItemPosition) {
            0 -> "turnip"
            1 -> "system"
            2 -> "custom"
            else -> "turnip"
        }

        ConfigManager.touchOpacity = seekTouchOpacity.progress.coerceAtLeast(10)
        ConfigManager.vibrationStrength = seekVibration.progress
        ConfigManager.bgmVolume = seekBgmVolume.progress

        ConfigManager.save()
    }

    private fun openDriverPicker() {
        try {
            val intent = Intent(Intent.ACTION_OPEN_DOCUMENT).apply {
                addCategory(Intent.CATEGORY_OPENABLE)
                type = "*/*"
                putExtra(
                    Intent.EXTRA_MIME_TYPES, arrayOf(
                        "application/zip",
                        "application/x-zip-compressed",
                        "application/octet-stream",
                        "application/x-sharedlib"
                    )
                )
            }
            startActivityForResult(intent, REQUEST_PICK_DRIVER)
        } catch (e: Exception) {
            Log.e(TAG, "Erro ao abrir seletor de arquivos de driver", e)
            Toast.makeText(this, "Não foi possível abrir o seletor de arquivos", Toast.LENGTH_SHORT).show()
        }
    }

    @Deprecated("Deprecated in Java")
    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)
        if (requestCode == REQUEST_PICK_DRIVER && resultCode == Activity.RESULT_OK && data?.data != null) {
            handlePickedDriver(data.data!!)
        }
    }

    private fun handlePickedDriver(uri: Uri) {
        try {
            val customDriversDir = File(filesDir, "drivers/custom")
            if (customDriversDir.exists()) {
                customDriversDir.deleteRecursively()
            }
            customDriversDir.mkdirs()

            var extractedSoName: String? = null
            var driverNameFromMeta: String? = null

            contentResolver.openInputStream(uri)?.use { input ->
                val zis = ZipInputStream(input)
                var entry = zis.nextEntry
                var isZip = false

                while (entry != null) {
                    isZip = true
                    val fileName = File(entry.name).name
                    if (!entry.isDirectory && fileName.isNotEmpty()) {
                        val outFile = File(customDriversDir, fileName)
                        FileOutputStream(outFile).use { out ->
                            zis.copyTo(out)
                        }
                        if (fileName.endsWith(".so")) {
                            outFile.setExecutable(true)
                            if (extractedSoName == null || fileName.startsWith("vulkan.")) {
                                extractedSoName = fileName
                            }
                        } else if (fileName == "meta.json") {
                            try {
                                val metaJson = JSONObject(outFile.readText())
                                driverNameFromMeta = metaJson.optString("name", "Custom Driver")
                                val libName = metaJson.optString("libraryName", "")
                                if (libName.isNotEmpty()) {
                                    extractedSoName = libName
                                }
                            } catch (e: Exception) {
                                Log.w(TAG, "Erro ao ler meta.json do driver", e)
                            }
                        }
                    }
                    zis.closeEntry()
                    entry = zis.nextEntry
                }

                if (!isZip) {
                    // Arquivo .so direto
                    val directSoFile = File(customDriversDir, "vulkan.custom.so")
                    contentResolver.openInputStream(uri)?.use { directIn ->
                        FileOutputStream(directSoFile).use { directOut ->
                            directIn.copyTo(directOut)
                        }
                    }
                    directSoFile.setExecutable(true)
                    extractedSoName = "vulkan.custom.so"
                    driverNameFromMeta = "Custom Driver (.so)"
                }
            }

            if (extractedSoName != null) {
                ConfigManager.driverType = "custom"
                ConfigManager.driverName = driverNameFromMeta ?: "Custom Driver ($extractedSoName)"
                ConfigManager.customDriverPath = customDriversDir.absolutePath
                ConfigManager.customDriverLibrary = extractedSoName!!
                ConfigManager.save()

                spinDriver.setSelection(2)
                updateDriverInfoText(2)
                Toast.makeText(this, "Driver customizado instalado com sucesso: ${ConfigManager.driverName}", Toast.LENGTH_LONG).show()
            } else {
                Toast.makeText(this, "Nenhuma biblioteca .so encontrada no pacote do driver!", Toast.LENGTH_LONG).show()
            }
        } catch (e: Exception) {
            Log.e(TAG, "Erro ao extrair pacote do driver", e)
            Toast.makeText(this, "Erro ao processar driver: ${e.message}", Toast.LENGTH_LONG).show()
        }
    }
}

