package sp.bvantur.inspektify.ktor.shared

import sp.bvantur.inspektify.ktor.inspektifyViewControllerInstance

internal actual object Platform {
    actual fun closeInspektifyWindow() {
        inspektifyViewControllerInstance?.dismissModalViewControllerAnimated(true)
    }

    actual fun isAndroid(): Boolean = false
}
