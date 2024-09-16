package sp.bvantur.inspektify

import androidx.compose.runtime.DisposableEffect
import androidx.compose.ui.window.ComposeUIViewController
import platform.UIKit.UIViewController

internal var inspektifyViewControllerInstance: UIViewController? = null

@Suppress("FunctionName")
internal fun InspektifyViewController(): UIViewController {
    val composeViewController = ComposeUIViewController {
        App()

        DisposableEffect(Unit) {
            onDispose {
                inspektifyViewControllerInstance = null
            }
        }
    }

    inspektifyViewControllerInstance = composeViewController

    return composeViewController
}
