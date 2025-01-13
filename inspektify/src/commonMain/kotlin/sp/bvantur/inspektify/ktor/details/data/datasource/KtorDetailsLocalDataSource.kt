package sp.bvantur.inspektify.ktor.details.data.datasource

import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.client.data.DataStorageHandler
import sp.bvantur.inspektify.ktor.core.data.mappers.toNetworkTrafficDataLocal

internal class KtorDetailsLocalDataSource(private val dataStorageHandler: DataStorageHandler) {
    fun getTransactionDetails(id: Long): NetworkTrafficDataLocal =
        dataStorageHandler.getNetworkTrafficById(id).toNetworkTrafficDataLocal()
}
