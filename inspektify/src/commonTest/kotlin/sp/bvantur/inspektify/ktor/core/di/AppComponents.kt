package sp.bvantur.inspektify.ktor.core.di

import app.cash.sqldelight.ColumnAdapter
import kotlinx.serialization.json.Json
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.client.data.InspektifyDataRetentionHandler
import sp.bvantur.inspektify.ktor.client.data.InspektifyKtorIgnoreEndpointHandler
import sp.bvantur.inspektify.ktor.client.data.InspektifyNetworkTrafficLogger
import sp.bvantur.inspektify.ktor.client.data.InspektifyRequestHandler
import sp.bvantur.inspektify.ktor.client.data.InspektifyResponseHandler
import sp.bvantur.inspektify.ktor.client.shared.DatabaseDriverProvider
import sp.bvantur.inspektify.ktor.core.data.InspektifyDispatcherProvider
import sp.bvantur.inspektify.ktor.core.data.KtorPluginCachedConfig
import sp.bvantur.inspektify.ktor.core.domain.DispatcherProvider

internal object AppComponents {
    private val listOfNetworkTrafficHeaderAdapter =
        object : ColumnAdapter<Set<Map.Entry<String, List<String>>>, String> {
            override fun decode(databaseValue: String): Set<Map.Entry<String, List<String>>> {
                return emptySet()
            }

            override fun encode(value: Set<Map.Entry<String, List<String>>>): String {
                return ""
            }
        }

    // Core dependencies - initialized once
    val dispatcherProvider: DispatcherProvider = InspektifyDispatcherProvider()

    val json: Json = Json {
        ignoreUnknownKeys = true
        prettyPrint = true
    }

    var cachedConfig: KtorPluginCachedConfig = KtorPluginCachedConfig()

    val inspektifyRequestHandler: InspektifyRequestHandler = InspektifyRequestHandler()

    val inspektifyResponseHandler: InspektifyResponseHandler = InspektifyResponseHandler()

    val inspektifyNetworkTrafficLogger: InspektifyNetworkTrafficLogger = InspektifyNetworkTrafficLogger()

    val inspektifyKtorIgnoreEndpointHandler: InspektifyKtorIgnoreEndpointHandler = InspektifyKtorIgnoreEndpointHandler()

    var inspektifyDataRetentionHandler: InspektifyDataRetentionHandler = InspektifyDataRetentionHandler()

    var database: InspektifyDB = InspektifyDB(
        driver = DatabaseDriverProvider.createDriver(),
        NetworkTrafficDataLocalAdapter = NetworkTrafficDataLocal.Adapter(
            responseHeadersAdapter = listOfNetworkTrafficHeaderAdapter,
            requestHeadersAdapter = listOfNetworkTrafficHeaderAdapter
        )
    )
}
