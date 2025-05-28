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

    // Core dependencies - initialized once
    val dispatcherProvider: DispatcherProvider by lazy {
        InspektifyDispatcherProvider()
    }

    val json: Json by lazy {
        Json {
            ignoreUnknownKeys = true
            prettyPrint = true
        }
    }

    val cachedConfig: KtorPluginCachedConfig by lazy {
        KtorPluginCachedConfig()
    }

    val inspektifyRequestHandler: InspektifyRequestHandler by lazy {
        InspektifyRequestHandler()
    }

    val inspektifyResponseHandler: InspektifyResponseHandler by lazy {
        InspektifyResponseHandler()
    }

    val inspektifyNetworkTrafficLogger: InspektifyNetworkTrafficLogger by lazy {
        InspektifyNetworkTrafficLogger()
    }

    val inspektifyKtorIgnoreEndpointHandler: InspektifyKtorIgnoreEndpointHandler by lazy {
        InspektifyKtorIgnoreEndpointHandler()
    }

    val inspektifyDataRetentionHandler: InspektifyDataRetentionHandler by lazy {
        InspektifyDataRetentionHandler()
    }

    val database: InspektifyDB by lazy {
        InspektifyDB(
            driver = DatabaseDriverProvider.createDriver(),
            NetworkTrafficDataLocalAdapter = NetworkTrafficDataLocal.Adapter(
                responseHeadersAdapter = listOfNetworkTrafficHeaderAdapter,
                requestHeadersAdapter = listOfNetworkTrafficHeaderAdapter
            )
        )
    }

    // Handler components - these can be created fresh each time if needed
    private val listOfNetworkTrafficHeaderAdapter =
        object : ColumnAdapter<Set<Map.Entry<String, List<String>>>, String> {
            override fun decode(databaseValue: String): Set<Map.Entry<String, List<String>>> =
                json.decodeFromString<Set<Map.Entry<String, List<String>>>>(
                    databaseValue
                )

            override fun encode(value: Set<Map.Entry<String, List<String>>>): String = json.encodeToString(value)
        }
}
