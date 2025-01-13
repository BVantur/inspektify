package sp.bvantur.inspektify.ktor.list.data.datasource

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.map
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.DataRetentionPolicy
import sp.bvantur.inspektify.ktor.client.data.DataStorageHandler
import sp.bvantur.inspektify.ktor.core.data.KtorPluginCachedConfig
import sp.bvantur.inspektify.ktor.core.data.mappers.toNetworkTrafficDataLocal

internal class KtorListLocalDataSource(
    private val dataStorageHandler: DataStorageHandler,
    private val ktorPluginCachedConfig: KtorPluginCachedConfig
) {

    suspend fun getAllNetworkTrafficData(): Flow<List<NetworkTrafficDataLocal>> {
        return dataStorageHandler.getAllNetworkTraffic().map { items ->
            items.map {
                it.toNetworkTrafficDataLocal()
            }
        }
    }

    suspend fun removeAllNetworkTrafficData() {
        dataStorageHandler.removeAllNetworkTrafficData()
    }

    fun getCurrentSessionTimestamp(): Long = ktorPluginCachedConfig.currentSessionTimeStamp

    fun getRetentionPolicy(): DataRetentionPolicy? = ktorPluginCachedConfig.retentionPolicy
}
