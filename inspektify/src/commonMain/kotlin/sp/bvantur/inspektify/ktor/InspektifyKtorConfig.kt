package sp.bvantur.inspektify.ktor

class InspektifyKtorConfig {
    var autoDetectEnabled: Boolean = true
    var shortcutEnabled: Boolean = false

    var logLevel: LogLevel = LogLevel.None
    var dataRetentionPolicy: DataRetentionPolicy = DataRetentionPolicy.DayDuration(14)
    var redactHeaders: List<String> = emptyList()
    var redactBodyProperties: List<String> = emptyList()
}

sealed interface LogLevel {

    data object None : LogLevel
    data object Info : LogLevel
    data object Headers : LogLevel
    data object Body : LogLevel
    data object All : LogLevel

    fun isLoggerEnabled(): Boolean = this == None

    fun canLogInfo(): Boolean = this != None

    fun canLogHeaders(): Boolean = this == Headers || this == All

    fun canLogBody(): Boolean = this == Body || this == All
}

sealed interface DataRetentionPolicy {
    data class DayDuration(val numOfDays: Int) : DataRetentionPolicy
    data class SessionCount(val numOfSessions: Int) : DataRetentionPolicy
}

internal const val INSPEKTIFY_SHORTCUT_ITEM_SHORT_NAME = "Inspektify"
internal const val INSPEKTIFY_SHORTCUT_ITEM_LONG_NAME = "Open $INSPEKTIFY_SHORTCUT_ITEM_SHORT_NAME window"
