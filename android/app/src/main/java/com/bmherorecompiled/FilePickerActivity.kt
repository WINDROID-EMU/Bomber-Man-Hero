package com.bmherorecompiled

import android.app.Activity
import android.content.ContentResolver
import android.content.Intent
import android.net.Uri
import android.os.Bundle
import android.provider.OpenableColumns

/**
 * FilePickerActivity — Transparent activity that launches the Android Storage Access Framework
 * file picker and returns the selected file's real path (or a content URI copied to internal storage).
 *
 * This is the Android replacement for nativefiledialog-extended (nfd) which requires GTK3/Win32.
 */
class FilePickerActivity : Activity() {

    companion object {
        const val EXTRA_FILTER = "filter_extensions"
        const val RESULT_PATH = "result_path"
        private const val PICK_FILE_REQUEST = 2001
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        val filterRaw = intent.getStringExtra(EXTRA_FILTER) ?: "z64,n64,v64"
        // Build MIME type list — ROM files have no standard MIME, use application/octet-stream
        val mimeTypes = arrayOf("application/octet-stream", "*/*")

        val pickIntent = Intent(Intent.ACTION_OPEN_DOCUMENT).apply {
            addCategory(Intent.CATEGORY_OPENABLE)
            type = "*/*"
            putExtra(Intent.EXTRA_MIME_TYPES, mimeTypes)
            putExtra(Intent.EXTRA_TITLE, getString(R.string.file_picker_title))
        }

        startActivityForResult(pickIntent, PICK_FILE_REQUEST)
    }

    @Deprecated("Deprecated in Java")
    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)

        if (requestCode == PICK_FILE_REQUEST) {
            val resultIntent = Intent()

            if (resultCode == RESULT_OK && data?.data != null) {
                val uri = data.data!!
                // Persist read permission so we can access later
                try {
                    contentResolver.takePersistableUriPermission(
                        uri,
                        Intent.FLAG_GRANT_READ_URI_PERMISSION
                    )
                } catch (e: SecurityException) {
                    // Ignore — some providers don't support persistable permissions
                }

                val filePath = copyUriToInternalStorage(uri)
                if (filePath != null) {
                    resultIntent.putExtra(RESULT_PATH, filePath)
                    setResult(RESULT_OK, resultIntent)
                } else {
                    setResult(RESULT_CANCELED)
                }
            } else {
                setResult(RESULT_CANCELED)
            }
        }

        finish()
    }

    /**
     * Copies a content URI file to internal app storage and returns the absolute path.
     * This is necessary because NDK/C++ code cannot directly access content:// URIs.
     *
     * For large ROM files this runs synchronously on the calling thread.
     * In practice the ROM is ~8MB, so this is acceptable.
     */
    private fun copyUriToInternalStorage(uri: Uri): String? {
        return try {
            val fileName = getFileName(contentResolver, uri) ?: "bomberman_hero.z64"
            val destFile = java.io.File(filesDir, "roms/$fileName")
            destFile.parentFile?.mkdirs()

            // If file already exists and has same size, skip copy
            val uriSize = getFileSize(contentResolver, uri)
            if (destFile.exists() && uriSize > 0 && destFile.length() == uriSize) {
                return destFile.absolutePath
            }

            contentResolver.openInputStream(uri)?.use { input ->
                java.io.FileOutputStream(destFile).use { output ->
                    input.copyTo(output, bufferSize = 256 * 1024)
                }
            }
            destFile.absolutePath
        } catch (e: Exception) {
            e.printStackTrace()
            null
        }
    }

    private fun getFileName(resolver: ContentResolver, uri: Uri): String? {
        return try {
            resolver.query(uri, null, null, null, null)?.use { cursor ->
                val nameIndex = cursor.getColumnIndex(OpenableColumns.DISPLAY_NAME)
                cursor.moveToFirst()
                cursor.getString(nameIndex)
            }
        } catch (e: Exception) {
            null
        }
    }

    private fun getFileSize(resolver: ContentResolver, uri: Uri): Long {
        return try {
            resolver.query(uri, null, null, null, null)?.use { cursor ->
                val sizeIndex = cursor.getColumnIndex(OpenableColumns.SIZE)
                cursor.moveToFirst()
                cursor.getLong(sizeIndex)
            } ?: -1L
        } catch (e: Exception) {
            -1L
        }
    }
}
