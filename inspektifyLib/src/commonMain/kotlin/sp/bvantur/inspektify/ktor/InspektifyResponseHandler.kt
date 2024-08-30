package sp.bvantur.inspektify.ktor

import io.ktor.client.statement.HttpResponse
import io.ktor.client.statement.bodyAsChannel
import io.ktor.http.charset
import io.ktor.http.contentType
import io.ktor.utils.io.charsets.Charsets
import io.ktor.utils.io.core.toByteArray
import kotlinx.coroutines.withContext
import sp.bvantur.inspektify.ktor.data.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.utils.NetworkTrafficUtils
import sp.bvantur.inspektify.ktor.utils.extensions.tryReadText
import sp.bvantur.inspektify.utils.DispatcherProvider

internal interface InspektifyResponseHandler {
    suspend fun handleResponse(response: HttpResponse, networkTraffic: NetworkTraffic): NetworkTraffic
}

internal class InspektifyResponseHandlerImpl(
    private val dispatcherProvider: DispatcherProvider
) : InspektifyResponseHandler {

    override suspend fun handleResponse(
        response: HttpResponse,
        networkTraffic: NetworkTraffic
    ): NetworkTraffic = withContext(
        dispatcherProvider.default
    ) {
        val charset = response.contentType()?.charset() ?: Charsets.UTF_8
        val protocol = response.version.toString()
        val timestamp = response.responseTime.timestamp
        val status = response.status.value
        val description = response.status.description
        val headers = response.headers
        val headersSize = NetworkTrafficUtils.calculateHeadersSize(headers)
        val body = response.bodyAsChannel().tryReadText(charset)

        println("[RESPONSE!]")
        println("protocol: $protocol")
        println("time: $timestamp")
        println("status: $status")
        println("description: $description")
        println("headers: $headers")
        println("body: $body")

        networkTraffic.copy(
            responseTimestamp = timestamp,
            responseStatus = status,
            responseStatusDescription = description,
            responseHeaders = NetworkTrafficUtils.mapHeaders(headers),
            responsePayload = body,
            responsePayloadSize = body?.toByteArray()?.size,
            responseHeadersSize = headersSize,
            tookDurationInMs = timestamp - (networkTraffic.requestTimestamp ?: 0),
        )
    }
}
