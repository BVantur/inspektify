package sp.bvantur.inspektify.ktor.list.domain.usecase

import sp.bvantur.inspektify.ktor.DataRetentionPolicy
import sp.bvantur.inspektify.ktor.list.domain.KtorListRepository

internal interface GetCurrentSessionRetentionPolicy {
    operator fun invoke(): String
}

internal class GetCurrentSessionRetentionPolicyImpl(private val repository: KtorListRepository) :
    GetCurrentSessionRetentionPolicy {

    override fun invoke(): String {
        val retentionPolicy = repository.getRetentionPolicy() ?: return ""

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
