package sp.bvantur.inspektify.ktor.client.shared

import sp.bvantur.inspektify.ktor.client.data.model.TargetType

internal actual object Platform {
    actual fun closeInspektifyWindow() {
    }

    actual fun getTargetType(): TargetType {
        return TargetType.JS
    }

}
