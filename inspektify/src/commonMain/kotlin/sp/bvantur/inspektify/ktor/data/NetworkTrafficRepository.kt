package sp.bvantur.inspektify.ktor.data

import io.ktor.util.date.getTimeMillis
import kotlinx.coroutines.flow.Flow
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.data.local.NetworkTrafficLocalDataSource
import sp.bvantur.inspektify.ktor.data.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.data.model.NetworkTrafficId
import sp.bvantur.inspektify.ktor.data.utils.extensions.toNetworkTraffic

internal class NetworkTrafficRepository(private val localDataSource: NetworkTrafficLocalDataSource) {
    private var sessionTimestamp: Long = 0L

    val networkTrafficData: Flow<List<NetworkTrafficDataLocal>> =
        localDataSource.getAllNetworkTrafficData()

    suspend fun saveNetworkTrafficData(networkTraffic: NetworkTraffic) {
        localDataSource.saveNetworkTrafficData(networkTraffic)
    }

    suspend fun getNetworkTrafficData(id: NetworkTrafficId): NetworkTraffic = localDataSource.getNetworkTrafficData(
        id
    ).toNetworkTraffic()

    suspend fun removeAllNetworkTrafficData() {
        localDataSource.removeAllNetworkTrafficData()
    }

    fun createCurrentSessionTimestamp() {
        sessionTimestamp = getTimeMillis()
    }

    fun getCurrentSessionTimestamp(): Long = sessionTimestamp
}