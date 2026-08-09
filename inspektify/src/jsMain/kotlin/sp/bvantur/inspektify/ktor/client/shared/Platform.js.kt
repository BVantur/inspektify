package sp.bvantur.inspektify.ktor.client.shared

import sp.bvantur.inspektify.ktor.client.data.model.TargetType

internal actual object Platform {
    actual fun closeInspektifyWindow() {
        // No-op for web - could close a modal or tab if needed
    }

    actual fun getTargetType(): TargetType = TargetType.WEB
}