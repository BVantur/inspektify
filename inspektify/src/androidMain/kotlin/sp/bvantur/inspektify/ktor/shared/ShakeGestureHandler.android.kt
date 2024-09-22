package sp.bvantur.inspektify.ktor.shared

import androidx.lifecycle.ProcessLifecycleOwner
import sp.bvantur.inspektify.ktor.ShakeGestureListener
import sp.bvantur.inspektify.ktor.PresentationType

internal actual fun configurePresentationType(presentationType: PresentationType) {
    if (presentationType.isCustom()) return

    ProcessLifecycleOwner.get().lifecycle.addObserver(
        ShakeGestureListener()
    )
}
