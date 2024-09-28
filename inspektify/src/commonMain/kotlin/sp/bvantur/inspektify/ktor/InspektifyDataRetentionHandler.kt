package sp.bvantur.inspektify.ktor

import io.ktor.util.date.getTimeMillis
import sp.bvantur.inspektify.ktor.data.NetworkTrafficRepository

internal interface InspektifyDataRetentionHandler {
    suspend fun configureDataRetentionPolicy(policy: DataRetentionPolicy)
}

internal class InspektifyDataRetentionHandlerImpl(private val networkTrafficRepository: NetworkTrafficRepository) :
    InspektifyDataRetentionHandler {
    override suspend fun configureDataRetentionPolicy(policy: DataRetentionPolicy) {
        when (policy) {
            is DataRetentionPolicy.DayDuration -> handleRetentionPolicyByDays(policy.numOfDays)
        }
    }

    private suspend fun handleRetentionPolicyByDays(numOfDays: Int) {
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
    }
}
