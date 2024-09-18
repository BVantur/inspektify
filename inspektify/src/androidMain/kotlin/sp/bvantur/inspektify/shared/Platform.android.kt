package sp.bvantur.inspektify.shared

import sp.bvantur.inspektify.InspektifyActivity

internal actual object Platform {
    actual fun closeInspektifyWindow() {
        InspektifyActivity.inspektifyActivityInstance?.finish()
    }

    actual fun isAndroid(): Boolean = true
}
