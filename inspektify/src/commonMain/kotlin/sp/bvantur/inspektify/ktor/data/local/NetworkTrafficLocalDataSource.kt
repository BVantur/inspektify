package sp.bvantur.inspektify.ktor.data.local

import app.cash.sqldelight.coroutines.asFlow
import app.cash.sqldelight.coroutines.mapToList
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flowOn
import kotlinx.coroutines.withContext
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.data.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.utils.DispatcherProvider

internal class NetworkTrafficLocalDataSource(
    private val database: InspektifyDB,
    private val dispatcherProvider: DispatcherProvider
) {
    fun getAllNetworkTrafficData(): Flow<List<NetworkTrafficDataLocal>> = database.inspektifyDBQueries
        .getAllNetworkTraffic()
        .asFlow()
        .mapToList(dispatcherProvider.default).flowOn(dispatcherProvider.io)

    suspend fun saveNetworkTrafficData(networkTraffic: NetworkTraffic) {
        withContext(dispatcherProvider.default) {
            database.transaction {
                database.inspektifyDBQueries.insertNetworkTraffic(
                    id = networkTraffic.id,
                    method = networkTraffic.method,
                    url = networkTraffic.url,
                    host = networkTraffic.host,
                    path = networkTraffic.path,
                    protocol = networkTraffic.protocol,
                    requestTimestamp = networkTraffic.requestTimestamp,
                    requestHeaders = networkTraffic.requestHeaders,
                    requestPayload = networkTraffic.requestPayload,
                    requestContentType = networkTraffic.requestContentType,
                    requestPayloadSize = networkTraffic.requestPayloadSize,
                    requestHeadersSize = networkTraffic.requestHeadersSize,
                    responseTimestamp = networkTraffic.responseTimestamp,
                    responseStatus = networkTraffic.responseStatus?.toLong(),
                    responseStatusDescription = networkTraffic.responseStatusDescription,
                    responseHeaders = networkTraffic.responseHeaders,
                    responsePayload = networkTraffic.responsePayload,
                    responseContentType = networkTraffic.responseContentType,
                    responsePayloadSize = networkTraffic.responsePayloadSize,
                    responseHeadersSize = networkTraffic.responseHeadersSize?.toLong(),
                    tookDurationInMs = networkTraffic.tookDurationInMs
                )
            }
        }
    }

    suspend fun getNetworkTrafficData(id: Long): NetworkTrafficDataLocal = withContext(dispatcherProvider.io) {
        database.inspektifyDBQueries.getNetworkTrafficById(
            id
        ).executeAsOne()
    }

    suspend fun removeAllNetworkTrafficData() {
        withContext(dispatcherProvider.io) {
            database.inspektifyDBQueries.removeAllNetworkTrafficData()
        }
    }

    suspend fun removeNetworkTrafficOlderThan(cutoffTimestamp: Long) {
        withContext(dispatcherProvider.io) {
            database.inspektifyDBQueries.removeNetworkTrafficOlderThan(cutoffTimestamp)
        }
    }
}
