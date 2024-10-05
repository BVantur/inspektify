package sp.bvantur.inspektify.ktor.client.shared

import platform.UIKit.UIPasteboard

internal actual object CopyNetworkTrafficHandler {
    internal actual fun copyToClipboard(content: String) {
        UIPasteboard.generalPasteboard.string = content
    }
}
