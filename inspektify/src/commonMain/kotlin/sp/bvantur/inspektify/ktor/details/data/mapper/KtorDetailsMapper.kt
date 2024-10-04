package sp.bvantur.inspektify.ktor.details.data.mapper

import kotlinx.datetime.Instant
import kotlinx.datetime.TimeZone
import kotlinx.datetime.toLocalDateTime
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.core.domain.utils.ByteSizeUtils
import sp.bvantur.inspektify.ktor.core.domain.utils.DateTimeUtils

internal object KtorDetailsMapper {

    fun toCurlCommand(networkTrafficData: NetworkTrafficDataLocal): String {
        val errorMessage = "Failed to create cURL command"
        val method = networkTrafficData.method ?: return errorMessage
        val url = networkTrafficData.url ?: return errorMessage

        val components = mutableListOf("curl -v")

        components.add("-X $method")

        networkTrafficData.requestHeaders?.forEach { (key, value) ->
            val escapedValue = value.joinToString().replace("\"", "\\\"")
            components.add("-H \"$key: $escapedValue\"")
        }

        networkTrafficData.requestPayload?.let { payload ->
            var escapedBody = payload.replace("\\\"", "\\\\\"")
            escapedBody = escapedBody.replace("\"", "\\\"")
            components.add("-d \"$escapedBody\"")
        }

        components.add("\"$url\"")

        return components.joinToString(separator = " \\\n\t")
    }

    fun toNetworkTrafficContent(networkTrafficData: NetworkTrafficDataLocal): String {
        var clipboardText = ""
        clipboardText += getOverviewDataAsString(networkTrafficData)
        clipboardText += "\n-------------------------------------------------------\n"
        clipboardText += getRequestDataAsString(networkTrafficData)
        clipboardText += "\n-------------------------------------------------------\n"
        clipboardText += getResponseDataAsString(networkTrafficData)
        return clipboardText
    }

    private fun getResponseDataAsString(networkTrafficData: NetworkTrafficDataLocal): String {
        var responseData = ""
        responseData += "RESPONSE:\n"
        getTime(networkTrafficData.responseTimestamp)?.let {
            responseData += "Response Date: $it\n"
        }
        networkTrafficData.responseStatus?.let {
            responseData += "Response Code: $it\n"
        }
        networkTrafficData.responseStatusDescription?.let {
            responseData += "Response Message: $it\n"
        }
        networkTrafficData.responsePayloadSize?.let {
            responseData += "Response Payload Size: ${ByteSizeUtils.toTextWithByteUnit(it)}\n"
        }
        networkTrafficData.responseHeadersSize?.let {
            responseData += "Response Headers Size: ${ByteSizeUtils.toTextWithByteUnit(it.toLong())}\n"
        }
        responseData += """Response Headers: ${headersToString(networkTrafficData.responseHeaders)}"""
        responseData += "\n"
        networkTrafficData.responsePayload?.let {
            responseData += if (it.isEmpty()) {
                "Response Body: <EMPTY>"
            } else {
                """Response Body: $it"""
            }
            responseData += "\n"
        }
        return responseData.trimIndent()
    }

    private fun getRequestDataAsString(networkTrafficData: NetworkTrafficDataLocal): String {
        var requestData = ""
        requestData += "REQUEST:\n"
        getTime(networkTrafficData.requestTimestamp)?.let {
            requestData += "Request Date: $it\n"
        }
        networkTrafficData.requestPayloadSize?.let {
            requestData += "Request Payload Size: ${ByteSizeUtils.toTextWithByteUnit(it)}\n"
        }
        networkTrafficData.requestHeadersSize?.let {
            requestData += "Request Headers Size: ${ByteSizeUtils.toTextWithByteUnit(it)}\n"
        }
        requestData += """Request Headers: ${headersToString(networkTrafficData.requestHeaders)}"""
        requestData += "\n"
        networkTrafficData.requestPayload?.let {
            requestData += if (it.isEmpty()) {
                "Request Body: <EMPTY>"
            } else {
                """Request Body: $it"""
            }
            requestData += "\n"
        }
        return requestData
    }

    private fun getOverviewDataAsString(networkTrafficData: NetworkTrafficDataLocal): String {
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
        overviewData += "All size: ${ByteSizeUtils.toTextWithByteUnit(getAllResponseSize(networkTrafficData))}\n"
        return overviewData.trimIndent()
    }

    private fun getTime(timestamp: Long?): String? {
        timestamp ?: return null

        val instant = Instant.fromEpochMilliseconds(timestamp)
        val systemTimeZone = TimeZone.currentSystemDefault()
        val localDateTime = instant.toLocalDateTime(systemTimeZone)

        return DateTimeUtils.toTimeString(localDateTime)
    }

    private fun headersToString(headers: Set<Map.Entry<String, List<String>>>?): String = headers?.joinToString(
        separator = "\n    ",
        prefix = "[\n    ",
        postfix = "\n  ]"
    ) { (headerName, headerValue) ->
        "$headerName: $headerValue"
    } ?: ""

    private fun getSslText(protocol: String?): String = if (protocol == "https") {
        "Yes"
    } else {
        "No"
    }

    private fun getAllResponseSize(networkTrafficData: NetworkTrafficDataLocal): Long {
        var size = 0L

        size += networkTrafficData.responsePayloadSize ?: 0
        size += networkTrafficData.responseHeadersSize ?: 0

        return size
    }
}
