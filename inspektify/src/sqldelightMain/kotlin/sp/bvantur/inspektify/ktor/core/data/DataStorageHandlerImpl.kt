package sp.bvantur.inspektify.ktor.core.data

import app.cash.sqldelight.ColumnAdapter
import app.cash.sqldelight.coroutines.asFlow
import app.cash.sqldelight.coroutines.mapToList
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flowOn
import kotlinx.coroutines.flow.map
import kotlinx.serialization.encodeToString
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.client.data.DataStorageHandler
import sp.bvantur.inspektify.ktor.client.data.model.NetworkTrafficLocalData
import sp.bvantur.inspektify.ktor.client.domain.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.client.shared.DatabaseDriverProvider
import sp.bvantur.inspektify.ktor.core.di.AppComponents
import sp.bvantur.inspektify.ktor.core.di.AppComponents.getAppModule
import sp.bvantur.inspektify.ktor.core.domain.DispatcherProvider

internal class DataStorageHandlerImpl(
    private val dispatcherProvider: DispatcherProvider = AppComponents.getDispatcherProvider()
) : DataStorageHandler {

    private var database: InspektifyDB? = null

    override suspend fun getAllNetworkTraffic(): Flow<List<NetworkTrafficLocalData>> =
        getDatabaseInstance().inspektifyDBQueries.getAllNetworkTraffic().asFlow().mapToList(dispatcherProvider.default)
            .flowOn(dispatcherProvider.io).map { items ->
                items.map {
                    it.toNetworkTrafficLocalData()
                }
            }

    override fun getNetworkTrafficById(id: Long): NetworkTrafficLocalData =
        getDatabaseInstance().inspektifyDBQueries.getNetworkTrafficById(
            id
        ).executeAsOne().toNetworkTrafficLocalData()

    override fun removeAllNetworkTrafficData() {
        getDatabaseInstance().inspektifyDBQueries.removeAllNetworkTrafficData()
    }

    override fun getDistinctSessionIds(): List<Long> =
        getDatabaseInstance().inspektifyDBQueries.getDistinctSessionIds().executeAsList()

    override suspend fun saveNetworkTrafficData(networkTraffic: NetworkTraffic) {
        getDatabaseInstance().transaction {
            getDatabaseInstance().inspektifyDBQueries.insertNetworkTraffic(
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

    override fun removeNetworkTrafficOlderThan(cutoffTimestamp: Long?) {
        getDatabaseInstance().inspektifyDBQueries.removeNetworkTrafficOlderThan(cutoffTimestamp)
    }

    override fun removeRowsBySessionId(sessionsToRemove: List<Long>) {
        sessionsToRemove.forEach { sessionId ->
            getDatabaseInstance().inspektifyDBQueries.removeRowsBySessionId(sessionId)
        }
    }

    private fun NetworkTrafficDataLocal.toNetworkTrafficLocalData(): NetworkTrafficLocalData = NetworkTrafficLocalData(
        id = this.id,
        sessionId = this.sessionId,
        method = this.method,
        url = this.url,
        host = this.host,
        path = this.path,
        protocol = this.protocol,
        requestTimestamp = this.requestTimestamp,
        requestHeaders = this.requestHeaders,
        requestPayload = this.requestPayload,
        requestContentType = this.requestContentType,
        requestPayloadSize = this.requestPayloadSize,
        requestHeadersSize = this.requestHeadersSize,
        responseTimestamp = this.responseTimestamp,
        responseStatus = this.responseStatus,
        responseStatusDescription = this.responseStatusDescription,
        responseHeaders = this.responseHeaders,
        responsePayload = this.responsePayload,
        responseContentType = this.responseContentType,
        responsePayloadSize = this.responsePayloadSize,
        responseHeadersSize = this.responseHeadersSize,
        tookDurationInMs = this.tookDurationInMs
    )

    private fun getDatabaseInstance(): InspektifyDB {
        if (database == null) {
            database = InspektifyDB(
                driver = DatabaseDriverProvider.createDriver(),
                NetworkTrafficDataLocalAdapter = NetworkTrafficDataLocal.Adapter(
                    responseHeadersAdapter = listOfNetworkTrafficHeaderAdapter,
                    requestHeadersAdapter = listOfNetworkTrafficHeaderAdapter
                )
            )
        }
        return database!!
    }

    private val listOfNetworkTrafficHeaderAdapter =
        object : ColumnAdapter<Set<Map.Entry<String, List<String>>>, String> {
            override fun decode(databaseValue: String): Set<Map.Entry<String, List<String>>> =
                getAppModule().json.decodeFromString<Set<Map.Entry<String, List<String>>>>(
                    databaseValue
                )

            override fun encode(value: Set<Map.Entry<String, List<String>>>): String =
                getAppModule().json.encodeToString(value)
        }
}
