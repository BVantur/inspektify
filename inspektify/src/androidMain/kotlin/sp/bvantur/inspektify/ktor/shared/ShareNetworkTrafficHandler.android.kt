package sp.bvantur.inspektify.ktor.shared

import android.content.Intent
import sp.bvantur.inspektify.ktor.InspektifyActivity.Companion.inspektifyActivityInstance

internal actual object ShareNetworkTrafficHandler {
    internal actual fun shareNetworkTrafficContent(content: String) {
        val sendIntent: Intent = Intent().apply {
            action = Intent.ACTION_SEND
            putExtra(Intent.EXTRA_TEXT, content)
            type = "text/plain"
        }
        val shareIntent = Intent.createChooser(sendIntent, "Share network traffic")
        inspektifyActivityInstance?.startActivity(shareIntent)
    }
}
