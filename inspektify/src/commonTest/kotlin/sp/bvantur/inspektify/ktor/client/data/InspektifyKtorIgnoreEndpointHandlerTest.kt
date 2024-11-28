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
    fun `GIVEN exact match strategy with correct endpoint defined and get method WHEN shouldIgnoreEndpoint is called THEN it returns that is should be ignored`() {
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
                    matchingStrategy = EndpointMatchingStrategy.Exact("https://www.example.com/path/to/resource")
                )
            )
        )

        assertTrue {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN exact match strategy with different endpoint defined and get method WHEN shouldIgnoreEndpoint is called THEN it returns that is should not be ignored`() {
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
                    matchingStrategy = EndpointMatchingStrategy.Exact("https://www.example.com/path/to/resource")
                )
            )
        )

        assertFalse {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN exact match strategy with correct endpoint with params defined and post method WHEN shouldIgnoreEndpoint is called THEN it returns that is should be ignored`() {
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
                    matchingStrategy = EndpointMatchingStrategy.Exact(
                        "https://www.example.com/path/to/resource?param1=value1"
                    )
                )
            )
        )

        assertTrue {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN exact match strategy and get method WHEN shouldIgnoreEndpoint is called with post method request THEN it returns that it should not be ignored`() {
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
                    matchingStrategy = EndpointMatchingStrategy.Exact("https://www.example.com/path/to/resource")
                )
            )
        )

        assertFalse {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN exact match strategy with empty value and get method WHEN shouldIgnoreEndpoint is called THEN it returns that it should not be ignored`() {
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
                    matchingStrategy = EndpointMatchingStrategy.Exact("")
                )
            )
        )

        assertFalse {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN contains match strategy with correct endpoint defined and get method WHEN shouldIgnoreEndpoint is called THEN it returns that is should be ignored`() {
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
                    matchingStrategy = EndpointMatchingStrategy.Contains("https://www.example.com/path/to/resource")
                )
            )
        )

        assertTrue {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN contains match strategy with different endpoint defined and get method WHEN shouldIgnoreEndpoint is called THEN it returns that is should not be ignored`() {
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
                    matchingStrategy = EndpointMatchingStrategy.Contains("examples")
                )
            )
        )

        assertFalse {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN contains match strategy with correct endpoint with params defined and post method WHEN shouldIgnoreEndpoint is called THEN it returns that is should be ignored`() {
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
                    matchingStrategy = EndpointMatchingStrategy.Contains("resource?param1=value1")
                )
            )
        )

        assertTrue {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN contains match strategy with correct endpoint defined and get method WHEN shouldIgnoreEndpoint is called on endpoint with params THEN it returns that is should be ignored`() {
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
                    matchingStrategy = EndpointMatchingStrategy.Contains("https://www.example.com/path/to/resource")
                )
            )
        )

        assertTrue {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN contains match strategy with empty value and get method WHEN shouldIgnoreEndpoint is called THEN it returns that it should not be ignored`() {
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
                    matchingStrategy = EndpointMatchingStrategy.Contains("")
                )
            )
        )

        assertFalse {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN regex match strategy with correct regex defined and get method WHEN shouldIgnoreEndpoint is called THEN it returns that is should be ignored`() {
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
                    matchingStrategy = EndpointMatchingStrategy.Regex("https://www\\.example\\.com/.*")
                )
            )
        )

        assertTrue {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN regex match strategy with correct endpoint with params defined and post method WHEN shouldIgnoreEndpoint is called THEN it returns that is should be ignored`() {
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
                    matchingStrategy = EndpointMatchingStrategy.Regex("https://www\\.example\\.com/.*")
                )
            )
        )

        assertTrue {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN regex match strategy with empty value and get method WHEN shouldIgnoreEndpoint is called THEN it returns that it should not be ignored`() {
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
                    matchingStrategy = EndpointMatchingStrategy.Contains("")
                )
            )
        )

        assertFalse {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN multiple exact match endpoints with one of them matching passed request WHEN shouldIgnoreEndpoint is called THEN it returns that it should be ignored`() {
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
                    matchingStrategy = EndpointMatchingStrategy.Exact("https://www.example.com/other/resource")
                ),
                IgnorePathData(
                    method = MethodType.GET,
                    matchingStrategy = EndpointMatchingStrategy.Exact("https://www.example.com/path/to/resource")
                )
            )
        )

        assertTrue {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }

    @Test
    fun `GIVEN multiple exact and match endpoints with no matches WHEN shouldIgnoreEndpoint is called THEN it returns that it should not be ignored`() {
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
                    matchingStrategy = EndpointMatchingStrategy.Exact("https://www.example.com/other/resource")
                ),
                IgnorePathData(
                    method = MethodType.GET,
                    matchingStrategy = EndpointMatchingStrategy.Contains("https://www.example.com/different/resource")
                )
            )
        )

        assertFalse {
            ignoreEndpointHandler.shouldIgnoreEndpoint(request)
        }
    }
}
