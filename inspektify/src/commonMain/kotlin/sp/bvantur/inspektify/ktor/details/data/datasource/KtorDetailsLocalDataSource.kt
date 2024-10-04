package sp.bvantur.inspektify.ktor.details.data.datasource

import kotlinx.coroutines.withContext
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.core.domain.DispatcherProvider

internal class KtorDetailsLocalDataSource(
    private val database: InspektifyDB,
    private val dispatcherProvider: DispatcherProvider
) {
    suspend fun getTransactionDetails(id: Long): NetworkTrafficDataLocal = withContext(dispatcherProvider.io) {
        database.inspektifyDBQueries.getNetworkTrafficById(id)
    }.executeAsOne()
}
