package sp.bvantur.inspektify.ktor.core.data

import sp.bvantur.inspektify.ktor.client.data.datasource.NetworkTrafficLocalDataSource
import sp.bvantur.inspektify.ktor.client.domain.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.core.data.utils.extensions.toNetworkTraffic
import sp.bvantur.inspektify.ktor.core.domain.NetworkTrafficRepository

internal class NetworkTrafficRepositoryImpl(private val localDataSource: NetworkTrafficLocalDataSource) :
    NetworkTrafficRepository {

    override suspend fun saveNetworkTrafficData(networkTraffic: NetworkTraffic) {
        localDataSource.saveNetworkTrafficData(networkTraffic)
    }

    override suspend fun getNetworkTrafficData(id: Long): NetworkTraffic = localDataSource.getNetworkTrafficData(
        id
    ).toNetworkTraffic()

    override suspend fun applyRetentionPolicyByDays(cutoffTimestamp: Long) {
        localDataSource.removeNetworkTrafficOlderThan(cutoffTimestamp)
    }

    override suspend fun getAllSessionsIds(): List<Long> = localDataSource.getAllSessionsIds()

    override fun applyRetentionPolicyBySessions(sessionsToRemove: List<Long>) {
        localDataSource.removeNetworkTrafficWithNextSessionIds(sessionsToRemove)
    }
}
