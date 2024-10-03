package sp.bvantur.inspektify.ktor.data

import sp.bvantur.inspektify.ktor.data.local.NetworkTrafficLocalDataSource
import sp.bvantur.inspektify.ktor.data.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.data.model.NetworkTrafficId
import sp.bvantur.inspektify.ktor.data.utils.extensions.toNetworkTraffic

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
