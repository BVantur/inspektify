package sp.bvantur.inspektify.ktor.core.domain.utils

import androidx.compose.ui.text.capitalize
import androidx.compose.ui.text.intl.Locale
import kotlinx.datetime.Clock
import kotlinx.datetime.DateTimeUnit
import kotlinx.datetime.Instant
import kotlinx.datetime.LocalDate
import kotlinx.datetime.LocalDateTime
import kotlinx.datetime.TimeZone
import kotlinx.datetime.minus
import kotlinx.datetime.offsetAt
import kotlinx.datetime.toLocalDateTime
import kotlinx.datetime.todayIn

internal object DateTimeUtils {

    fun toTextWithTimeUnit(time: Long?): String {
        time ?: return KtorPresentationConstants.MISSING_DATA

        val millisecondsThreshold = 1_000
        val secondsThreshold = 60_000
        val minutesThreshold = 3_600_000
        val millisecondsConst = 100

        return when {
            time < millisecondsThreshold -> "$time ms"
            time < secondsThreshold ->
                "${time / millisecondsThreshold}.${time % millisecondsThreshold / millisecondsConst} s"

            time < minutesThreshold ->
                "${time / secondsThreshold}.${time % secondsThreshold / millisecondsThreshold} min"

            else ->
                "${time / minutesThreshold}.${time % minutesThreshold / secondsThreshold} h"
        }
    }

    fun toTimeString(localDateTime: LocalDateTime): String {
        val timeThreshold = 10
        val hourString = if (localDateTime.hour < timeThreshold) {
            "0${localDateTime.hour}"
        } else {
            "${localDateTime.hour}"
        }
        val minuteString = if (localDateTime.minute < timeThreshold) {
            "0${localDateTime.minute}"
        } else {
            "${localDateTime.minute}"
        }
        val secondString = if (localDateTime.second < timeThreshold) {
            "0${localDateTime.second}"
        } else {
            "${localDateTime.second}"
        }

        return "$hourString:$minuteString:$secondString"
    }

    fun formatDate(localDate: LocalDate): String {
        if (isToday(localDate)) return "Today"
        if (isYesterday(localDate)) return "Yesterday"

        val day = localDate.dayOfMonth.toString().padStart(2, '0')
        val month = localDate.monthNumber.toString().padStart(2, '0')
        val year = localDate.year.toString()
        return "$day. $month. $year"
    }

    fun formatTimestamp(timestamp: Long?): String? {
        timestamp ?: return null
        val instant = Instant.fromEpochMilliseconds(timestamp)
        val timeZone = TimeZone.currentSystemDefault()
        val dateTime = instant.toLocalDateTime(timeZone)

        val dayOfWeek =
            dateTime.dayOfWeek.name.substring(0, 3).lowercase().capitalize(Locale.current)
        val month = dateTime.month.name.substring(0, 3).lowercase().capitalize(Locale.current)
        val dayOfMonth = dateTime.dayOfMonth
        val hour = dateTime.hour.toString().padStart(2, '0')
        val minute = dateTime.minute.toString().padStart(2, '0')
        val second = dateTime.second.toString().padStart(2, '0')
        val year = dateTime.year
        val offset = timeZone.offsetAt(instant).totalSeconds / 3600

        val formattedOffset = if (offset >= 0) "+$offset:00" else "-$offset:00"

        return "$dayOfWeek $month $dayOfMonth $hour:$minute:$second GMT$formattedOffset $year"
    }

    private fun isToday(date: LocalDate): Boolean {
        val today = Clock.System.todayIn(TimeZone.currentSystemDefault())
        return date == today
    }

    private fun isYesterday(date: LocalDate): Boolean {
        val today = Clock.System.todayIn(TimeZone.currentSystemDefault())
        val yesterday = today.minus(1, DateTimeUnit.DAY)
        return date == yesterday
    }
}
