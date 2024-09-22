package sp.bvantur.inspektify.ktor.shared

import android.content.ClipData
import android.content.ClipboardManager
import android.content.Context
import sp.bvantur.inspektify.ktor.applicationContext

internal actual object CopyNetworkTrafficHandler {
    internal actual fun copyToClipboard(content: String) {
        val clipboard: ClipboardManager =
            applicationContext.getSystemService(Context.CLIPBOARD_SERVICE) as? ClipboardManager? ?: return
        clipboard.setPrimaryClip(ClipData.newPlainText(content, content))
    }
}
