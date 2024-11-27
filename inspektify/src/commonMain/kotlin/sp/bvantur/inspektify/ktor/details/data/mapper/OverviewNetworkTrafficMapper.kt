package sp.bvantur.inspektify.ktor.details.data.mapper

import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.core.data.utils.extensions.nullIfEmpty
import sp.bvantur.inspektify.ktor.core.data.utils.extensions.nullToEmpty
import sp.bvantur.inspektify.ktor.core.domain.utils.ByteSizeUtils
import sp.bvantur.inspektify.ktor.core.domain.utils.DateTimeUtils
import sp.bvantur.inspektify.ktor.details.domain.model.KtorOverviewData

internal object OverviewNetworkTrafficMapper {

    fun getOverviewDataAsString(networkTrafficData: NetworkTrafficDataLocal): String {
        var overviewData = ""
        overviewData += "OVERVIEW:\n"
        networkTrafficData.method?.let {
            overviewData += "Method: $it\n"
        }
        networkTrafficData.url?.let {
            overviewData += "URL: $it\n"
        }
        networkTrafficData.host?.let {
            overviewData += "Host: $it\n"
        }
        networkTrafficData.path?.let {
            overviewData += "Path: $it\n"
        }
        networkTrafficData.protocol?.let {
            overviewData += "Protocol: $it\n"
        }
        networkTrafficData.tookDurationInMs?.let {
            overviewData += "Duration (ms): $it\n"
        }
        overviewData += "SSL: ${getSslText(networkTrafficData.protocol)}\n"
        overviewData += "All size: ${
            ByteSizeUtils.toTextWithByteUnit(
                PayloadNetworkTrafficMapper.getAllResponseSize(
                    networkTrafficData
                )
            )
        }\n"
        return overviewData.trimIndent()
    }

    fun toOverviewDomain(data: NetworkTrafficDataLocal): KtorOverviewData = KtorOverviewData(
        url = data.url,
        method = data.method,
        protocol = data.protocol,
        status = data.responseStatusDescription.nullIfEmpty(),
        response = "${
            data.responseStatus?.toString()?.nullToEmpty()
        } ${data.responseStatusDescription?.nullToEmpty()}",
        ssl = getSslText(data),
        requestTime = DateTimeUtils.formatTimestamp(data.requestTimestamp),
        responseTime = DateTimeUtils.formatTimestamp(data.responseTimestamp),
        duration = DateTimeUtils.toTextWithTimeUnit(data.tookDurationInMs),
        requestSize = ByteSizeUtils.toTextWithByteUnit(PayloadNetworkTrafficMapper.getAllRequestSize(data)),
        responseSize = ByteSizeUtils.toTextWithByteUnit(PayloadNetworkTrafficMapper.getAllResponseSize(data)),
        totalSize = ByteSizeUtils.toTextWithByteUnit(geAllNetworkTrafficSize(data))
    )

    private fun geAllNetworkTrafficSize(networkTraffic: NetworkTrafficDataLocal): Long {
        var size = 0L

        size += PayloadNetworkTrafficMapper.getAllRequestSize(networkTraffic)
        size += PayloadNetworkTrafficMapper.getAllResponseSize(networkTraffic)

        return size
    }

    private fun getSslText(data: NetworkTrafficDataLocal): String = getSslText(data.protocol)

    private fun getSslText(protocol: String?): String = if (protocol == "https") {
        "Yes"
    } else {
        "No"
    }
}
