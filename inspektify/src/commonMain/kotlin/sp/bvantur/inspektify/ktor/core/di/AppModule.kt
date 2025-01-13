package sp.bvantur.inspektify.ktor.core.di

import kotlinx.serialization.json.Json
import sp.bvantur.inspektify.ktor.client.data.DataStorageHandler
import sp.bvantur.inspektify.ktor.client.data.InspektifyDataRetentionHandler
import sp.bvantur.inspektify.ktor.client.data.InspektifyKtorIgnoreEndpointHandler
import sp.bvantur.inspektify.ktor.client.data.InspektifyNetworkTrafficLogger
import sp.bvantur.inspektify.ktor.client.data.InspektifyRequestHandler
import sp.bvantur.inspektify.ktor.client.data.InspektifyResponseHandler
import sp.bvantur.inspektify.ktor.client.di.KtorModule
import sp.bvantur.inspektify.ktor.client.di.KtorModuleImpl
import sp.bvantur.inspektify.ktor.core.data.InspektifyDispatcherProvider
import sp.bvantur.inspektify.ktor.core.data.KtorPluginCachedConfig
import sp.bvantur.inspektify.ktor.core.data.shared.DataStorageProvider.provideDataStorageHandler
import sp.bvantur.inspektify.ktor.core.domain.DispatcherProvider

internal object AppComponents {
    private var appModule: AppModule? = null
    private var ktorModule: KtorModule? = null
    private var dispatcherProvider: DispatcherProvider? = null

    private var cachedConfig: KtorPluginCachedConfig? = null

    private var requestHandler: InspektifyRequestHandler? = null
    private var responseHandler: InspektifyResponseHandler? = null
    private var trafficLogger: InspektifyNetworkTrafficLogger? = null
    private var dataRetentionHandler: InspektifyDataRetentionHandler? = null
    private var ignoreEndpointHandler: InspektifyKtorIgnoreEndpointHandler? = null
    private var dataStorageHandler: DataStorageHandler? = null

    fun getDataStorageHandler(): DataStorageHandler {
        if (dataStorageHandler == null) {
            dataStorageHandler = provideDataStorageHandler()
        }
        return dataStorageHandler!!
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

    fun getInspektifyKtorIgnoreEndpointHandler(): InspektifyKtorIgnoreEndpointHandler {
        if (ignoreEndpointHandler == null) {
            ignoreEndpointHandler = InspektifyKtorIgnoreEndpointHandler()
        }
        return ignoreEndpointHandler!!
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
