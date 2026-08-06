@file:Suppress("ktlint:standard:max-line-length")

package sp.bvantur.inspektify.ktor.client.data

import io.ktor.client.request.HttpRequestBuilder
import io.ktor.http.HttpMethod
import io.ktor.http.URLProtocol
import io.ktor.http.encodedPath
import kotlinx.coroutines.test.runTest
import sp.bvantur.inspektify.ktor.PayloadTooLargePolicy
import sp.bvantur.inspektify.ktor.inspektifyTags
import kotlin.test.BeforeTest
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertNull

class InspektifyRequestHandlerTest {

    private lateinit var requestHandler: InspektifyRequestHandler

    @BeforeTest
    fun setup() {
        requestHandler = InspektifyRequestHandler()
    }

    @Test
    fun `GIVEN a tagged request WHEN handleRequest is called THEN the tags are captured`() = runTest {
        val request = graphQlRequest().also { it.inspektifyTags("SearchProducts", "query") }

        assertEquals(listOf("SearchProducts", "query"), requestHandler.handleRequest(request).tags)
    }

    @Test
    fun `GIVEN an untagged request WHEN handleRequest is called THEN the tags are null`() = runTest {
        assertNull(requestHandler.handleRequest(graphQlRequest()).tags)
    }

    @Test
    fun `GIVEN repeated tagging WHEN handleRequest is called THEN the tags accumulate in order without duplicates`() =
        runTest {
            val request = graphQlRequest().also {
                it.inspektifyTags("api-v2")
                it.inspektifyTags("SearchProducts", "api-v2")
            }

            assertEquals(listOf("api-v2", "SearchProducts"), requestHandler.handleRequest(request).tags)
        }

    @Test
    fun `GIVEN only blank tags WHEN handleRequest is called THEN the tags are null`() = runTest {
        val request = graphQlRequest().also { it.inspektifyTags("", "   ") }

        assertNull(requestHandler.handleRequest(request).tags)
    }

    private fun graphQlRequest(): HttpRequestBuilder = HttpRequestBuilder().also { request ->
        request.method = HttpMethod.Post
        request.url {
            protocol = URLProtocol.HTTPS
            host = "www.example.com"
            encodedPath = "/graphql"
        }
        request.attributes.put(requestHandler.getNetworkTrafficIdKey(), 1L)
    }

    private suspend fun InspektifyRequestHandler.handleRequest(request: HttpRequestBuilder) = handleRequest(
        request = request,
        sessionId = 1L,
        redactHeaders = emptyList(),
        redactBodyProperties = emptyList(),
        payloadTooLargePolicy = PayloadTooLargePolicy.BodySizeLimit()
    )
}
