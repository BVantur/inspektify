@file:Suppress("ktlint:standard:max-line-length")

package sp.bvantur.inspektify.ktor.core.data.utils

import io.ktor.http.HeadersBuilder
import sp.bvantur.inspektify.ktor.core.data.utils.NetworkTrafficDataUtils.redactHeaders
import sp.bvantur.inspektify.ktor.core.data.utils.NetworkTrafficDataUtils.redactJsonProperties
import sp.bvantur.inspektify.ktor.core.domain.utils.KtorPresentationConstants.REDACTED_DATA
import kotlin.test.Test
import kotlin.test.assertEquals

class NetworkTrafficDataUtilsTest {

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
}
