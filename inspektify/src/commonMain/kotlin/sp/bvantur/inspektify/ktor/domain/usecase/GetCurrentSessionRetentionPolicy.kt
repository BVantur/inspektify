package sp.bvantur.inspektify.ktor.domain.usecase

import sp.bvantur.inspektify.ktor.DataRetentionPolicy
import sp.bvantur.inspektify.ktor.data.NetworkTrafficRepository

internal interface GetCurrentSessionRetentionPolicy {
    operator fun invoke(): String
}

internal class GetCurrentSessionRetentionPolicyImpl(private val repository: NetworkTrafficRepository) :
    GetCurrentSessionRetentionPolicy {

    override fun invoke(): String {
        val retentionPolicy = repository.getDataRetentionPolicy() ?: return ""

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
