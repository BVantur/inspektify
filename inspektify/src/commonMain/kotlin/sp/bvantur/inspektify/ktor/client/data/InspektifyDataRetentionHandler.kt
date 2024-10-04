package sp.bvantur.inspektify.ktor.client.data

import io.ktor.util.date.getTimeMillis
import sp.bvantur.inspektify.ktor.DataRetentionPolicy
import sp.bvantur.inspektify.ktor.core.data.KtorPluginCachedConfig
import sp.bvantur.inspektify.ktor.core.data.NetworkTrafficRepository

internal class InspektifyDataRetentionHandler(
    private val networkTrafficRepository: NetworkTrafficRepository,
    private val ktorPluginCachedConfig: KtorPluginCachedConfig
) {

    suspend fun configureDataRetentionPolicy(policy: DataRetentionPolicy) {
        val dataRetentionPolicy = when (policy) {
            is DataRetentionPolicy.DayDuration -> handleRetentionPolicyByDays(policy.numOfDays)
            is DataRetentionPolicy.SessionCount -> handleRetentionPolicyBySessions(policy.numOfSessions)
        }
        ktorPluginCachedConfig.retentionPolicy = dataRetentionPolicy
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
