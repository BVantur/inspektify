package sp.bvantur.inspektify.ktor.shared

import kotlinx.cinterop.BetaInteropApi
import platform.Foundation.NSString
import platform.Foundation.create
import platform.UIKit.UIActivityViewController
import sp.bvantur.inspektify.ktor.inspektifyViewControllerInstance

internal actual object ShareNetworkTrafficHandler {
    @OptIn(BetaInteropApi::class)
    internal actual fun shareNetworkTrafficContent(content: String) {
        val textToShare = listOf(NSString.create(string = content))
        val activityViewController = UIActivityViewController(textToShare, null)
        inspektifyViewControllerInstance?.presentViewController(activityViewController, true, null)
    }
}
