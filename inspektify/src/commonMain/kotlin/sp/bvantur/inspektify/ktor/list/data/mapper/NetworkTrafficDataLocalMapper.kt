package sp.bvantur.inspektify.ktor.list.data.mapper

import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.client.shared.Platform
import sp.bvantur.inspektify.ktor.core.data.utils.getDate
import sp.bvantur.inspektify.ktor.core.data.utils.getDuration
import sp.bvantur.inspektify.ktor.core.data.utils.getHost
import sp.bvantur.inspektify.ktor.core.data.utils.getHostImage
import sp.bvantur.inspektify.ktor.core.data.utils.getMethod
import sp.bvantur.inspektify.ktor.core.data.utils.getMethodWithPath
import sp.bvantur.inspektify.ktor.core.data.utils.getPresentationStatusCode
import sp.bvantur.inspektify.ktor.core.data.utils.getSize
import sp.bvantur.inspektify.ktor.core.data.utils.getTime
import sp.bvantur.inspektify.ktor.core.data.utils.isCompleted
import sp.bvantur.inspektify.ktor.core.data.utils.isFromActiveSession
import sp.bvantur.inspektify.ktor.list.domain.model.NetworkTrafficListItem

internal object NetworkTrafficDataLocalMapper {
    fun NetworkTrafficDataLocal.toDomainModel(currentSessionTimestamp: Long): NetworkTrafficListItem {
        val statusCode = getPresentationStatusCode()
        return NetworkTrafficListItem(
            id = id,
            statusCode = statusCode.statusCode,
            statusColor = statusCode.statusColor,
            method = getMethod(),
            methodWithPath = getMethodWithPath(),
            host = getHost(),
            hostImage = getHostImage(),
            time = getTime(),
            duration = getDuration(),
            size = getSize(),
            isCompleted = isCompleted(),
            isCurrentSession = isFromActiveSession(currentSessionTimestamp),
            date = getDate(),
            showSslIcon = !Platform.getTargetType().isApple()
        )
    }
}
