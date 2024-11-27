package sp.bvantur.inspektify.ktor.client.data

import io.ktor.client.request.HttpRequestBuilder
import sp.bvantur.inspektify.ktor.EndpointMatchingStrategy
import sp.bvantur.inspektify.ktor.IgnorePathData

internal class InspektifyKtorIgnoreEndpointHandler {

    private var ignoreEndpoints: List<IgnorePathData> = emptyList()

    fun configureEndpointIgnoring(ignoreEndpoints: List<IgnorePathData>) {
        this.ignoreEndpoints = ignoreEndpoints
    }

    fun shouldIgnoreEndpoint(requestBuilder: HttpRequestBuilder): Boolean = ignoreEndpoints.filter { endpoint ->
        endpoint.method.value == requestBuilder.method.value
    }.any { endpoint ->
        when (endpoint.endpointMatchingStrategy) {
            EndpointMatchingStrategy.EXACT -> endpoint.endpoint == requestBuilder.url.toString()
            EndpointMatchingStrategy.CONTAINS -> requestBuilder.url.toString().contains(endpoint.endpoint)
        }
    }
}
