package sp.bvantur.inspektify.ktor.client.shared

internal actual object ShareNetworkTrafficHandler {
    internal actual fun shareNetworkTrafficContent(content: String) {
        try {
            // Try to use Web Share API if available
            if (js("typeof navigator.share !== 'undefined'") as Boolean) {
                js("navigator.share({ text: content })")
            } else {
                // Fallback to copying to clipboard
                CopyNetworkTrafficHandler.copyToClipboard(content)
            }
        } catch (e: Exception) {
            // Fallback to copying to clipboard
            CopyNetworkTrafficHandler.copyToClipboard(content)
        }
    }
}