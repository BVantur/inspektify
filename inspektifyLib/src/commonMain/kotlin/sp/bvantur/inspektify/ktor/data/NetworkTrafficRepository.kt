package sp.bvantur.inspektify.ktor.data

import kotlinx.coroutines.flow.Flow
import sp.bvantur.inspektify.NetworkTrafficData
import sp.bvantur.inspektify.ktor.data.local.NetworkTrafficLocalDataSource
import sp.bvantur.inspektify.ktor.data.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.utils.extensions.toNetworkTraffic

internal class NetworkTrafficRepository(
    private val localDataSource: NetworkTrafficLocalDataSource
) {
    val networkTrafficData: Flow<List<NetworkTrafficData>> =
        localDataSource.getAllNetworkTrafficData()

    fun saveNetworkTrafficData(networkTraffic: NetworkTraffic) {
        localDataSource.saveNetworkTrafficData(networkTraffic)
    }

    fun getNetworkTrafficData(id: Long): NetworkTraffic = localDataSource.getNetworkTrafficData(id).toNetworkTraffic()
}
