package sp.bvantur.inspektify.ktor

class InspektifyKtorConfig {
    var presentationType: PresentationType = PresentationType.AutoShake
    var logLevel: LogLevel = LogLevel.None
    var dataRetentionPolicy: DataRetentionPolicy = DataRetentionPolicy.DayDuration(14)
}

sealed interface PresentationType {
    data object AutoShake : PresentationType
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
