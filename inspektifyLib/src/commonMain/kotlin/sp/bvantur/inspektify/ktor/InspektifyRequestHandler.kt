package sp.bvantur.inspektify.ktor

import io.ktor.client.request.HttpRequestBuilder
import io.ktor.http.charset
import io.ktor.http.content.OutgoingContent
import io.ktor.util.AttributeKey
import io.ktor.util.toByteArray
import io.ktor.utils.io.ByteReadChannel
import io.ktor.utils.io.charsets.Charsets
import kotlinx.coroutines.withContext
import sp.bvantur.inspektify.ktor.data.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.data.utils.NetworkTrafficDataUtils
import sp.bvantur.inspektify.ktor.utils.extensions.tryReadText
import sp.bvantur.inspektify.utils.DispatcherProvider

internal interface InspektifyRequestHandler {

    fun getNetworkTrafficIdKey(): AttributeKey<Long>

    suspend fun handleRequest(request: HttpRequestBuilder): NetworkTraffic
}

internal class InspektifyRequestHandlerImpl(
    private val dispatcherProvider: DispatcherProvider
) : InspektifyRequestHandler {
    private val networkTrafficIdKey = AttributeKey<Long>("NetworkTrafficIdKey")

    override suspend fun handleRequest(request: HttpRequestBuilder): NetworkTraffic = withContext(
        dispatcherProvider.default
    ) {
        val id = request.attributes[networkTrafficIdKey]
        val content = request.body as OutgoingContent
        val method = request.method.value
        val requestContentType = content.contentType?.contentType
        val contentType = content.contentType
        val url = request.url
        val headers = request.headers.build()
        val (payload, payloadSize) = getContentWithSize(content)
        val headersSize = NetworkTrafficDataUtils.calculateHeadersSize(headers)
        val totalSize = payloadSize + headersSize

        println("[REQUEST!]")
        println("id&timestamp: $id")
        println("method: $method")
        println("requestContentType: $requestContentType")
        println("contentType: $contentType")
        println("url: $url")
        println("headers: $headers")
        println("content: $content")
        println("body: $payload")
        println("payloadSize: $payloadSize")
        println("headerSize: $headersSize")
        println("totalSize: $totalSize")
        NetworkTraffic(
            id = id,
            method = method,
            url = url.toString(),
            host = url.host,
            path = url.pathSegments.joinToString("/"),
            protocol = url.protocol.name,
            requestTimestamp = id,
            requestHeaders = NetworkTrafficDataUtils.mapHeaders(headers),
            requestPayload = payload,
            requestPayloadSize = payloadSize,
            requestHeadersSize = headersSize.toLong()
        )
    }

    override fun getNetworkTrafficIdKey(): AttributeKey<Long> = networkTrafficIdKey

    private suspend fun getContentWithSize(content: OutgoingContent): Pair<String?, Long> {
        val charset = content.contentType?.charset() ?: Charsets.UTF_8
        val bytes: ByteArray? = when (content) {
            is OutgoingContent.ByteArrayContent -> {
                content.bytes()
            }

            is OutgoingContent.ReadChannelContent -> {
                content.readFrom().toByteArray()
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
