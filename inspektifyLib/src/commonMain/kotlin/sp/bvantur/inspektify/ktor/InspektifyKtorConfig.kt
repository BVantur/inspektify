package sp.bvantur.inspektify.ktor

class InspektifyKtorConfig {
    var usageType: UsageType = UsageType.AutoShake
}

sealed interface UsageType {
    data object AutoShake : UsageType
    data object Custom : UsageType

    fun isCustom() = this == Custom
}
