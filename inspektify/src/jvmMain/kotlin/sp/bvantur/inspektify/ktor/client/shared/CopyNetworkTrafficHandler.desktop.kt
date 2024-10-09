package sp.bvantur.inspektify.ktor.client.shared

import java.awt.Toolkit
import java.awt.datatransfer.Clipboard
import java.awt.datatransfer.StringSelection

internal actual object CopyNetworkTrafficHandler {
    internal actual fun copyToClipboard(content: String) {
        val stringSelection = StringSelection(content)
        val clipboard: Clipboard = Toolkit.getDefaultToolkit().systemClipboard
        clipboard.setContents(stringSelection, null)
    }
}
