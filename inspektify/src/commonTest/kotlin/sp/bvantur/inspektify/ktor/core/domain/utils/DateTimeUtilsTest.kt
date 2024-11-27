package sp.bvantur.inspektify.ktor.core.domain.utils

import kotlinx.datetime.Clock
import kotlinx.datetime.Instant
import kotlinx.datetime.TimeZone
import kotlinx.datetime.toLocalDateTime
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertNull
import kotlin.time.Duration.Companion.days

class DateTimeUtilsTest {
    @Test
    fun `GIVEN time is null WHEN toTextWithTimeUnit is called THEN returns text for missing data`() {
        assertEquals(KtorPresentationConstants.MISSING_DATA, DateTimeUtils.toTextWithTimeUnit(null))
    }

    @Test
    fun `GIVEN time is 0 WHEN toTextWithTimeUnit is called THEN returns milliseconds`() {
        assertEquals("0 ms", DateTimeUtils.toTextWithTimeUnit(0))
    }

    @Test
    fun `GIVEN time is 999 WHEN toTextWithTimeUnit is called THEN returns milliseconds`() {
        assertEquals("999 ms", DateTimeUtils.toTextWithTimeUnit(999))
    }

    @Test
    fun `GIVEN time is 1000 WHEN toTextWithTimeUnit is called THEN returns seconds`() {
        assertEquals("1.0 s", DateTimeUtils.toTextWithTimeUnit(1000))
    }

    @Test
    fun `GIVEN time is 59999 WHEN toTextWithTimeUnit is called THEN returns seconds`() {
        assertEquals("59.9 s", DateTimeUtils.toTextWithTimeUnit(59999))
    }

    @Test
    fun `GIVEN time is 60000 WHEN toTextWithTimeUnit is called THEN returns minutes`() {
        assertEquals("1.0 min", DateTimeUtils.toTextWithTimeUnit(60000))
    }

    @Test
    fun `GIVEN time is 3599999 WHEN toTextWithTimeUnit is called THEN returns minutes`() {
        assertEquals("59.59 min", DateTimeUtils.toTextWithTimeUnit(3599999))
    }

    @Test
    fun `GIVEN time is 3600000 WHEN toTextWithTimeUnit is called THEN returns minutes`() {
        assertEquals("1.0 h", DateTimeUtils.toTextWithTimeUnit(3600000))
    }

    @Test
    fun `GIVEN some date WHEN toTimeString is called THEN returns correct time with 0 prefix before each unit`() {
        val date = Instant.fromEpochMilliseconds(1732233661119).toLocalDateTime(TimeZone.UTC)

        assertEquals("00:01:01", DateTimeUtils.toTimeString(date))
    }

    @Test
    fun `GIVEN some date WHEN toTimeString is called THEN returns correct time`() {
        val date = Instant.fromEpochMilliseconds(1732273139999).toLocalDateTime(TimeZone.UTC)

        assertEquals("10:58:59", DateTimeUtils.toTimeString(date))
    }

    @Test
    fun `GIVEN some timestamp WHEN formatDate is called THEN returns today text`() {
        val date = Clock.System.now().toLocalDateTime(TimeZone.UTC)

        assertEquals("Today", DateTimeUtils.formatDate(date.date))
    }

    @Test
    fun `GIVEN some timestamp WHEN formatDate is called THEN returns yesterday`() {
        val date = Clock.System.now().minus(1.days).toLocalDateTime(TimeZone.UTC)

        assertEquals("Yesterday", DateTimeUtils.formatDate(date.date))
    }

    @Test
    fun `GIVEN some timestamp WHEN formatDate is called THEN returns date`() {
        val date = Instant.fromEpochMilliseconds(1669114739000).toLocalDateTime(TimeZone.UTC)

        assertEquals("22. 11. 2022", DateTimeUtils.formatDate(date.date))
    }

    @Test
    fun `GIVEN timestamp is null WHEN formatTimestamp is called THEN returns null value`() {
        assertNull(DateTimeUtils.formatTimestamp(null, timeZone = TimeZone.UTC))
    }

    @Test
    fun `GIVEN timestamp is some value WHEN formatTimestamp is called THEN returns correct date`() {
        assertEquals(
            "Tue Nov 22 10:58:59 GMT+0:00 2022",
            DateTimeUtils.formatTimestamp(1669114739000, timeZone = TimeZone.UTC)
        )
    }
}
