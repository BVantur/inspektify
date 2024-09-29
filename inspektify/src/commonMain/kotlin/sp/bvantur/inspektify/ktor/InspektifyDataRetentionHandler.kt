package sp.bvantur.inspektify.ktor

import io.ktor.util.date.getTimeMillis
import sp.bvantur.inspektify.ktor.data.NetworkTrafficRepository

internal interface InspektifyDataRetentionHandler {
    suspend fun configureDataRetentionPolicy(policy: DataRetentionPolicy)
}

internal class InspektifyDataRetentionHandlerImpl(private val networkTrafficRepository: NetworkTrafficRepository) :
    InspektifyDataRetentionHandler {

    override suspend fun configureDataRetentionPolicy(policy: DataRetentionPolicy) {
        val dataRetentionPolicy = when (policy) {
            is DataRetentionPolicy.DayDuration -> handleRetentionPolicyByDays(policy.numOfDays)
            is DataRetentionPolicy.SessionCount -> handleRetentionPolicyBySessions(policy.numOfSessions)
        }

        networkTrafficRepository.storeDataRetentionPolicy(dataRetentionPolicy)
    }

    private suspend fun handleRetentionPolicyByDays(numOfDays: Int): DataRetentionPolicy {
        val days = if (numOfDays <= 0) {
            1
        } else if (numOfDays > 14) {
            14
        } else {
            numOfDays
        }
        val daysInMillis = days * 24 * 60 * 60 * 1000L
        val currentTime = getTimeMillis()
        val cutoffTimestamp = currentTime - daysInMillis

        networkTrafficRepository.applyRetentionPolicyByDays(cutoffTimestamp)

        return DataRetentionPolicy.DayDuration(days)
    }

    private suspend fun handleRetentionPolicyBySessions(numOfSessions: Int): DataRetentionPolicy {
        val sessionsCount = when {
            numOfSessions <= 0 -> 1
            numOfSessions > 20 -> 20
            else -> numOfSessions
        }

        val sessionIds = networkTrafficRepository.getAllSessionsIds()
        if (sessionIds.size < sessionsCount) return DataRetentionPolicy.SessionCount(sessionsCount)

        val numberOfSessionsToRemove = sessionIds.size - sessionsCount + 1
        val sessionsToRemove = sessionIds.takeLast(numberOfSessionsToRemove)
        networkTrafficRepository.applyRetentionPolicyBySessions(sessionsToRemove)
        return DataRetentionPolicy.SessionCount(sessionsCount)
    }
}
