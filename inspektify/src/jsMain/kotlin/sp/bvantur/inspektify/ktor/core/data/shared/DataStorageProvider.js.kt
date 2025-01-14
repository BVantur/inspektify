package sp.bvantur.inspektify.ktor.core.data.shared

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flowOf
import sp.bvantur.inspektify.ktor.client.data.DataStorageHandler
import sp.bvantur.inspektify.ktor.client.data.model.NetworkTrafficLocalData
import sp.bvantur.inspektify.ktor.client.domain.model.NetworkTraffic

internal actual object DataStorageProvider {
    actual fun provideDataStorageHandler(): DataStorageHandler = object : DataStorageHandler {
        override suspend fun getAllNetworkTraffic(): Flow<List<NetworkTrafficLocalData>> = flowOf()

        override fun getNetworkTrafficById(id: Long): NetworkTrafficLocalData = NetworkTrafficLocalData(
            id = 0L,
            sessionId = 0L,
            method = null,
            url = null,
            host = null,
            path = null,
            protocol = null,
            requestTimestamp = null,
            requestHeaders = null,
            requestPayload = null,
            requestContentType = null,
            requestPayloadSize = null,
            requestHeadersSize = null,
            responseTimestamp = null,
            responseStatus = null,
            responseStatusDescription = null,
            responseHeaders = null,
            responsePayload = null,
            responseContentType = null,
            responsePayloadSize = null,
            responseHeadersSize = null,
            tookDurationInMs = null,
        )

        override fun removeAllNetworkTrafficData() {
        }

        override fun getDistinctSessionIds(): List<Long> = emptyList()

        override suspend fun saveNetworkTrafficData(networkTraffic: NetworkTraffic) {
        }

        override fun removeNetworkTrafficOlderThan(cutoffTimestamp: Long?) {
        }

        override fun removeRowsBySessionId(sessionsToRemove: List<Long>) {
        }
    }
}
