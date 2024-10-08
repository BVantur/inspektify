package sp.bvantur.inspektify.ktor.client.shared

import sp.bvantur.inspektify.ktor.client.data.model.TargetType

internal expect object Platform {
    fun closeInspektifyWindow()

    fun getTargetType(): TargetType
}
