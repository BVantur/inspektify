package sp.bvantur.inspektify.shared

import sp.bvantur.inspektify.InspektifyActivity

internal actual object Platform {
    internal actual fun closeInspektifyWindow() {
        InspektifyActivity.inspektifyActivityInstance?.finish()
    }
}
