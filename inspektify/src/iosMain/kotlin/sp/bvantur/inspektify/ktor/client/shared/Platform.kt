package sp.bvantur.inspektify.ktor.client.shared

import sp.bvantur.inspektify.ktor.client.data.model.TargetType
import sp.bvantur.inspektify.ktor.inspektifyViewControllerInstance

internal actual object Platform {
    actual fun closeInspektifyWindow() {
        inspektifyViewControllerInstance?.dismissModalViewControllerAnimated(true)
    }

    actual fun getTargetType(): TargetType = TargetType.APPLE
}
