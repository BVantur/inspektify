package sp.bvantur.inspektify.ktor

import androidx.compose.ui.window.ComposeUIViewController
import platform.UIKit.UIViewController
import sp.bvantur.inspektify.ktor.core.ui.App

internal var inspektifyViewControllerInstance: UIViewController? = null

@Suppress("FunctionName")
internal fun InspektifyViewController(): UIViewController = ComposeUIViewController(configure = {
    enforceStrictPlistSanityCheck = false
}) {
    App()
}.also { viewController ->
    inspektifyViewControllerInstance = viewController
}
