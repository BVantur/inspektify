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
}
