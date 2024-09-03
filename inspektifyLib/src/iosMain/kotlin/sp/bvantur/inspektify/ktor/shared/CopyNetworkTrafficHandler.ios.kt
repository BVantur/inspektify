package sp.bvantur.inspektify.ktor.shared

import platform.UIKit.UIPasteboard

internal actual object CopyNetworkTrafficHandler {
    internal actual fun copyToClipboard(content: String) {
        UIPasteboard.generalPasteboard.string = content
    }
}
