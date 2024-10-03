package sp.bvantur.inspektify.ktor.overview.data.mapper

import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.core.domain.utils.ByteSizeUtils
import sp.bvantur.inspektify.ktor.core.domain.utils.DateTimeUtils
import sp.bvantur.inspektify.ktor.data.utils.extensions.convertNullToEmpty
import sp.bvantur.inspektify.ktor.data.utils.extensions.nullOrEmpty
import sp.bvantur.inspektify.ktor.overview.domain.model.KtorOverviewData

internal object KtorOverviewDataMapper {

    fun toDomain(data: NetworkTrafficDataLocal): KtorOverviewData = KtorOverviewData(
        url = data.url,
        method = data.method,
        protocol = data.protocol,
        status = data.responseStatusDescription.nullOrEmpty(),
        response = "${
            data.responseStatus?.toString()?.convertNullToEmpty()
        } ${data.responseStatusDescription?.convertNullToEmpty()}",
        ssl = getSslText(data),
        requestTime = DateTimeUtils.formatTimestamp(data.requestTimestamp),
        responseTime = DateTimeUtils.formatTimestamp(data.responseTimestamp),
        duration = DateTimeUtils.toTextWithTimeUnit(data.tookDurationInMs),
        requestSize = ByteSizeUtils.toTextWithByteUnit(getAllRequestSize(data)),
        responseSize = ByteSizeUtils.toTextWithByteUnit(getAllResponseSize(data)),
        totalSize = ByteSizeUtils.toTextWithByteUnit(geAllNetworkTrafficSize(data))
    )

    private fun getSslText(data: NetworkTrafficDataLocal): String = if (data.protocol == "https") {
        "Yes"
    } else {
        "No"
    }

    private fun getAllRequestSize(networkTraffic: NetworkTrafficDataLocal): Long {
        var size = 0L

        size += networkTraffic.requestPayloadSize ?: 0
        size += networkTraffic.requestHeadersSize ?: 0

        return size
    }

    private fun getAllResponseSize(networkTraffic: NetworkTrafficDataLocal): Long {
        var size = 0L

        size += networkTraffic.responsePayloadSize ?: 0
        size += networkTraffic.responseHeadersSize ?: 0

        return size
    }

    private fun geAllNetworkTrafficSize(networkTraffic: NetworkTrafficDataLocal): Long {
        var size = 0L

        size += getAllRequestSize(networkTraffic)
        size += getAllResponseSize(networkTraffic)

        return size
    }
}
