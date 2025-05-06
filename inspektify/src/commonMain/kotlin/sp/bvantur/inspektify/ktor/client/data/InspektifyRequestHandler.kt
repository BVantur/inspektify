package sp.bvantur.inspektify.ktor.client.data

import io.ktor.client.request.HttpRequestBuilder
import io.ktor.client.request.forms.MultiPartFormDataContent
import io.ktor.client.utils.EmptyContent.contentLength
import io.ktor.http.charset
import io.ktor.http.content.OutgoingContent
import io.ktor.util.AttributeKey
import io.ktor.util.cio.toByteArray
import io.ktor.utils.io.ByteChannel
import io.ktor.utils.io.ByteReadChannel
import io.ktor.utils.io.charsets.Charsets
import io.ktor.utils.io.close
import kotlinx.coroutines.CancellationException
import kotlinx.coroutines.coroutineScope
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.ktor.KtorUtils
import sp.bvantur.inspektify.ktor.client.data.utils.tryReadText
import sp.bvantur.inspektify.ktor.client.domain.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.core.data.utils.NetworkTrafficDataUtils
import sp.bvantur.inspektify.ktor.core.data.utils.NetworkTrafficDataUtils.redactHeaders
import sp.bvantur.inspektify.ktor.core.data.utils.NetworkTrafficDataUtils.redactJsonProperties
import sp.bvantur.inspektify.ktor.core.di.AppComponents

internal class InspektifyRequestHandler {
    private val networkTrafficIdKey = AttributeKey<Long>("NetworkTrafficIdKey")

    suspend fun handleRequest(
        request: HttpRequestBuilder,
        sessionId: Long?,
        redactHeaders: List<String>,
        redactBodyProperties: List<String>
    ): NetworkTraffic {
        val id = request.attributes[networkTrafficIdKey]
        val content = request.body as OutgoingContent
        val contentType = content.contentType?.contentType
        val method = request.method.value
        val url = request.url
        val headers = request.headers.build()
        val (payload, payloadSize) = getContentWithSize(content)
        val headersSize = NetworkTrafficDataUtils.calculateHeadersSize(headers)

        return NetworkTraffic(
            id = id,
            sessionId = sessionId ?: 0L,
            method = method,
            url = url.toString(),
            requestContentType = contentType,
            host = url.host,
            path = url.pathSegments.joinToString("/"),
            protocol = url.protocol.name,
            requestTimestamp = id,
            requestHeaders = headers.entries().redactHeaders(redactHeaders),
            requestPayload = payload?.redactJsonProperties(redactBodyProperties),
            requestPayloadSize = payloadSize,
            requestHeadersSize = headersSize.toLong()
        )
    }

    fun getNetworkTrafficIdKey(): AttributeKey<Long> = networkTrafficIdKey

    private suspend fun getContentWithSize(content: OutgoingContent): Pair<String?, Long> {
        val charset = content.contentType?.charset() ?: Charsets.UTF_8
        val bytes: ByteArray? = when (content) {
            is OutgoingContent.ByteArrayContent -> {
                content.bytes()
            }

            is OutgoingContent.ReadChannelContent -> {
                KtorUtils.channelToByteArray(content.readFrom())
            }

            is MultiPartFormDataContent -> {
                onGetMultipartByteArray(content)
            }

            else -> {
                null
            }
        }

        if (bytes != null) {
            if (content !is MultiPartFormDataContent) {
                return ByteReadChannel(bytes).tryReadText(charset = charset) to (content.contentLength ?: 0L)
            }

            val boundary = content.contentType.parameter("boundary")
            if (boundary != null) {
                try {
                    val rawBodyString = ByteReadChannel(bytes).tryReadText(charset = charset) ?: ""
                    val parts = rawBodyString.split("--$boundary")
                        .drop(1)
                        .dropLast(1)
                    return prettifyMultipartJson(parts.joinToString("\n\n")) to bytes.size.toLong()
                } catch (ignore: Exception) {
                    println("Error parsing MultiPartFormDataContent parts: ${ignore.message}")
                    return ByteReadChannel(bytes).tryReadText(charset = charset) to contentLength
                }
            }
        }

        return "" to 0L
    }

    private suspend fun onGetMultipartByteArray(content: MultiPartFormDataContent): ByteArray? {
        val channel = ByteChannel(autoFlush = true)
        try {
            coroutineScope {
                launch {
                    content.writeTo(channel)
                    channel.close(cause = null)
                }
            }
            return channel.toByteArray()
        } catch (exception: CancellationException) {
            throw exception
        } catch (ignore: Exception) {
            println("Error reading MultiPartFormDataContent: ${ignore.message}")
            return null
        } finally {
            if (!channel.isClosedForWrite) channel.close(cause = null)
            if (!channel.isClosedForRead) channel.cancel(CancellationException("Closing temporary channel"))
        }
    }

    private fun prettifyMultipartJson(input: String): String {
        val jsonRegex = Regex("""\{[^}]*\}""")

        return jsonRegex.replace(input) { match ->
            try {
                val jsonString = match.value

                val json = AppComponents.getAppModule().json
                val jsonElement = json.parseToJsonElement(jsonString)
                val formattedJson = json.encodeToString(jsonElement)

                formattedJson
            } catch (ignore: Exception) {
                println("Error prettifying Multipart json: ${ignore.message}")
                match.value
            }
        }
    }
}
