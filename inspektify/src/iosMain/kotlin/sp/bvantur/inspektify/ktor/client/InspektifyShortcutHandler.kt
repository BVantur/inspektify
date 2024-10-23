package sp.bvantur.inspektify.ktor.client

import kotlinx.cinterop.BetaInteropApi
import platform.UIKit.UIApplicationShortcutItem
import platform.UIKit.UIScene
import platform.UIKit.UISceneConfiguration
import platform.UIKit.UISceneConnectionOptions
import platform.UIKit.UISceneSession
import platform.UIKit.UIWindowScene
import platform.UIKit.UIWindowSceneDelegateProtocol
import platform.darwin.NSObject
import sp.bvantur.inspektify.ktor.client.shared.startInspektifyWindow

internal class InspektifySceneDelegate @OverrideInit constructor() :
    NSObject(),
    UIWindowSceneDelegateProtocol {

    override fun scene(scene: UIScene, willConnectToSession: UISceneSession, options: UISceneConnectionOptions) {
        onInspektifyShortcutAction(options.shortcutItem)
    }

    override fun windowScene(
        windowScene: UIWindowScene,
        performActionForShortcutItem: UIApplicationShortcutItem,
        completionHandler: (Boolean) -> Unit
    ) {
        onInspektifyShortcutAction(performActionForShortcutItem)
        startInspektifyWindow()
        completionHandler(true)
    }

    private fun onInspektifyShortcutAction(shortcutItem: UIApplicationShortcutItem?) {
        shortcutItem ?: return
        if (shortcutItem.type != INSPEKTIFY_SHORTCUT_ITEM_TYPE) return

        startInspektifyWindow()
    }
}

@OptIn(BetaInteropApi::class)
fun getInspektifyUISceneConfiguration(configurationForConnectingSceneSession: UISceneSession): UISceneConfiguration {
    val configuration = UISceneConfiguration(
        name = configurationForConnectingSceneSession.configuration.name,
        sessionRole = configurationForConnectingSceneSession.role
    )
    configuration.delegateClass = InspektifySceneDelegate().`class`()
    return configuration
}

const val INSPEKTIFY_SHORTCUT_ITEM_TYPE = "Inspektify"
