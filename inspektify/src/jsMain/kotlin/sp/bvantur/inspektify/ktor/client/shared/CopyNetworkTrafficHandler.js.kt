package sp.bvantur.inspektify.ktor.client.shared

import kotlinx.browser.window

internal actual object CopyNetworkTrafficHandler {
    internal actual fun copyToClipboard(content: String) {
        try {
            window.navigator.clipboard.writeText(content)
        } catch (e: Exception) {
            // Fallback: no-op if clipboard API is not available
            console.warn("Clipboard API not available", e)
        }
    }
}