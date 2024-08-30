package sp.bvantur.inspektify.ktor

import io.ktor.client.statement.HttpResponse
import io.ktor.client.statement.bodyAsChannel
import io.ktor.http.charset
import io.ktor.http.contentType
import io.ktor.utils.io.charsets.Charsets
import sp.bvantur.inspektify.utils.extensions.tryReadText

internal interface InspektifyResponseHandler {

    suspend fun handleResponse(response: HttpResponse)
}

internal class InspektifyResponseHandlerImpl : InspektifyResponseHandler {

    override suspend fun handleResponse(response: HttpResponse) {
        val charset = response.contentType()?.charset() ?: Charsets.UTF_8
        val protocol = response.version.toString()
        val time = response.responseTime.timestamp
        val status = response.status.value
        val description = response.status.description
        val headers = response.headers
        val body = response.bodyAsChannel().tryReadText(charset)
        val contentType = response.contentType()?.toString()

        println("[RESPONSE!]")
        println("protocol: $protocol")
        println("time: $time")
        println("status: $status")
        println("description: $description")
        println("headers: $headers")
        println("body: $body")
        println("contentType: $contentType")
    }
}
