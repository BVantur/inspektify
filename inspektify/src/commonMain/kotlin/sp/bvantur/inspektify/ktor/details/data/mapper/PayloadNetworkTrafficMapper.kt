package sp.bvantur.inspektify.ktor.details.data.mapper

import androidx.compose.ui.text.AnnotatedString
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.withStyle
import kotlinx.datetime.Instant
import kotlinx.datetime.TimeZone
import kotlinx.datetime.toLocalDateTime
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonElement
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.core.domain.utils.ByteSizeUtils
import sp.bvantur.inspektify.ktor.core.domain.utils.DateTimeUtils
import sp.bvantur.inspektify.ktor.details.domain.model.KtorPayloadData
import kotlin.time.ExperimentalTime

internal object PayloadNetworkTrafficMapper {

    fun getResponseDataAsString(networkTrafficData: NetworkTrafficDataLocal): String {
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

    fun getRequestDataAsString(networkTrafficData: NetworkTrafficDataLocal): String {
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

    fun toPayloadDomain(data: NetworkTrafficDataLocal, isRequest: Boolean, json: Json): KtorPayloadData =
        KtorPayloadData(
            headers = if (isRequest) {
                formatHeadersAsAnnotatedString(data.requestHeaders)
            } else {
                formatHeadersAsAnnotatedString(data.responseHeaders)
            },
            payload = if (isRequest) {
                prettyPrintJson(json, data.requestPayload)
            } else {
                prettyPrintJson(json, data.responsePayload)
            }
        )

    fun getAllResponseSize(networkTraffic: NetworkTrafficDataLocal): Long {
        var size = 0L

        size += networkTraffic.responsePayloadSize ?: 0
        size += networkTraffic.responseHeadersSize ?: 0

        return size
    }

    fun getAllRequestSize(networkTraffic: NetworkTrafficDataLocal): Long {
        var size = 0L

        size += networkTraffic.requestPayloadSize ?: 0
        size += networkTraffic.requestHeadersSize ?: 0

        return size
    }

    private fun formatHeadersAsAnnotatedString(headers: Set<Map.Entry<String, List<String>>>?): AnnotatedString {
        if (headers.isNullOrEmpty()) return buildAnnotatedString { }

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

    private fun prettyPrintJson(json: Json, jsonString: String?): String {
        jsonString ?: return ""

        try {
            val jsonElement = Json.parseToJsonElement(jsonString)
            return json.encodeToString(JsonElement.serializer(), jsonElement)
        } catch (ignore: Exception) {
            return jsonString
        }
    }

    private fun headersToString(headers: Set<Map.Entry<String, List<String>>>?): String = headers?.joinToString(
        separator = "\n    ",
        prefix = "[\n    ",
        postfix = "\n  ]"
    ) { (headerName, headerValue) ->
        "$headerName: $headerValue"
    } ?: ""

    @OptIn(ExperimentalTime::class)
    private fun getTime(timestamp: Long?): String? {
        timestamp ?: return null

        val instant = Instant.fromEpochMilliseconds(timestamp)
        val systemTimeZone = TimeZone.currentSystemDefault()
        val localDateTime = instant.toLocalDateTime(systemTimeZone)

        return DateTimeUtils.toTimeString(localDateTime)
    }
}
