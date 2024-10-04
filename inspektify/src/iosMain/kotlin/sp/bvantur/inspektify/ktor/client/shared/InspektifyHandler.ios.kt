package sp.bvantur.inspektify.ktor.client.shared

import kotlinx.cinterop.ExperimentalForeignApi
import platform.Foundation.NSProcessInfo
import platform.UIKit.UIApplication
import platform.UIKit.UIModalPresentationFullScreen
import platform.UIKit.UINavigationController
import platform.UIKit.UITabBarController
import platform.UIKit.UIViewController
import platform.UIKit.UIWindow
import platform.UIKit.UIWindowScene
import sp.bvantur.inspektify.ktor.InspektifyViewController
import sp.bvantur.inspektify.ktor.api.PresentationType
import sp.bvantur.inspektify.ktor.inspektifyViewControllerInstance
import sp.bvantur.inspektify.shakedetektor.ShakeDetektorIOS

internal actual fun startInspektifyWindow() {
    val inspektifyViewController = InspektifyViewController()
    inspektifyViewController.modalPresentationStyle = UIModalPresentationFullScreen
    getTopMostViewController()?.presentViewController(inspektifyViewController, true, null)
}

@OptIn(ExperimentalForeignApi::class)
internal actual fun configurePresentationType(presentationType: PresentationType) {
    if (presentationType.isCustom()) return

    ShakeDetektorIOS().enableShakeDetektorWithCallback {
        if (inspektifyViewControllerInstance != null) return@enableShakeDetektorWithCallback

        startInspektifyWindow()
    }
}

internal actual fun disposeInspektifyWindow() {
    inspektifyViewControllerInstance = null
}

private fun getTopMostViewController(
    base: UIViewController? = UIApplication.sharedApplication.topWindow?.rootViewController
): UIViewController? = when (base) {
    is UINavigationController -> getTopMostViewController(base.visibleViewController)
    is UITabBarController -> {
        base.selectedViewController?.let { getTopMostViewController(it) }
    }

    base?.presentedViewController -> getTopMostViewController(base?.presentedViewController)
    else -> base
}

private val UIApplication.topWindow: UIWindow?
    get() {
        return if (NSProcessInfo.processInfo.operatingSystemVersionString >= "15.0") {
            UIApplication.sharedApplication.connectedScenes
                .asSequence()
                .mapNotNull { it as? UIWindowScene }
                .mapNotNull { it.keyWindow }
                .lastOrNull()
        } else {
            UIApplication.sharedApplication.connectedScenes
                .asSequence()
                .flatMap { (it as? UIWindowScene)?.windows?.asSequence() ?: emptySequence() }
                .filterIsInstance<UIWindow>()
                .lastOrNull { it.isKeyWindow() }
        }
    }
