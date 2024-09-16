package sp.bvantur.inspektify.shared

import kotlinx.cinterop.ExperimentalForeignApi
import sp.bvantur.inspektify.inspektifyViewControllerInstance
import sp.bvantur.inspektify.ktor.UsageType
import sp.bvantur.inspektify.shakedetektor.ShakeDetektorIOS

@OptIn(ExperimentalForeignApi::class)
actual fun setUsageType(usageType: UsageType) {
    if (usageType.isCustom()) return

    ShakeDetektorIOS().enableShakeDetektorWithCallback {
        if (inspektifyViewControllerInstance != null) return@enableShakeDetektorWithCallback

        startInspektifyWindow()
    }
}
