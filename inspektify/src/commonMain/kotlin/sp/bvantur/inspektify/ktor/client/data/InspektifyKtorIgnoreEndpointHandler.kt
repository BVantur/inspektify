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
        if (endpoint.method.isAll()) {
            true
        } else {
            endpoint.method.value == requestBuilder.method.value
        }
    }.any { endpoint ->
        when (endpoint.matchingStrategy) {
            is EndpointMatchingStrategy.Contains -> {
                val containsValue = endpoint.matchingStrategy.value
                if (containsValue.isEmpty()) {
                    false
                } else {
                    requestBuilder.url.toString()
                        .contains(endpoint.matchingStrategy.value)
                }
            }

            is EndpointMatchingStrategy.Exact -> endpoint.matchingStrategy.value == requestBuilder.url.toString()
            is EndpointMatchingStrategy.Regex -> requestBuilder.url.toString()
                .matches(Regex(endpoint.matchingStrategy.value))
        }
    }
}
