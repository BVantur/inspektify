@file:Suppress("ktlint:standard:max-line-length")

package sp.bvantur.inspektify.ktor.client.data

import io.ktor.client.request.HttpRequestBuilder
import io.ktor.http.HttpMethod
import io.ktor.http.URLProtocol
import io.ktor.http.encodedPath
import sp.bvantur.inspektify.ktor.EndpointMatchingStrategy
import sp.bvantur.inspektify.ktor.IgnorePathData
import sp.bvantur.inspektify.ktor.MethodType
import kotlin.test.BeforeTest
import kotlin.test.Test
import kotlin.test.assertFalse
import kotlin.test.assertTrue

class InspektifyKtorIgnoreEndpointHandlerTest {

    private lateinit var ignoreEndpointHandler: InspektifyKtorIgnoreEndpointHandler

    @BeforeTest
    fun setup() {
        ignoreEndpointHandler = InspektifyKtorIgnoreEndpointHandler()
    }

    @Test
    fun `GIVEN there is an ignore endpoint set and the request is the same as the ignore endpoint with exact match WHEN shouldIgnoreEndpoint is called THEN it returns that is should be ignored`() {
        val request = HttpRequestBuilder().also { request ->
            request.method = HttpMethod.Get
            request.url {
                protocol = URLProtocol.HTTPS
                host = "www.example.com"
                encodedPath = "/path/to/resource"
            }
        }
        ignoreEndpointHandler.configureEndpointIgnoring(
            listOf(
                IgnorePathData(
                    method = MethodType.GET,
                    endpoint = "https://www.example.com/path/to/resource",
                    endpointMatchingStrategy = EndpointMatchingStrategy.EXACT
                )
            )
        )

        assertTrue {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN there is an ignore endpoint set and the request is the same as the ignore endpoint with contains match WHEN shouldIgnoreEndpoint is called THEN it returns that is should be ignored`() {
        val request = HttpRequestBuilder().also { request ->
            request.method = HttpMethod.Get
            request.url {
                protocol = URLProtocol.HTTPS
                host = "www.example.com"
                encodedPath = "/path/to/resource"
            }
        }
        ignoreEndpointHandler.configureEndpointIgnoring(
            listOf(
                IgnorePathData(
                    method = MethodType.GET,
                    endpoint = "https://www.example.com/path/to/resource",
                    endpointMatchingStrategy = EndpointMatchingStrategy.CONTAINS
                )
            )
        )

        assertTrue {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN there is an ignore endpoint set and the request is similar and not the same as the ignore endpoint with exact match WHEN shouldIgnoreEndpoint is called THEN it returns that is should not be ignored`() {
        val request = HttpRequestBuilder().also { request ->
            request.method = HttpMethod.Get
            request.url {
                protocol = URLProtocol.HTTPS
                host = "www.example.com"
                encodedPath = "/path/to/resource"
                parameters.append("param1", "value1")
            }
        }
        ignoreEndpointHandler.configureEndpointIgnoring(
            listOf(
                IgnorePathData(
                    method = MethodType.GET,
                    endpoint = "https://www.example.com/path/to/resource",
                    endpointMatchingStrategy = EndpointMatchingStrategy.EXACT
                )
            )
        )

        assertFalse {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN there is an ignore endpoint set and the request is similar and not the same as the ignore endpoint with contains match WHEN shouldIgnoreEndpoint is called THEN it returns that is should be ignored`() {
        val request = HttpRequestBuilder().also { request ->
            request.method = HttpMethod.Get
            request.url {
                protocol = URLProtocol.HTTPS
                host = "www.example.com"
                encodedPath = "/path/to/resource"
                parameters.append("param1", "value1")
            }
        }
        ignoreEndpointHandler.configureEndpointIgnoring(
            listOf(
                IgnorePathData(
                    method = MethodType.GET,
                    endpoint = "https://www.example.com/path/to/resource",
                    endpointMatchingStrategy = EndpointMatchingStrategy.CONTAINS
                )
            )
        )

        assertTrue {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN there is an ignore endpoint set and the request with params is the same as the ignore endpoint with contains match WHEN shouldIgnoreEndpoint is called THEN it returns that is should be ignored`() {
        val request = HttpRequestBuilder().also { request ->
            request.method = HttpMethod.Post
            request.url {
                protocol = URLProtocol.HTTPS
                host = "www.example.com"
                encodedPath = "/path/to/resource"
                parameters.append("param1", "value1")
            }
        }
        ignoreEndpointHandler.configureEndpointIgnoring(
            listOf(
                IgnorePathData(
                    method = MethodType.POST,
                    endpoint = "https://www.example.com/path/to/resource?param1=value1",
                    endpointMatchingStrategy = EndpointMatchingStrategy.EXACT
                )
            )
        )

        assertTrue {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN there are multiple ignore endpoints and the request matches one with exact match WHEN shouldIgnoreEndpoint is called THEN it returns that it should be ignored`() {
        val request = HttpRequestBuilder().also { request ->
            request.method = HttpMethod.Get
            request.url {
                protocol = URLProtocol.HTTPS
                host = "www.example.com"
                encodedPath = "/path/to/resource"
            }
        }
        ignoreEndpointHandler.configureEndpointIgnoring(
            listOf(
                IgnorePathData(
                    method = MethodType.POST,
                    endpoint = "https://www.example.com/other/resource",
                    endpointMatchingStrategy = EndpointMatchingStrategy.EXACT
                ),
                IgnorePathData(
                    method = MethodType.GET,
                    endpoint = "https://www.example.com/path/to/resource",
                    endpointMatchingStrategy = EndpointMatchingStrategy.EXACT
                )
            )
        )

        assertTrue {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN there are multiple ignore endpoints and none match the request WHEN shouldIgnoreEndpoint is called THEN it returns that it should not be ignored`() {
        val request = HttpRequestBuilder().also { request ->
            request.method = HttpMethod.Get
            request.url {
                protocol = URLProtocol.HTTPS
                host = "www.example.com"
                encodedPath = "/path/to/resource"
            }
        }
        ignoreEndpointHandler.configureEndpointIgnoring(
            listOf(
                IgnorePathData(
                    method = MethodType.POST,
                    endpoint = "https://www.example.com/other/resource",
                    endpointMatchingStrategy = EndpointMatchingStrategy.EXACT
                ),
                IgnorePathData(
                    method = MethodType.GET,
                    endpoint = "https://www.example.com/different/resource",
                    endpointMatchingStrategy = EndpointMatchingStrategy.CONTAINS
                )
            )
        )

        assertFalse {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN an ignore endpoint with a different http method WHEN shouldIgnoreEndpoint is called THEN it returns that it should not be ignored`() {
        val request = HttpRequestBuilder().also { request ->
            request.method = HttpMethod.Post
            request.url {
                protocol = URLProtocol.HTTPS
                host = "www.example.com"
                encodedPath = "/path/to/resource"
            }
        }
        ignoreEndpointHandler.configureEndpointIgnoring(
            listOf(
                IgnorePathData(
                    method = MethodType.GET,
                    endpoint = "https://www.example.com/path/to/resource",
                    endpointMatchingStrategy = EndpointMatchingStrategy.EXACT
                )
            )
        )

        assertFalse {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN an ignore endpoint with an empty endpoint string WHEN shouldIgnoreEndpoint is called THEN it returns that it should not be ignored`() {
        val request = HttpRequestBuilder().also { request ->
            request.method = HttpMethod.Get
            request.url {
                protocol = URLProtocol.HTTPS
                host = "www.example.com"
                encodedPath = "/path/to/resource"
            }
        }
        ignoreEndpointHandler.configureEndpointIgnoring(
            listOf(
                IgnorePathData(
                    method = MethodType.GET,
                    endpoint = "",
                    endpointMatchingStrategy = EndpointMatchingStrategy.EXACT
                )
            )
        )

        assertFalse {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }
}
