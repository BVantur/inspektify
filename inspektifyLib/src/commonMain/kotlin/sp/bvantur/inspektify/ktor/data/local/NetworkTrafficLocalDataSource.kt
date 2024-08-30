package sp.bvantur.inspektify.ktor.data.local

import app.cash.sqldelight.coroutines.asFlow
import app.cash.sqldelight.coroutines.mapToList
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flowOn
import sp.bvantur.inspektify.NetworkTrafficData
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.data.model.NetworkTraffic
import sp.bvantur.inspektify.utils.DispatcherProvider

internal class NetworkTrafficLocalDataSource(
    private val database: InspektifyDB,
    private val dispatcherProvider: DispatcherProvider
) {
    fun getAllNetworkTrafficData(): Flow<List<NetworkTrafficData>> = database.inspektifyDBQueries
        .getAllNetworkTraffic()
        .asFlow()
        .mapToList(dispatcherProvider.default).flowOn(dispatcherProvider.io)

    fun saveNetworkTrafficData(networkTraffic: NetworkTraffic) {
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
            requestPayloadSize = networkTraffic.requestPayloadSize,
            requestHeadersSize = networkTraffic.requestHeadersSize,
            responseTimestamp = networkTraffic.responseTimestamp,
            responseStatus = networkTraffic.responseStatus?.toLong(),
            responseStatusDescription = networkTraffic.responseStatusDescription,
            responseHeaders = networkTraffic.responseHeaders,
            responsePayload = networkTraffic.responsePayload,
            responsePayloadSize = networkTraffic.responsePayloadSize?.toLong(),
            responseHeadersSize = networkTraffic.responseHeadersSize?.toLong(),
            tookDurationInMs = networkTraffic.tookDurationInMs,
        )
    }

    fun getNetworkTrafficData(id: Long): NetworkTrafficData = database.inspektifyDBQueries.getNetworkTrafficById(
        id
    ).executeAsOne()
}
