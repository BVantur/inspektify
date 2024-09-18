package sp.bvantur.inspektify.shared

import sp.bvantur.inspektify.inspektifyViewControllerInstance

internal actual object Platform {
    actual fun closeInspektifyWindow() {
        inspektifyViewControllerInstance?.dismissModalViewControllerAnimated(true)
    }

    actual fun isAndroid(): Boolean = false
}
