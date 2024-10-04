package sp.bvantur.inspektify.ktor.client.data

import io.ktor.client.request.HttpRequestBuilder
import io.ktor.http.charset
import io.ktor.http.content.OutgoingContent
import io.ktor.util.AttributeKey
import io.ktor.utils.io.ByteReadChannel
import io.ktor.utils.io.charsets.Charsets
import sp.bvantur.inspektify.ktor.KtorUtils
import sp.bvantur.inspektify.ktor.client.data.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.client.data.utils.tryReadText
import sp.bvantur.inspektify.ktor.core.data.utils.NetworkTrafficDataUtils

internal class InspektifyRequestHandler {
    private val networkTrafficIdKey = AttributeKey<Long>("NetworkTrafficIdKey")

    suspend fun handleRequest(request: HttpRequestBuilder, sessionId: Long?): NetworkTraffic {
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
            requestHeaders = headers.entries(),
            requestPayload = payload,
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

            else -> {
                null
            }
        }

        if (bytes != null) {
            return ByteReadChannel(bytes).tryReadText(charset = charset) to (content.contentLength ?: 0L)
        }

        return "" to 0L
    }
}
