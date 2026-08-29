package com.bmherorecompiled

import android.app.Activity
import android.content.Intent
import android.content.pm.ActivityInfo
import android.net.Uri
import android.os.Build
import android.os.Bundle
import android.os.Environment
import android.util.Log
import android.view.WindowManager
import android.widget.Button
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import java.io.File
import java.io.FileOutputStream

/**
 * TitleActivity — Bomberman Hero Recompiled Main Title Screen
 * Allows starting the game directly, selecting a custom ROM via SAF file picker,
 * configuring settings, and requesting permissions.
 */
class TitleActivity : AppCompatActivity() {

    companion object {
        private const val TAG = "TitleActivity"
        private const val REQUEST_PICK_ROM = 2001
        private const val REQUEST_STORAGE_PERMISSIONS = 1002
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        requestedOrientation = ActivityInfo.SCREEN_ORIENTATION_SENSOR_LANDSCAPE
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_title)

        window.addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON)

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P) {
            window.attributes.layoutInDisplayCutoutMode =
                WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES
        }

        // Initialize config manager
        ConfigManager.load()
        checkAndRequestStoragePermissions()

        val btnStartGame = findViewById<Button>(R.id.btnStartGame)
        val btnSelectRom = findViewById<Button>(R.id.btnSelectRom)
        val btnSettings = findViewById<Button>(R.id.btnSettings)
        val btnExit = findViewById<Button>(R.id.btnExit)

        btnStartGame.setOnClickListener {
            val romExists = hasValidRom()
            if (romExists) {
                launchGame()
            } else {
                Toast.makeText(this, "Por favor, selecione a ROM do Bomberman Hero (.z64)", Toast.LENGTH_LONG).show()
                openRomPicker()
            }
        }

        btnSelectRom.setOnClickListener {
            openRomPicker()
        }

        btnSettings.setOnClickListener {
            startActivity(Intent(this, SettingsActivity::class.java))
        }

        btnExit.setOnClickListener {
            finishAffinity()
        }
    }

    private fun hasValidRom(): Boolean {
        val candidates = arrayOf(
            File(filesDir, "bmhero.z64"),
            File(filesDir, "roms/bmhero.z64"),
            File(Environment.getExternalStorageDirectory(), "BMH/bmhero.z64"),
            File("/sdcard/BMH/bmhero.z64"),
            File("/sdcard/bmhero.z64")
        )
        return candidates.any { it.exists() && it.length() > 0 }
    }

    private fun launchGame() {
        val intent = Intent(this, MainActivity::class.java)
        startActivity(intent)
    }

    private fun openRomPicker() {
        try {
            val intent = Intent(Intent.ACTION_OPEN_DOCUMENT).apply {
                addCategory(Intent.CATEGORY_OPENABLE)
                type = "*/*"
                putExtra(
                    Intent.EXTRA_MIME_TYPES, arrayOf(
                        "application/octet-stream",
                        "application/x-n64-rom",
                        "application/zip"
                    )
                )
            }
            startActivityForResult(intent, REQUEST_PICK_ROM)
        } catch (e: Exception) {
            Log.e(TAG, "Falha ao abrir seletor de arquivos", e)
            Toast.makeText(this, "Não foi possível abrir o seletor de arquivos", Toast.LENGTH_SHORT).show()
            launchGame()
        }
    }

    @Deprecated("Deprecated in Java")
    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)
        if (requestCode == REQUEST_PICK_ROM && resultCode == Activity.RESULT_OK && data?.data != null) {
            handlePickedRom(data.data!!)
        }
    }

    private fun handlePickedRom(uri: Uri) {
        try {
            val targetFile = File(filesDir, "bmhero.z64")
            targetFile.parentFile?.mkdirs()

            contentResolver.openInputStream(uri)?.use { input ->
                FileOutputStream(targetFile).use { output ->
                    val buffer = ByteArray(64 * 1024)
                    var bytesRead: Int
                    while (input.read(buffer).also { bytesRead = it } != -1) {
                        output.write(buffer, 0, bytesRead)
                    }
                }
            }

            try {
                val publicFolder = File(Environment.getExternalStorageDirectory(), "BMH")
                if (publicFolder.exists() || publicFolder.mkdirs()) {
                    val publicTarget = File(publicFolder, "bmhero.z64")
                    targetFile.copyTo(publicTarget, overwrite = true)
                }
            } catch (ignored: Exception) {}

            Toast.makeText(this, "ROM importada com sucesso!", Toast.LENGTH_SHORT).show()
            launchGame()
        } catch (e: Exception) {
            Log.e(TAG, "Erro ao copiar ROM selecionada", e)
            Toast.makeText(this, "Erro ao importar a ROM", Toast.LENGTH_SHORT).show()
        }
    }

    private fun checkAndRequestStoragePermissions() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            if (!Environment.isExternalStorageManager()) {
                try {
                    val intent = Intent(android.provider.Settings.ACTION_MANAGE_APP_ALL_FILES_ACCESS_PERMISSION).apply {
                        data = Uri.parse("package:$packageName")
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
                requestPermissions(needed.toTypedArray(), REQUEST_STORAGE_PERMISSIONS)
            }
        }
    }
}
