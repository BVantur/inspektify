package sp.bvantur.inspektify.ktor.core.domain.utils

import kotlin.test.Test
import kotlin.test.assertEquals

class ByteSizeUtilsTest {

    @Test
    fun `GIVEN size is null WHEN toTextWithByteUnit is called THEN returns text for missing data`() {
        assertEquals(KtorPresentationConstants.MISSING_DATA, ByteSizeUtils.toTextWithByteUnit(null))
    }

    @Test
    fun `GIVEN size is 0 WHEN toTextWithByteUnit is called THEN returns value in bytes`() {
        assertEquals("0 B", ByteSizeUtils.toTextWithByteUnit(0))
    }

    @Test
    fun `GIVEN size is 1023 WHEN toTextWithByteUnit is called THEN returns value in bytes`() {
        assertEquals("1023 B", ByteSizeUtils.toTextWithByteUnit(1023))
    }

    @Test
    fun `GIVEN size is 1024 WHEN toTextWithByteUnit is called THEN returns value in kilobytes`() {
        assertEquals("1 kB", ByteSizeUtils.toTextWithByteUnit(1024))
    }

    @Test
    fun `GIVEN size is 1048575 WHEN toTextWithByteUnit is called THEN returns value in kilobytes`() {
        assertEquals("1024 kB", ByteSizeUtils.toTextWithByteUnit(1048575))
    }

    @Test
    fun `GIVEN size is 1048576 WHEN toTextWithByteUnit is called THEN returns value in megabytes`() {
        assertEquals("1 MB", ByteSizeUtils.toTextWithByteUnit(1048576))
    }

    @Test
    fun `GIVEN size is 1073741823 WHEN toTextWithByteUnit is called THEN returns value in megabytes`() {
        assertEquals("1024 MB", ByteSizeUtils.toTextWithByteUnit(1073741823))
    }

    @Test
    fun `GIVEN size is 1073741824 WHEN toTextWithByteUnit is called THEN returns value in gigbytes`() {
        assertEquals("1 GB", ByteSizeUtils.toTextWithByteUnit(1073741824))
    }
}
