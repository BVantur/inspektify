package sp.bvantur.inspektify.ktor.client.shared

import sp.bvantur.inspektify.ktor.client.shared.CopyNetworkTrafficHandler.copyToClipboard

internal actual object ShareNetworkTrafficHandler {
    internal actual fun shareNetworkTrafficContent(content: String) {
        copyToClipboard(content)
    }
}
