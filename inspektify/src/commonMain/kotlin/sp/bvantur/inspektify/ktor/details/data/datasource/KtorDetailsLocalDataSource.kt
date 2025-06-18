package sp.bvantur.inspektify.ktor.details.data.datasource

import kotlinx.coroutines.withContext
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.core.di.AppComponents.database
import sp.bvantur.inspektify.ktor.core.di.AppComponents.dispatcherProvider

internal class KtorDetailsLocalDataSource {
    suspend fun getTransactionDetails(id: Long): NetworkTrafficDataLocal = withContext(dispatcherProvider.io) {
        database.inspektifyDBQueries.getNetworkTrafficById(id)
    }.executeAsOne()
}
