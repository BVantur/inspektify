package sp.bvantur.inspektify.shared

import androidx.lifecycle.ProcessLifecycleOwner
import sp.bvantur.inspektify.ShakeGestureListener
import sp.bvantur.inspektify.ktor.UsageType

actual fun setUsageType(usageType: UsageType) {
    if (usageType.isCustom()) return

    ProcessLifecycleOwner.get().lifecycle.addObserver(
        ShakeGestureListener()
    )
}
