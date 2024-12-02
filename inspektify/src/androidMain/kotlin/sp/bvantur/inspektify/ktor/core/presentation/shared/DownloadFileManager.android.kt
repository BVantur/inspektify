package sp.bvantur.inspektify.ktor.core.presentation.shared

import android.content.Intent
import sp.bvantur.inspektify.ktor.InspektifyActivity.Companion.inspektifyActivityInstance

internal actual class DownloadFileManager {
    var fileToStore: String? = null

    actual fun downloadFile(fileContent: String, fileName: String) {
        fileToStore = fileContent
        val intent = Intent(Intent.ACTION_CREATE_DOCUMENT)
        intent.addCategory(Intent.CATEGORY_OPENABLE)
        val mimeType = when (fileName.split(".").last()) {
            "txt" -> "text/plain"
            "html" -> "text/html"
            else -> "text/plain"
        }
        intent.setType(mimeType)
        intent.putExtra(Intent.EXTRA_TITLE, fileName)
        inspektifyActivityInstance?.createHtmlDocument?.launch(intent)
    }
}
