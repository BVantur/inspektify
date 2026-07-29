@file:OptIn(kotlinx.cinterop.ExperimentalForeignApi::class)

package sp.bvantur.inspektify.sample.inspektify

import platform.CoreGraphics.CGRectMake
import platform.UIKit.NSTextAlignmentCenter
import platform.UIKit.UILabel
import platform.UIKit.UIViewController
import sp.bvantur.inspektify.ktor.extensions.InspektifyExtensions
import sp.bvantur.inspektify.ktor.extensions.uiKitInspektifyExtension

fun registerIosInspektifyExtensions() {
    InspektifyExtensions.register(
        uiKitInspektifyExtension(
            id = "ios-native",
            title = "iOS Native",
            order = 5,
            controller = { createDemoViewController() }
        )
    )
}

private fun createDemoViewController(): UIViewController {
    val viewController = UIViewController(nibName = null, bundle = null)
    val label = UILabel(frame = CGRectMake(20.0, 100.0, 320.0, 60.0))
    label.text = "This screen is a native UIViewController rendered inside Inspektify. " +
        "Swap in UIHostingController(rootView:) to embed SwiftUI here."
    label.numberOfLines = 0
    label.textAlignment = NSTextAlignmentCenter
    viewController.view.addSubview(label)
    return viewController
}
