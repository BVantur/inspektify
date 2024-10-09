package sp.bvantur.inspektify.ktor.client.shared

import sp.bvantur.inspektify.ktor.InspektifyActivity
import sp.bvantur.inspektify.ktor.client.data.model.TargetType

internal actual object Platform {
    actual fun closeInspektifyWindow() {
        InspektifyActivity.inspektifyActivityInstance?.finish()
    }

    actual fun getTargetType(): TargetType = TargetType.ANDROID
}
