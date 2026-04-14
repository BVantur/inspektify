@file:Suppress("ktlint:standard:max-line-length")

package sp.bvantur.inspektify.ktor.core.data.utils

import io.ktor.http.HeadersBuilder
import sp.bvantur.inspektify.ktor.PayloadTooLargePolicy
import sp.bvantur.inspektify.ktor.core.data.utils.NetworkTrafficDataUtils.applyPayloadTooLargePolicy
import sp.bvantur.inspektify.ktor.core.data.utils.NetworkTrafficDataUtils.redactHeaders
import sp.bvantur.inspektify.ktor.core.data.utils.NetworkTrafficDataUtils.redactJsonProperties
import sp.bvantur.inspektify.ktor.core.domain.utils.KtorPresentationConstants.REDACTED_DATA
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertFalse
import kotlin.test.assertTrue

class NetworkTrafficDataUtilsTest {

    @Test
    fun `GIVEN payload size is below max size WHEN applyPayloadTooLargePolicy with BodySizeLimit is called THEN payload is not modified`() {
        val payload = "short payload"

        assertEquals(payload, payload.applyPayloadTooLargePolicy(PayloadTooLargePolicy.BodySizeLimit(1000)))
    }

    @Test
    fun `GIVEN payload size equals max size WHEN applyPayloadTooLargePolicy with BodySizeLimit is called THEN payload is not modified`() {
        val payload = "a".repeat(10)

        assertEquals(payload, payload.applyPayloadTooLargePolicy(PayloadTooLargePolicy.BodySizeLimit(10)))
    }

    @Test
    fun `GIVEN payload size exceeds max size WHEN applyPayloadTooLargePolicy with BodySizeLimit is called THEN payload is truncated with placeholder`() {
        val payload = "a".repeat(100)

        val result = payload.applyPayloadTooLargePolicy(PayloadTooLargePolicy.BodySizeLimit(10))

        assertTrue(result.startsWith("a".repeat(10)))
        assertTrue(result.endsWith(PAYLOAD_TOO_LARGE_PLACEHOLDER))
    }

    @Test
    fun `GIVEN payload size exceeds max size WHEN applyPayloadTooLargePolicy with BodySizeLimit is called THEN truncated payload does not contain original end`() {
        val payload = "a".repeat(50) + "b".repeat(50)

        val result = payload.applyPayloadTooLargePolicy(PayloadTooLargePolicy.BodySizeLimit(50))

        assertFalse(result.contains("b"))
    }

    @Test
    fun `GIVEN max size is 0 WHEN applyPayloadTooLargePolicy with BodySizeLimit is called THEN payload is not modified`() {
        val payload = "some payload"

        assertEquals(payload, payload.applyPayloadTooLargePolicy(PayloadTooLargePolicy.BodySizeLimit(0)))
    }

    @Test
    fun `GIVEN payload is empty WHEN applyPayloadTooLargePolicy with BodySizeLimit is called THEN empty string is returned`() {
        assertEquals("", "".applyPayloadTooLargePolicy(PayloadTooLargePolicy.BodySizeLimit(100)))
    }

    @Test
    fun `GIVEN payload size is below max size WHEN applyPayloadTooLargePolicy with OmitBody is called THEN payload is not modified`() {
        val payload = "short payload"

        assertEquals(payload, payload.applyPayloadTooLargePolicy(PayloadTooLargePolicy.OmitBody(1000)))
    }

    @Test
    fun `GIVEN payload size equals max size WHEN applyPayloadTooLargePolicy with OmitBody is called THEN payload is not modified`() {
        val payload = "a".repeat(10)

        assertEquals(payload, payload.applyPayloadTooLargePolicy(PayloadTooLargePolicy.OmitBody(10)))
    }

    @Test
    fun `GIVEN payload size exceeds max size WHEN applyPayloadTooLargePolicy with OmitBody is called THEN body omitted placeholder is returned`() {
        val payload = "a".repeat(100)

        assertEquals(
            PAYLOAD_BODY_OMITTED_PLACEHOLDER,
            payload.applyPayloadTooLargePolicy(PayloadTooLargePolicy.OmitBody(10))
        )
    }

    @Test
    fun `GIVEN payload is empty WHEN applyPayloadTooLargePolicy with OmitBody is called THEN empty string is returned`() {
        assertEquals("", "".applyPayloadTooLargePolicy(PayloadTooLargePolicy.OmitBody(100)))
    }

    @Test
    fun `GIVEN there is no headers WHEN calculateHeadersSize is called THEN returns 0 as a size`() {
        val headers = HeadersBuilder().build()

        assertEquals(0, NetworkTrafficDataUtils.calculateHeadersSize(headers))
    }

    @Test
    fun `GIVEN there are some headers WHEN calculateHeadersSize is called THEN returns size of it`() {
        val headers = HeadersBuilder().also {
            it.append("Header-Name", "header value")
        }.build()

        assertEquals(23, NetworkTrafficDataUtils.calculateHeadersSize(headers))
    }

    @Test
    fun `GIVEN there is no properties to be redacted and json is empty WHEN redactJsonProperties is called THEN json is not modified`() {
        val json = ""

        assertEquals(json, json.redactJsonProperties(listOf()))
    }

    @Test
    fun `GIVEN there are some properties to be redacted and json is empty WHEN redactJsonProperties is called THEN json is not modified`() {
        val json = ""

        assertEquals(json, json.redactJsonProperties(listOf("name")))
    }

    @Test
    fun `GIVEN there is no properties to be redacted and json is not empty WHEN redactJsonProperties is called THEN json is not modified`() {
        val json =
            """{"name":"Blaž","job":"Android Developer","id":"643","createdAt":"2024-11-22T16:02:18.612Z"}""".trimIndent()

        assertEquals(json, json.redactJsonProperties(listOf()))
    }

    @Test
    fun `GIVEN there are some properties to be redacted and json is not empty WHEN redactJsonProperties is called THEN json is modified`() {
        val json =
            """{"name":"Blaž","job":"Android Developer","id":"643","createdAt":"2024-11-22T16:02:18.612Z"}""".trimIndent()

        assertEquals(
            """{"name":"$REDACTED_DATA","job":"Android Developer","id":"643","createdAt":"2024-11-22T16:02:18.612Z"}""".trimIndent(),
            json.redactJsonProperties(listOf("name"))
        )
    }

    @Test
    fun `GIVEN there is empty property to be redacted and json is not empty WHEN redactJsonProperties is called THEN json is not modified`() {
        val json =
            """{"name":"Blaž","job":"Android Developer","id":"643","createdAt":"2024-11-22T16:02:18.612Z"}""".trimIndent()

        assertEquals(
            json,
            json.redactJsonProperties(listOf(""))
        )
    }

    @Test
    fun `GIVEN there is no headers to be redacted and there is no headers WHEN redactHeaders is called THEN returns the same headers`() {
        val headers = HeadersBuilder().build()

        assertEquals(headers.entries(), headers.entries().redactHeaders(emptyList()))
    }

    @Test
    fun `GIVEN there are some headers to be redacted and there is no headers WHEN redactHeaders is called THEN returns the same headers`() {
        val headers = HeadersBuilder().build()

        assertEquals(headers.entries(), headers.entries().redactHeaders(listOf("Header-Name")))
    }

    @Test
    fun `GIVEN there is no headers to be redacted and there are some headers WHEN redactHeaders is called THEN returns the same headers`() {
        val headers = HeadersBuilder().also {
            it.append("Header-Name", "header value")
        }.build()

        assertEquals(headers.entries(), headers.entries().redactHeaders(listOf()))
    }

    @Test
    fun `GIVEN there are headers to be redacted and there are some headers WHEN redactHeaders is called THEN returns redacted headers`() {
        val headers = HeadersBuilder().also {
            it.append("Header-Name", "header value")
        }.build()

        val expectedHeaders = HeadersBuilder().also {
            it.append("Header-Name", REDACTED_DATA)
        }.build()

        assertEquals(expectedHeaders.entries(), headers.entries().redactHeaders(listOf("Header-Name")))
    }

    @Test
    fun `GIVEN there is no properties to be redacted WHEN redactProperties is called THEN the same json is returned`() {
        val json = """{"data":{"id":1,"email":"george.bluth@reqres.in","first_name":"George","last_name":"Bluth","avatar":"https://reqres.in/img/faces/1-image.jpg"},"support":{"url":"https://contentcaddy.io?utm_source=reqres&utm_medium=json&utm_campaign=referral","text":"Tired of writing endless social media content? Let Content Caddy generate it for you."}}"""

        assertEquals(json, json.redactJsonProperties(listOf()))
    }

    @Test
    fun `GIVEN there is single property to be redacted WHEN redactProperties is called THEN the json with that redacted property is returned`() {
        val json = """{"data":{"id":1,"email":"george.bluth@reqres.in","first_name":"George","last_name":"Bluth","avatar":"https://reqres.in/img/faces/1-image.jpg"},"support":{"url":"https://contentcaddy.io?utm_source=reqres&utm_medium=json&utm_campaign=referral","text":"Tired of writing endless social media content? Let Content Caddy generate it for you."}}"""
        val redactedJson = """{"data":{"id":1,"email":"*** REDACTED ***","first_name":"George","last_name":"Bluth","avatar":"https://reqres.in/img/faces/1-image.jpg"},"support":{"url":"https://contentcaddy.io?utm_source=reqres&utm_medium=json&utm_campaign=referral","text":"Tired of writing endless social media content? Let Content Caddy generate it for you."}}"""

        assertEquals(redactedJson, json.redactJsonProperties(listOf("email")))
    }

    @Test
    fun `GIVEN there is more properties to be redacted WHEN redactProperties is called THEN the json with that multiple redacted properties is returned`() {
        val json = """{"data":{"id":1,"email":"george.bluth@reqres.in","first_name":"George","last_name":"Bluth","avatar":"https://reqres.in/img/faces/1-image.jpg"},"support":{"url":"https://contentcaddy.io?utm_source=reqres&utm_medium=json&utm_campaign=referral","text":"Tired of writing endless social media content? Let Content Caddy generate it for you."}}"""
        val redactedJson = """{"data":{"id":1,"email":"*** REDACTED ***","first_name":"*** REDACTED ***","last_name":"*** REDACTED ***","avatar":"https://reqres.in/img/faces/1-image.jpg"},"support":{"url":"https://contentcaddy.io?utm_source=reqres&utm_medium=json&utm_campaign=referral","text":"Tired of writing endless social media content? Let Content Caddy generate it for you."}}"""

        assertEquals(redactedJson, json.redactJsonProperties(listOf("email", "first_name", "last_name")))
    }

    @Test
    fun `GIVEN there is single object redacted WHEN redactProperties is called THEN the json with that redacted object is returned`() {
        val json = """{"data":{"id":1,"email":"george.bluth@reqres.in","first_name":"George","last_name":"Bluth","avatar":"https://reqres.in/img/faces/1-image.jpg"},"support":{"url":"https://contentcaddy.io?utm_source=reqres&utm_medium=json&utm_campaign=referral","text":"Tired of writing endless social media content? Let Content Caddy generate it for you."}}"""
        val redactedJson = """{"data":{"id":1,"email":"george.bluth@reqres.in","first_name":"George","last_name":"Bluth","avatar":"https://reqres.in/img/faces/1-image.jpg"},"support":"*** REDACTED ***"}"""

        assertEquals(redactedJson, json.redactJsonProperties(listOf("support")))
    }

    @Test
    fun `GIVEN there is multiple object redacted WHEN redactProperties is called THEN the json with that multiple redacted objects is returned`() {
        val json = """{"data":{"id":1,"email":"george.bluth@reqres.in","first_name":"George","last_name":"Bluth","avatar":"https://reqres.in/img/faces/1-image.jpg"},"support":{"url":"https://contentcaddy.io?utm_source=reqres&utm_medium=json&utm_campaign=referral","text":"Tired of writing endless social media content? Let Content Caddy generate it for you."}}"""
        val redactedJson = """{"data":"*** REDACTED ***","support":"*** REDACTED ***"}"""

        assertEquals(redactedJson, json.redactJsonProperties(listOf("support", "data")))
    }

    @Test
    fun `GIVEN there is array redacted WHEN redactProperties is called THEN the json with that redacted array is returned`() {
        val json = """{"items":[{"id":1,"email":"george.bluth@reqres.in","first_name":"George","last_name":"Bluth","avatar":"https://reqres.in/img/faces/1-image.jpg"}],"support":{"url":"https://contentcaddy.ioutm_source=reqres&utm_medium=json&utm_campaign=referral","text":"Tired of writing endless social media content? Let Content Caddy generate it for you."}}"""
        val redactedJson = """{"items":"*** REDACTED ***","support":{"url":"https://contentcaddy.ioutm_source=reqres&utm_medium=json&utm_campaign=referral","text":"Tired of writing endless social media content? Let Content Caddy generate it for you."}}"""

        assertEquals(redactedJson, json.redactJsonProperties(listOf("items")))
    }

    @Test
    fun `GIVEN null headers and null payload WHEN buildCurlCommand is called THEN returns basic curl command with method and url only`() {
        val result = NetworkTrafficDataUtils.buildCurlCommand(
            method = "GET",
            url = "https://example.com",
            headers = null,
            payload = null
        )

        assertEquals("curl -v \\\n\t-X GET \\\n\t\"https://example.com\"", result)
    }

    @Test
    fun `GIVEN empty headers set and null payload WHEN buildCurlCommand is called THEN returns curl command without header flags`() {
        val result = NetworkTrafficDataUtils.buildCurlCommand(
            method = "GET",
            url = "https://example.com",
            headers = emptySet(),
            payload = null
        )

        assertEquals("curl -v \\\n\t-X GET \\\n\t\"https://example.com\"", result)
    }

    @Test
    fun `GIVEN headers and no payload WHEN buildCurlCommand is called THEN returns curl command with header flags`() {
        val headers = mapOf("Content-Type" to listOf("application/json")).entries

        val result = NetworkTrafficDataUtils.buildCurlCommand(
            method = "GET",
            url = "https://example.com",
            headers = headers,
            payload = null
        )

        assertEquals(
            "curl -v \\\n\t-X GET \\\n\t-H \"Content-Type: application/json\" \\\n\t\"https://example.com\"",
            result
        )
    }

    @Test
    fun `GIVEN header value with quotes WHEN buildCurlCommand is called THEN quotes are escaped in header value`() {
        val headers = mapOf("Authorization" to listOf("Bearer tok\"en")).entries

        val result = NetworkTrafficDataUtils.buildCurlCommand(
            method = "GET",
            url = "https://example.com",
            headers = headers,
            payload = null
        )

        assertEquals(
            "curl -v \\\n\t-X GET \\\n\t-H \"Authorization: Bearer tok\\\"en\" \\\n\t\"https://example.com\"",
            result
        )
    }

    @Test
    fun `GIVEN payload and no headers WHEN buildCurlCommand is called THEN returns curl command with body flag`() {
        val result = NetworkTrafficDataUtils.buildCurlCommand(
            method = "POST",
            url = "https://example.com",
            headers = null,
            payload = "body content"
        )

        assertEquals(
            "curl -v \\\n\t-X POST \\\n\t-d \"body content\" \\\n\t\"https://example.com\"",
            result
        )
    }

    @Test
    fun `GIVEN payload with quotes WHEN buildCurlCommand is called THEN quotes are escaped in body`() {
        val result = NetworkTrafficDataUtils.buildCurlCommand(
            method = "POST",
            url = "https://example.com",
            headers = null,
            payload = "say \"hello\""
        )

        assertEquals(
            "curl -v \\\n\t-X POST \\\n\t-d \"say \\\"hello\\\"\" \\\n\t\"https://example.com\"",
            result
        )
    }

    @Test
    fun `GIVEN payload with already escaped quotes WHEN buildCurlCommand is called THEN escaped quotes are double escaped`() {
        val result = NetworkTrafficDataUtils.buildCurlCommand(
            method = "POST",
            url = "https://example.com",
            headers = null,
            payload = "text\\\"word"
        )

        assertEquals(
            "curl -v \\\n\t-X POST \\\n\t-d \"text\\\\\\\"word\" \\\n\t\"https://example.com\"",
            result
        )
    }

    @Test
    fun `GIVEN both headers and payload WHEN buildCurlCommand is called THEN returns curl command with both header and body flags`() {
        val headers = mapOf("Content-Type" to listOf("application/json")).entries

        val result = NetworkTrafficDataUtils.buildCurlCommand(
            method = "POST",
            url = "https://example.com",
            headers = headers,
            payload = "data"
        )

        assertEquals(
            "curl -v \\\n\t-X POST \\\n\t-H \"Content-Type: application/json\" \\\n\t-d \"data\" \\\n\t\"https://example.com\"",
            result
        )
    }
}
