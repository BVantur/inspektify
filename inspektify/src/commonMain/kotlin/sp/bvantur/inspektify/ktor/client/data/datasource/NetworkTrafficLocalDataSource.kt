package sp.bvantur.inspektify.ktor.client.data.datasource

import kotlinx.coroutines.withContext
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.client.data.DataStorageHandler
import sp.bvantur.inspektify.ktor.client.data.model.NetworkTrafficLocalData
import sp.bvantur.inspektify.ktor.client.domain.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.core.data.mappers.toNetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.core.domain.DispatcherProvider

internal class NetworkTrafficLocalDataSource(
    private val dataStorageHandler: DataStorageHandler,
    private val dispatcherProvider: DispatcherProvider
) {
    suspend fun saveNetworkTrafficData(networkTraffic: NetworkTraffic) {
        dataStorageHandler.saveNetworkTrafficData(networkTraffic)
    }

    suspend fun getNetworkTrafficData(id: Long): NetworkTrafficDataLocal =
        withContext(dispatcherProvider.io) { // TODO remove withContext
            dataStorageHandler.getNetworkTrafficById(id).toNetworkTrafficDataLocal()
        }

    suspend fun removeNetworkTrafficOlderThan(cutoffTimestamp: Long) {
        withContext(dispatcherProvider.io) { // TODO remove withContext
            dataStorageHandler.removeNetworkTrafficOlderThan(cutoffTimestamp)
        }
    }

    suspend fun getAllSessionsIds(): List<Long> = withContext(dispatcherProvider.io) { // TODO remove withContext
        dataStorageHandler.getDistinctSessionIds()
    }

    fun removeNetworkTrafficWithNextSessionIds(sessionsToRemove: List<Long>) {
        dataStorageHandler.removeRowsBySessionId(sessionsToRemove)
    }
}
