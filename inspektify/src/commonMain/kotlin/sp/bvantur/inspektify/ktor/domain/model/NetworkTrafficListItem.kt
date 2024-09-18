package sp.bvantur.inspektify.ktor.domain.model

import org.jetbrains.compose.resources.DrawableResource

internal data class NetworkTrafficListItem(
    val id: Long,
    val statusCode: String,
    val statusColor: StatusColor,
    val methodWithPath: String,
    val host: String,
    val hostImage: DrawableResource,
    val time: String,
    val duration: String,
    val size: String,
    val isCompleted: Boolean
)

internal data class StatusCode(val statusCode: String, val statusColor: StatusColor)

internal enum class StatusColor {
    GREEN,
    RED,
    ORANGE
}
