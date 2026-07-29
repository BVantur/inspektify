package sp.bvantur.inspektify.ktor.extensions

import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.ui.Modifier
import androidx.compose.ui.viewinterop.UIKitViewController
import platform.UIKit.UIViewController

public fun uiKitInspektifyExtension(
    id: String,
    title: String,
    icon: InspektifyIcon? = null,
    order: Int = 0,
    controller: () -> UIViewController
): InspektifyExtension = InspektifyExtension(
    id = id,
    title = title,
    icon = icon,
    order = order,
    content = {
        UIKitViewController(
            factory = controller,
            modifier = Modifier.fillMaxSize()
        )
    }
)
