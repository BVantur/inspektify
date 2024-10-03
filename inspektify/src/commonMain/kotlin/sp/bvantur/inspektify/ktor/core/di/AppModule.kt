package sp.bvantur.inspektify.ktor.core.di

import app.cash.sqldelight.ColumnAdapter
import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.InspektifyDataRetentionHandler
import sp.bvantur.inspektify.ktor.InspektifyNetworkTrafficLogger
import sp.bvantur.inspektify.ktor.InspektifyRequestHandler
import sp.bvantur.inspektify.ktor.InspektifyResponseHandler
import sp.bvantur.inspektify.ktor.core.data.KtorPluginCachedConfig
import sp.bvantur.inspektify.ktor.di.KtorModule
import sp.bvantur.inspektify.ktor.di.KtorModuleImpl
import sp.bvantur.inspektify.ktor.shared.DatabaseDriverProvider
import sp.bvantur.inspektify.ktor.utils.DispatcherProvider
import sp.bvantur.inspektify.ktor.utils.InspektifyDispatcherProvider

internal object AppComponents {
    private var appModule: AppModule? = null
    private var ktorModule: KtorModule? = null

    private var database: InspektifyDB? = null
    private var dispatcherProvider: DispatcherProvider? = null

    private var cachedConfig: KtorPluginCachedConfig? = null

    private var requestHandler: InspektifyRequestHandler? = null
    private var responseHandler: InspektifyResponseHandler? = null
    private var trafficLogger: InspektifyNetworkTrafficLogger? = null
    private var dataRetentionHandler: InspektifyDataRetentionHandler? = null

    fun getDatabaseInstance(): InspektifyDB {
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

    fun getDispatcherProvider(): DispatcherProvider {
        if (dispatcherProvider == null) {
            dispatcherProvider = InspektifyDispatcherProvider()
        }
        return dispatcherProvider!!
    }

    fun getAppModule(): AppModule {
        if (appModule == null) {
            appModule = AppModuleImpl()
        }
        return appModule!!
    }

    fun getKtorModule(): KtorModule {
        if (ktorModule == null) {
            ktorModule = KtorModuleImpl()
        }
        return ktorModule!!
    }

    fun getKtorPluginCachedConfig(): KtorPluginCachedConfig {
        if (cachedConfig == null) {
            cachedConfig = KtorPluginCachedConfig()
        }
        return cachedConfig!!
    }

    fun getInspektifyRequestHandler(): InspektifyRequestHandler {
        if (requestHandler == null) {
            requestHandler = InspektifyRequestHandler()
        }
        return requestHandler!!
    }

    fun getInspektifyResponseHandler(): InspektifyResponseHandler {
        if (responseHandler == null) {
            responseHandler = InspektifyResponseHandler()
        }
        return responseHandler!!
    }

    fun getInspektifyNetworkTrafficLogger(): InspektifyNetworkTrafficLogger {
        if (trafficLogger == null) {
            trafficLogger = InspektifyNetworkTrafficLogger()
        }
        return trafficLogger!!
    }

    fun getInspektifyDataRetentionHandler(): InspektifyDataRetentionHandler {
        if (dataRetentionHandler == null) {
            dataRetentionHandler = InspektifyDataRetentionHandler(
                networkTrafficRepository = getKtorModule().networkTrafficRepository,
                ktorPluginCachedConfig = getKtorPluginCachedConfig()
            )
        }
        return dataRetentionHandler!!
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

internal interface AppModule {
    val json: Json
}

internal class AppModuleImpl : AppModule {

    override val json: Json by lazy {
        Json {
            ignoreUnknownKeys = true
            prettyPrint = true
        }
    }
}
