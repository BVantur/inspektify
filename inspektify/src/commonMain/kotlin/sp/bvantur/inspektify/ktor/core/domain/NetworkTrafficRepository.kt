package sp.bvantur.inspektify.ktor.core.domain

import sp.bvantur.inspektify.ktor.client.domain.model.NetworkTraffic

internal interface NetworkTrafficRepository {
    suspend fun saveNetworkTrafficData(networkTraffic: NetworkTraffic)

    suspend fun getNetworkTrafficData(id: Long): NetworkTraffic?

    suspend fun applyRetentionPolicyByDays(cutoffTimestamp: Long)

    suspend fun getAllSessionsIds(): List<Long>

    fun applyRetentionPolicyBySessions(sessionsToRemove: List<Long>)
}
