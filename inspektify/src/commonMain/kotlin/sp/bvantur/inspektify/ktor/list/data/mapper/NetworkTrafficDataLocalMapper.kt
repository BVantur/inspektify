package sp.bvantur.inspektify.ktor.list.data.mapper

import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.data.utils.extensions.getDate
import sp.bvantur.inspektify.ktor.data.utils.extensions.getDuration
import sp.bvantur.inspektify.ktor.data.utils.extensions.getHost
import sp.bvantur.inspektify.ktor.data.utils.extensions.getHostImage
import sp.bvantur.inspektify.ktor.data.utils.extensions.getMethod
import sp.bvantur.inspektify.ktor.data.utils.extensions.getMethodWithPath
import sp.bvantur.inspektify.ktor.data.utils.extensions.getPresentationStatusCode
import sp.bvantur.inspektify.ktor.data.utils.extensions.getSize
import sp.bvantur.inspektify.ktor.data.utils.extensions.getTime
import sp.bvantur.inspektify.ktor.data.utils.extensions.isCompleted
import sp.bvantur.inspektify.ktor.data.utils.extensions.isFromActiveSession
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
            date = getDate()
        )
    }
}
