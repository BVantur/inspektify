package sp.bvantur.inspektify.ktor.core.domain

import sp.bvantur.inspektify.ktor.client.domain.model.NetworkTraffic

internal interface NetworkTrafficRepository {
    suspend fun saveNetworkTrafficData(networkTraffic: NetworkTraffic)

    fun getNetworkTrafficData(id: Long): NetworkTraffic?

    fun applyRetentionPolicyByDays(cutoffTimestamp: Long)

    fun getAllSessionsIds(): List<Long>

    fun applyRetentionPolicyBySessions(sessionsToRemove: List<Long>)
}
