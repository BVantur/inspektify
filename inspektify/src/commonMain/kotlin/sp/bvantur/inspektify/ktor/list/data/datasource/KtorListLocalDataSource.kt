package sp.bvantur.inspektify.ktor.list.data.datasource

import app.cash.sqldelight.coroutines.asFlow
import app.cash.sqldelight.coroutines.mapToList
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flowOn
import kotlinx.coroutines.withContext
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.core.data.KtorPluginCachedConfig
import sp.bvantur.inspektify.ktor.utils.DispatcherProvider

internal class KtorListLocalDataSource(
    private val database: InspektifyDB,
    private val dispatcherProvider: DispatcherProvider,
    private val ktorPluginCachedConfig: KtorPluginCachedConfig
) {

    fun getAllNetworkTrafficData(): Flow<List<NetworkTrafficDataLocal>> = database.inspektifyDBQueries
        .getAllNetworkTraffic()
        .asFlow()
        .mapToList(dispatcherProvider.default).flowOn(dispatcherProvider.io)

    suspend fun removeAllNetworkTrafficData() {
        withContext(dispatcherProvider.io) {
            database.inspektifyDBQueries.removeAllNetworkTrafficData()
        }
    }

    fun getCurrentSessionTimestamp(): Long = ktorPluginCachedConfig.currentSessionTimeStamp
}
