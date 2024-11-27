package sp.bvantur.inspektify.ktor.core.data.utils.extensions

import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertNull

class StringExtensionsTest {

    @Test
    fun `GIVEN string is null WHEN nullIfEmpty is called THEN returns null`() {
        val stringContent = null

        assertNull(stringContent.nullIfEmpty())
    }

    @Test
    fun `GIVEN string is empty WHEN nullIfEmpty is called THEN returns null`() {
        val stringContent = ""

        assertNull(stringContent.nullIfEmpty())
    }

    @Test
    fun `GIVEN string has content WHEN nullIfEmpty is called THEN returns content`() {
        val stringContent = "content"

        assertEquals("content", stringContent.nullIfEmpty())
    }

    @Test
    fun `GIVEN string is null WHEN nullToEmpty is called THEN returns empty string`() {
        val stringContent = null

        assertEquals("", stringContent.nullToEmpty())
    }

    @Test
    fun `GIVEN string is empty WHEN nullToEmpty is called THEN returns empty string`() {
        val stringContent = ""

        assertEquals("", stringContent.nullToEmpty())
    }

    @Test
    fun `GIVEN string has content WHEN nullToEmpty is called THEN returns content`() {
        val stringContent = "content"

        assertEquals("content", stringContent.nullToEmpty())
    }
}
