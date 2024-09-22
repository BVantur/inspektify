package sp.bvantur.inspektify.ktor.presentation.utils

import androidx.compose.ui.text.AnnotatedString
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.withStyle
import kotlinx.datetime.Instant
import kotlinx.datetime.TimeZone
import kotlinx.datetime.toLocalDateTime
import kotlinx.serialization.json.JsonElement
import sp.bvantur.inspektify.ktor.data.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.data.model.NetworkTrafficHeader
import sp.bvantur.inspektify.ktor.di.AppComponents
import sp.bvantur.inspektify.ktor.domain.utils.DateTimeUtils

internal object NetworkTrafficUtils {
    fun formatHeadersAsAnnotatedString(headers: List<NetworkTrafficHeader>?): AnnotatedString? {
        if (headers.isNullOrEmpty()) return null

        return buildAnnotatedString {
            headers.forEach { header ->
                withStyle(style = SpanStyle(fontWeight = FontWeight.Bold)) {
                    append(header.name)
                    append(": ")
                }

                append(header.value)
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
        networkTraffic ?: return "???"

        return if (networkTraffic.protocol == "https") {
            "Yes"
        } else {
            "No"
        }
    }

    internal fun copyToClipboardStructure(networkTraffic: NetworkTraffic?): String {
        networkTraffic ?: return "NULL"
        val nullableValue = "???"
        return """
            ${getOverviewDataAsString(networkTraffic, nullableValue)}
            
            ${getRequestDataAsString(networkTraffic, nullableValue)}
            
            ${getResponseDataAsString(networkTraffic, nullableValue)}
            
            
        """.trimIndent()
    }

    fun geAllNetworkTrafficSize(networkTraffic: NetworkTraffic?): Long {
        networkTraffic ?: return 0

        var size = 0L

        size += getAllRequestSize(networkTraffic)
        size += getAllResponseSize(networkTraffic)

        return size
    }

    private fun getRequestDataAsString(networkTraffic: NetworkTraffic, nullableValue: String): String = """
            REQUEST
            --------------------------------------------------------
            Request Date: ${getTime(networkTraffic.requestTimestamp)} ?: $nullableValue}
            Request Headers: ${headersToString(networkTraffic.requestHeaders)}
            Request Body: ${networkTraffic.requestPayload ?: nullableValue}
            Request Payload Size: ${networkTraffic.requestPayloadSize ?: nullableValue}
            Request Headers Size: ${networkTraffic.requestHeadersSize ?: nullableValue}
            --------------------------------------------------------
    """.trimIndent()

    private fun getResponseDataAsString(networkTraffic: NetworkTraffic, nullableValue: String): String = """
            RESPONSE
            --------------------------------------------------------
            Response Date: ${getTime(networkTraffic.responseTimestamp)} ?: $nullableValue}
            Response Code: ${networkTraffic.responseStatus ?: nullableValue}
            Response Headers: ${headersToString(networkTraffic.responseHeaders)}
            Response Message: ${networkTraffic.responseStatusDescription ?: nullableValue}
            Response Body: ${networkTraffic.responsePayload ?: nullableValue}
            Response Payload Size: ${networkTraffic.responsePayloadSize ?: nullableValue}
            Response Headers Size: ${networkTraffic.responseHeadersSize ?: nullableValue}
            --------------------------------------------------------
    """.trimIndent()

    private fun getOverviewDataAsString(networkTraffic: NetworkTraffic, nullableValue: String): String = """
            Method: ${networkTraffic.method ?: nullableValue}
                        URL: ${networkTraffic.url ?: nullableValue}
                        Host: ${networkTraffic.host ?: nullableValue}
                        Path: ${networkTraffic.path ?: nullableValue}
                        Protocol: ${networkTraffic.protocol ?: nullableValue}
                        Duration (ms): ${networkTraffic.tookDurationInMs ?: nullableValue}
                        SSL: ${getSslText(networkTraffic)}
                        All size: ${getAllResponseSize(networkTraffic)}
    """.trimIndent()

    private fun getTime(timestamp: Long?): String {
        timestamp ?: return "???"

        val instant = Instant.fromEpochMilliseconds(timestamp)
        val systemTimeZone = TimeZone.currentSystemDefault()
        val localDateTime = instant.toLocalDateTime(systemTimeZone)

        return DateTimeUtils.toTimeString(localDateTime)
    }

    private fun headersToString(headers: List<NetworkTrafficHeader>?): String =
        headers?.joinToString(separator = "\n    ", prefix = "[\n    ", postfix = "\n  ]") {
            "${it.name}: ${it.value}"
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
}
