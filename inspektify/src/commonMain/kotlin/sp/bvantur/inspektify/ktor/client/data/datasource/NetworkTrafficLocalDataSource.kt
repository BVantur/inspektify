package sp.bvantur.inspektify.ktor.client.data.datasource

import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.client.data.DataStorageHandler
import sp.bvantur.inspektify.ktor.client.domain.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.core.data.mappers.toNetworkTrafficDataLocal

internal class NetworkTrafficLocalDataSource(private val dataStorageHandler: DataStorageHandler) {
    suspend fun saveNetworkTrafficData(networkTraffic: NetworkTraffic) {
        dataStorageHandler.saveNetworkTrafficData(networkTraffic)
    }

    fun getNetworkTrafficData(id: Long): NetworkTrafficDataLocal =
        dataStorageHandler.getNetworkTrafficById(id).toNetworkTrafficDataLocal()

    fun removeNetworkTrafficOlderThan(cutoffTimestamp: Long) {
        dataStorageHandler.removeNetworkTrafficOlderThan(cutoffTimestamp)
    }

    fun getAllSessionsIds(): List<Long> = dataStorageHandler.getDistinctSessionIds()

    fun removeNetworkTrafficWithNextSessionIds(sessionsToRemove: List<Long>) {
        dataStorageHandler.removeRowsBySessionId(sessionsToRemove)
    }
}
