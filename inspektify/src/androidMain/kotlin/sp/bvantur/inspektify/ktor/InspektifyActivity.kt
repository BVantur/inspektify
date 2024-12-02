package sp.bvantur.inspektify.ktor

import android.net.Uri
import android.os.Bundle
import android.util.Log
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.result.contract.ActivityResultContracts
import sp.bvantur.inspektify.ktor.core.di.AppComponents
import sp.bvantur.inspektify.ktor.core.ui.App

internal class InspektifyActivity : ComponentActivity() {

    val createHtmlDocument = registerForActivityResult(
        ActivityResultContracts.StartActivityForResult()
    ) { result ->
        if (result.resultCode == RESULT_OK && result.data != null) {
            val uri = result.data?.data
            if (uri != null) {
                saveHtmlFile(uri)
            }
        }
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        inspektifyActivityInstance = this

        setContent {
            App()
        }
    }

    override fun onDestroy() {
        super.onDestroy()
        inspektifyActivityInstance = null
    }

    private fun saveHtmlFile(uri: Uri) {
        try {
            val outputStream = contentResolver.openOutputStream(uri)
            if (outputStream != null) {
                outputStream.write(AppComponents.getDownloadFileManager().fileToStore?.toByteArray())
                outputStream.close()
            }
        } catch (ignore: Exception) {
            Log.e("MainActivity", "Failed to save file", ignore)
        }
    }

    companion object {
        var inspektifyActivityInstance: InspektifyActivity? = null
    }
}
