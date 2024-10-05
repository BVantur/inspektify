package sp.bvantur.inspektify.ktor.core.data

import sp.bvantur.inspektify.ktor.client.data.datasource.NetworkTrafficLocalDataSource
import sp.bvantur.inspektify.ktor.client.data.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.client.data.model.NetworkTrafficId
import sp.bvantur.inspektify.ktor.core.data.utils.toNetworkTraffic

internal class NetworkTrafficRepository(private val localDataSource: NetworkTrafficLocalDataSource) {

    suspend fun saveNetworkTrafficData(networkTraffic: NetworkTraffic) {
        localDataSource.saveNetworkTrafficData(networkTraffic)
    }

    suspend fun getNetworkTrafficData(id: NetworkTrafficId): NetworkTraffic = localDataSource.getNetworkTrafficData(
        id
    ).toNetworkTraffic()

    suspend fun applyRetentionPolicyByDays(cutoffTimestamp: Long) {
        localDataSource.removeNetworkTrafficOlderThan(cutoffTimestamp)
    }

    suspend fun getAllSessionsIds(): List<Long> = localDataSource.getAllSessionsIds()

    fun applyRetentionPolicyBySessions(sessionsToRemove: List<Long>) {
        localDataSource.removeNetworkTrafficWithNextSessionIds(sessionsToRemove)
    }
}
