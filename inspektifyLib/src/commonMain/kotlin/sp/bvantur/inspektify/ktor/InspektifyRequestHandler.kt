package sp.bvantur.inspektify.ktor

import io.ktor.client.request.HttpRequestBuilder
import io.ktor.http.Headers
import io.ktor.http.charset
import io.ktor.http.content.OutgoingContent
import io.ktor.util.AttributeKey
import io.ktor.util.date.getTimeMillis
import io.ktor.util.toByteArray
import io.ktor.util.toMap
import io.ktor.utils.io.ByteReadChannel
import io.ktor.utils.io.charsets.Charsets
import io.ktor.utils.io.core.toByteArray
import kotlinx.atomicfu.atomic
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Job
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.utils.DispatcherProvider
import sp.bvantur.inspektify.utils.extensions.tryReadText

internal interface InspektifyRequestHandler {

    fun getRequestKey(): AttributeKey<Long>

    fun generateRequestId(): Long

    fun handleRequest(request: HttpRequestBuilder)
}

internal class InspektifyRequestHandlerImpl(
    private val dispatcherProvider: DispatcherProvider
) : InspektifyRequestHandler {
    private val coroutineScope = CoroutineScope(Job() + dispatcherProvider.default)

    private val requestIdKey = AttributeKey<Long>("HttpTransactionId")
    private val requestId = atomic(1000L)

    override fun handleRequest(request: HttpRequestBuilder) {
        val httpTransactionId = request.attributes[requestIdKey]

        coroutineScope.launch(dispatcherProvider.default) {
            val content = request.body as OutgoingContent
            val method = request.method.value
            val date = getTimeMillis()
            val requestContentType = content.contentType?.contentType
            val contentType = content.contentType
            val url = request.url
            val headers = request.headers.build()
            val (body, size) = getContentWithSize(content)
            val headerSize = calculateHeadersSize(headers)
            val totalSize = size + headerSize
            println("[REQUEST!]")
            println("httpTransactionId: $httpTransactionId")
            println("date: $date")
            println("method: $method")
            println("requestContentType: $requestContentType")
            println("contentType: $contentType")
            println("url: $url")
            println("headers: $headers")
            println("content: $content")
            println("body: $body")
            println("size: $size")
            println("headerSize: $headerSize")
            println("totalSize: $totalSize")
        }
    }

    override fun getRequestKey(): AttributeKey<Long> = requestIdKey

    override fun generateRequestId(): Long = requestId.incrementAndGet()

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

    private fun calculateHeadersSize(headers: Headers): Long = headers.toMap().map { (name, header) ->
        name.toByteArray().size + header.sumOf { value ->
            value.toByteArray().size
        }
    }.sum().toLong()
}
