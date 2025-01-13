package sp.bvantur.inspektify.ktor.client.data

import kotlinx.coroutines.flow.Flow
import sp.bvantur.inspektify.ktor.client.data.model.NetworkTrafficLocalData
import sp.bvantur.inspektify.ktor.client.domain.model.NetworkTraffic

internal interface DataStorageHandler {
    suspend fun getAllNetworkTraffic(): Flow<List<NetworkTrafficLocalData>>

    fun getNetworkTrafficById(id: Long): NetworkTrafficLocalData

    fun removeAllNetworkTrafficData()

    fun getDistinctSessionIds(): List<Long>

    suspend fun saveNetworkTrafficData(networkTraffic: NetworkTraffic)

    fun removeNetworkTrafficOlderThan(cutoffTimestamp: Long?)

    fun removeRowsBySessionId(sessionsToRemove: List<Long>)
}
