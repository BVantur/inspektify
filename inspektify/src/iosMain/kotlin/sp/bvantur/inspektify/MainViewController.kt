package sp.bvantur.inspektify

import androidx.compose.ui.window.ComposeUIViewController
import platform.UIKit.UIViewController

internal var inspektifyViewControllerInstance: UIViewController? = null

@Suppress("FunctionName")
internal fun InspektifyViewController(): UIViewController {
    return ComposeUIViewController(configure = { enforceStrictPlistSanityCheck = false }) {
        App()
    }.also {viewController ->
        inspektifyViewControllerInstance = viewController
    }
}
