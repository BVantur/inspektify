package sp.bvantur.inspektify.ktor.payload.data.mapper

import androidx.compose.ui.text.AnnotatedString
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.withStyle
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonElement
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.payload.domain.model.KtorPayloadData

internal object KtorPayloadDataMapper {

    fun toDomain(data: NetworkTrafficDataLocal, isRequest: Boolean, json: Json): KtorPayloadData = KtorPayloadData(
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
}
