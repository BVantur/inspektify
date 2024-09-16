package sp.bvantur.inspektify.shared

import sp.bvantur.inspektify.inspektifyViewControllerInstance

internal actual object Platform {
    internal actual fun closeInspektifyWindow() {
        inspektifyViewControllerInstance?.dismissModalViewControllerAnimated(true)
    }
}
