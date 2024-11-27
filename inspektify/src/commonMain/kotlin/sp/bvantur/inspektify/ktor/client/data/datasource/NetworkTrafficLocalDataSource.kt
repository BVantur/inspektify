package sp.bvantur.inspektify.ktor.client.data.datasource

import kotlinx.coroutines.withContext
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.client.domain.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.core.domain.DispatcherProvider

internal class NetworkTrafficLocalDataSource(
    private val database: InspektifyDB,
    private val dispatcherProvider: DispatcherProvider
) {
    suspend fun saveNetworkTrafficData(networkTraffic: NetworkTraffic) {
        withContext(dispatcherProvider.default) {
            database.transaction {
                database.inspektifyDBQueries.insertNetworkTraffic(
                    id = networkTraffic.id,
                    sessionId = networkTraffic.sessionId,
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

    suspend fun removeNetworkTrafficOlderThan(cutoffTimestamp: Long) {
        withContext(dispatcherProvider.io) {
            database.inspektifyDBQueries.removeNetworkTrafficOlderThan(cutoffTimestamp)
        }
    }

    suspend fun getAllSessionsIds(): List<Long> = withContext(dispatcherProvider.io) {
        database.inspektifyDBQueries.getDistinctSessionIds().executeAsList()
    }

    fun removeNetworkTrafficWithNextSessionIds(sessionsToRemove: List<Long>) {
        sessionsToRemove.forEach { sessionId ->
            database.inspektifyDBQueries.removeRowsBySessionId(sessionId)
        }
    }
}
