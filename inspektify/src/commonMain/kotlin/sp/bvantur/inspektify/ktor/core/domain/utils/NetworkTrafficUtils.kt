package sp.bvantur.inspektify.ktor.core.domain.utils

import androidx.compose.ui.text.AnnotatedString
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.withStyle
import kotlinx.datetime.Instant
import kotlinx.datetime.TimeZone
import kotlinx.datetime.toLocalDateTime
import kotlinx.serialization.json.JsonElement
import sp.bvantur.inspektify.ktor.core.di.AppComponents
import sp.bvantur.inspektify.ktor.data.model.NetworkTraffic

internal object NetworkTrafficUtils {
    fun formatHeadersAsAnnotatedString(headers: Set<Map.Entry<String, List<String>>>?): AnnotatedString? {
        if (headers.isNullOrEmpty()) return null
        return buildAnnotatedString {
            headers.forEach { (headerName, headerValue) ->
                withStyle(style = SpanStyle(fontWeight = FontWeight.Bold)) {
                    append(headerName)
                    append(": ")
                }

                append(headerValue.joinToString())
                append("\n")
            }
        }
    }

    fun prettyPrintJson(jsonText: String?): String? {
        if (jsonText.isNullOrEmpty()) return null

        val json = AppComponents.getAppModule().json
        val jsonElement = json.parseToJsonElement(jsonText)
        return json.encodeToString(JsonElement.serializer(), jsonElement)
    }

    fun getSslText(networkTraffic: NetworkTraffic?): String {
        networkTraffic ?: return KtorPresentationConstants.MISSING_DATA

        return if (networkTraffic.protocol == "https") {
            "Yes"
        } else {
            "No"
        }
    }

    internal fun copyToClipboardStructure(networkTraffic: NetworkTraffic?): String {
        networkTraffic ?: return "NULL"
        var clipboardText = ""
        clipboardText += getOverviewDataAsString(networkTraffic)
        clipboardText += "\n-------------------------------------------------------\n"
        clipboardText += getRequestDataAsString(networkTraffic)
        clipboardText += "\n-------------------------------------------------------\n"
        clipboardText += getResponseDataAsString(networkTraffic)
        return clipboardText
    }

    fun geAllNetworkTrafficSize(networkTraffic: NetworkTraffic?): Long {
        networkTraffic ?: return 0

        var size = 0L

        size += getAllRequestSize(networkTraffic)
        size += getAllResponseSize(networkTraffic)

        return size
    }

    private fun getRequestDataAsString(networkTraffic: NetworkTraffic): String {
        var requestData = ""
        requestData += "REQUEST:\n"
        getTime(networkTraffic.requestTimestamp)?.let {
            requestData += "Request Date: $it\n"
        }
        networkTraffic.requestPayloadSize?.let {
            requestData += "Request Payload Size: ${ByteSizeUtils.toTextWithByteUnit(it)}\n"
        }
        networkTraffic.requestHeadersSize?.let {
            requestData += "Request Headers Size: ${ByteSizeUtils.toTextWithByteUnit(it)}\n"
        }
        requestData += """Request Headers: ${headersToString(networkTraffic.requestHeaders)}"""
        requestData += "\n"
        networkTraffic.requestPayload?.let {
            requestData += if (it.isEmpty()) {
                "Request Body: <EMPTY>"
            } else {
                """Request Body: $it"""
            }
            requestData += "\n"
        }
        return requestData
    }

    private fun getResponseDataAsString(networkTraffic: NetworkTraffic): String {
        var responseData = ""
        responseData += "RESPONSE:\n"
        getTime(networkTraffic.responseTimestamp)?.let {
            responseData += "Response Date: $it\n"
        }
        networkTraffic.responseStatus?.let {
            responseData += "Response Code: $it\n"
        }
        networkTraffic.responseStatusDescription?.let {
            responseData += "Response Message: $it\n"
        }
        networkTraffic.responsePayloadSize?.let {
            responseData += "Response Payload Size: ${ByteSizeUtils.toTextWithByteUnit(it)}\n"
        }
        networkTraffic.responseHeadersSize?.let {
            responseData += "Response Headers Size: ${ByteSizeUtils.toTextWithByteUnit(it.toLong())}\n"
        }
        responseData += """Response Headers: ${headersToString(networkTraffic.responseHeaders)}"""
        responseData += "\n"
        networkTraffic.responsePayload?.let {
            responseData += if (it.isEmpty()) {
                "Response Body: <EMPTY>"
            } else {
                """Response Body: $it"""
            }
            responseData += "\n"
        }
        return responseData.trimIndent()
    }

    private fun getOverviewDataAsString(networkTraffic: NetworkTraffic): String {
        var overviewData = ""
        overviewData += "OVERVIEW:\n"
        networkTraffic.method?.let {
            overviewData += "Method: $it\n"
        }
        networkTraffic.url?.let {
            overviewData += "URL: $it\n"
        }
        networkTraffic.host?.let {
            overviewData += "Host: $it\n"
        }
        networkTraffic.path?.let {
            overviewData += "Path: $it\n"
        }
        networkTraffic.protocol?.let {
            overviewData += "Protocol: $it\n"
        }
        networkTraffic.tookDurationInMs?.let {
            overviewData += "Duration (ms): $it\n"
        }
        overviewData += "SSL: ${getSslText(networkTraffic)}\n"
        overviewData += "All size: ${ByteSizeUtils.toTextWithByteUnit(getAllResponseSize(networkTraffic))}\n"
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

    fun getAllRequestSize(networkTraffic: NetworkTraffic?): Long {
        networkTraffic ?: return 0

        var size = 0L

        size += networkTraffic.requestPayloadSize ?: 0
        size += networkTraffic.requestHeadersSize ?: 0

        return size
    }

    fun getAllResponseSize(networkTraffic: NetworkTraffic?): Long {
        networkTraffic ?: return 0

        var size = 0L

        size += networkTraffic.responsePayloadSize ?: 0
        size += networkTraffic.responseHeadersSize ?: 0

        return size
    }

    internal fun createCurlCommand(networkTraffic: NetworkTraffic?): String {
        val errorMessage = "Failed to create cURL command"
        networkTraffic ?: return errorMessage
        val method = networkTraffic.method ?: return errorMessage
        val url = networkTraffic.url ?: return errorMessage

        val components = mutableListOf("curl -v")

        components.add("-X $method")

        networkTraffic.requestHeaders?.forEach { (key, value) ->
            val escapedValue = value.joinToString().replace("\"", "\\\"")
            components.add("-H \"$key: $escapedValue\"")
        }

        networkTraffic.requestPayload?.let { payload ->
            var escapedBody = payload.replace("\\\"", "\\\\\"")
            escapedBody = escapedBody.replace("\"", "\\\"")
            components.add("-d \"$escapedBody\"")
        }

        components.add("\"$url\"")

        return components.joinToString(separator = " \\\n\t")
    }
}
