package sp.bvantur.inspektify.ktor

public class InspektifyKtorConfig {
    public var autoDetectEnabled: Boolean = true
    public var shortcutEnabled: Boolean = false
    public var logLevel: LogLevel = LogLevel.None
    public var dataRetentionPolicy: DataRetentionPolicy = DataRetentionPolicy.DayDuration(14)
    public var redactHeaders: List<String> = emptyList()
    public var redactBodyProperties: List<String> = emptyList()
    public var ignoreEndpoints: List<IgnorePathData> = emptyList()
}

public sealed interface LogLevel {

    public data object None : LogLevel
    public data object Info : LogLevel
    public data object Headers : LogLevel
    public data object Body : LogLevel
    public data object All : LogLevel

    public fun isLoggerEnabled(): Boolean = this == None

    public fun canLogInfo(): Boolean = this != None

    public fun canLogHeaders(): Boolean = this == Headers || this == All

    public fun canLogBody(): Boolean = this == Body || this == All
}

public sealed interface DataRetentionPolicy {
    public data class DayDuration(val numOfDays: Int) : DataRetentionPolicy
    public data class SessionCount(val numOfSessions: Int) : DataRetentionPolicy
}

public data class IgnorePathData(
    val method: MethodType,
    val endpoint: String,
    val endpointMatchingStrategy: EndpointMatchingStrategy = EndpointMatchingStrategy.EXACT
)

public enum class MethodType(internal val value: String) {
    GET("GET"),
    POST("POST"),
    PUT("PUT"),
    DELETE("DELETE"),
    PATCH("PATCH"),
    HEAD("HEAD"),
    OPTIONS("OPTIONS")
}

public enum class EndpointMatchingStrategy {
    EXACT,
    CONTAINS
}

internal const val INSPEKTIFY_SHORTCUT_ITEM_SHORT_NAME = "Inspektify"
internal const val INSPEKTIFY_SHORTCUT_ITEM_LONG_NAME = "Open $INSPEKTIFY_SHORTCUT_ITEM_SHORT_NAME window"
