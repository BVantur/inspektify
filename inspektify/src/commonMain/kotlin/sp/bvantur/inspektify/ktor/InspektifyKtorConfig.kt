package sp.bvantur.inspektify.ktor

class InspektifyKtorConfig {
    var presentationConfig: PresentationConfig = PresentationConfig()

    @Deprecated("presentationType no longer has any effect. Please use presentationConfig instead.")
    var presentationType: PresentationType = PresentationType.AutoDetect
    var logLevel: LogLevel = LogLevel.None
    var dataRetentionPolicy: DataRetentionPolicy = DataRetentionPolicy.DayDuration(14)
}

data class PresentationConfig(val autoDetect: Boolean = true, val shortcut: Boolean = false) {
    internal fun isCustom() = !autoDetect
    internal fun isShortcutEnabled() = shortcut
}

@Deprecated("PresentationType is deprecated. Please use PresentationConfig instead.")
sealed interface PresentationType {
    data object AutoDetect : PresentationType
    data object Custom : PresentationType

    fun isCustom() = this == Custom
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
