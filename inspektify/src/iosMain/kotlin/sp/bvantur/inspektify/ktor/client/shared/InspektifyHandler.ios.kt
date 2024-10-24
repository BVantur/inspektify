package sp.bvantur.inspektify.ktor.client.shared

import kotlinx.cinterop.ExperimentalForeignApi
import platform.Foundation.NSProcessInfo
import platform.UIKit.UIApplication
import platform.UIKit.UIApplicationShortcutIcon
import platform.UIKit.UIApplicationShortcutIconType
import platform.UIKit.UIApplicationShortcutItem
import platform.UIKit.UIModalPresentationFullScreen
import platform.UIKit.UINavigationController
import platform.UIKit.UITabBarController
import platform.UIKit.UIViewController
import platform.UIKit.UIWindow
import platform.UIKit.UIWindowScene
import platform.UIKit.shortcutItems
import sp.bvantur.inspektify.ktor.INSPEKTIFY_SHORTCUT_ITEM_LONG_NAME
import sp.bvantur.inspektify.ktor.INSPEKTIFY_SHORTCUT_ITEM_SHORT_NAME
import sp.bvantur.inspektify.ktor.InspektifyViewController
import sp.bvantur.inspektify.ktor.client.INSPEKTIFY_SHORTCUT_ITEM_TYPE
import sp.bvantur.inspektify.ktor.inspektifyViewControllerInstance
import sp.bvantur.inspektify.shakedetektor.ShakeDetektorIOS

internal actual fun startInspektifyWindow() {
    if (inspektifyViewControllerInstance != null) return

    val inspektifyViewController = InspektifyViewController()
    inspektifyViewController.modalPresentationStyle = UIModalPresentationFullScreen
    getTopMostViewController()?.presentViewController(inspektifyViewController, true, null)
}

@OptIn(ExperimentalForeignApi::class)
internal actual fun configurePresentation(autoDetectEnabled: Boolean, shortcutEnabled: Boolean) {
    if (shortcutEnabled) {
        setupQuickAction()
    } else {
        UIApplication.sharedApplication.shortcutItems = UIApplication.sharedApplication.shortcutItems?.filter {
            if (it is UIApplicationShortcutItem) {
                it.type != INSPEKTIFY_SHORTCUT_ITEM_TYPE
            } else {
                true
            }
        }
    }

    if (autoDetectEnabled) {
        ShakeDetektorIOS().enableShakeDetektorWithCallback {
            if (inspektifyViewControllerInstance != null) return@enableShakeDetektorWithCallback

            startInspektifyWindow()
        }
    }
}

internal actual fun disposeInspektifyWindow() {
    inspektifyViewControllerInstance = null
}

private fun getTopMostViewController(
    base: UIViewController? = UIApplication.sharedApplication.topWindow?.rootViewController
): UIViewController? {
    if (base == null) return null

    return when (base) {
        is UINavigationController -> getTopMostViewController(base.visibleViewController)
        is UITabBarController -> {
            base.selectedViewController?.let { getTopMostViewController(it) }
        }

        else -> {
            if (base.presentedViewController != null) {
                getTopMostViewController(base.presentedViewController)
            } else {
                base
            }
        }
    }
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

private fun setupQuickAction() {
    UIApplication.sharedApplication.shortcutItems =
        (UIApplication.sharedApplication.shortcutItems?.toMutableList() ?: mutableListOf()) +
        UIApplicationShortcutItem(
            INSPEKTIFY_SHORTCUT_ITEM_TYPE,
            INSPEKTIFY_SHORTCUT_ITEM_SHORT_NAME,
            INSPEKTIFY_SHORTCUT_ITEM_LONG_NAME,
            UIApplicationShortcutIcon.iconWithType(
                UIApplicationShortcutIconType.UIApplicationShortcutIconTypeSearch
            ),
            mapOf<Any?, Any>()
        )
}
