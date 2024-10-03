package sp.bvantur.inspektify.ktor.list.domain.usecase

import sp.bvantur.inspektify.ktor.DataRetentionPolicy
import sp.bvantur.inspektify.ktor.core.data.KtorPluginCachedConfig
import sp.bvantur.inspektify.ktor.core.di.AppComponents

internal interface GetCurrentSessionRetentionPolicy {
    operator fun invoke(): String
}

internal class GetCurrentSessionRetentionPolicyImpl(
    private val ktorPluginCachedConfig: KtorPluginCachedConfig = AppComponents.getKtorPluginCachedConfig()
) : GetCurrentSessionRetentionPolicy {

    override fun invoke(): String {
        val retentionPolicy = ktorPluginCachedConfig.retentionPolicy ?: return ""

        return when (retentionPolicy) {
            is DataRetentionPolicy.DayDuration -> {
                val daysWord = if (retentionPolicy.numOfDays == 1) "day" else "days"
                "Retention policy set to max ${retentionPolicy.numOfDays} $daysWord"
            }
            is DataRetentionPolicy.SessionCount -> {
                val sessionWord = if (retentionPolicy.numOfSessions == 1) "session" else "sessions"
                "Retention policy set to max ${retentionPolicy.numOfSessions} $sessionWord"
            }
        }
    }
}
