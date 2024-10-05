package sp.bvantur.inspektify.ktor.payload.data.mapper

import androidx.compose.ui.text.AnnotatedString
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.withStyle
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.payload.domain.model.KtorPayloadData

internal object KtorPayloadDataMapper {

    fun toDomain(data: NetworkTrafficDataLocal, isRequest: Boolean): KtorPayloadData = KtorPayloadData(
        headers = if (isRequest) {
            formatHeadersAsAnnotatedString(data.requestHeaders)
        } else {
            formatHeadersAsAnnotatedString(data.responseHeaders)
        },
        payload = if (isRequest) {
            data.requestPayload
        } else {
            data.responsePayload
        } ?: ""
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
}
