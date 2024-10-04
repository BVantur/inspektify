package sp.bvantur.inspektify.ktor.client.shared

import sp.bvantur.inspektify.ktor.InspektifyActivity

internal actual object Platform {
    actual fun closeInspektifyWindow() {
        InspektifyActivity.inspektifyActivityInstance?.finish()
    }

    actual fun isAndroid(): Boolean = true
}
