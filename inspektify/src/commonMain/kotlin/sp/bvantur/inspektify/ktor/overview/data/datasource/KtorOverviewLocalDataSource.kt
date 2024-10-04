package sp.bvantur.inspektify.ktor.overview.data.datasource

import kotlinx.coroutines.withContext
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.core.domain.DispatcherProvider

internal class KtorOverviewLocalDataSource(
    private val database: InspektifyDB,
    private val dispatcherProvider: DispatcherProvider
) {
    suspend fun getTransactionOverviewDetails(id: Long): NetworkTrafficDataLocal = withContext(dispatcherProvider.io) {
        database.inspektifyDBQueries.getNetworkTrafficById(id)
    }.executeAsOne()
}
