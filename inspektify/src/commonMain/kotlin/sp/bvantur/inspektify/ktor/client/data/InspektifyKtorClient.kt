package sp.bvantur.inspektify.ktor.client.data

import io.ktor.client.HttpClient
import io.ktor.client.plugins.observer.ResponseHandler
import io.ktor.client.plugins.observer.ResponseObserver
import io.ktor.client.request.HttpRequestPipeline
import io.ktor.client.request.HttpSendPipeline
import io.ktor.client.statement.request
import io.ktor.util.date.getTimeMillis
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.SupervisorJob
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.ktor.InspektifyKtor
import sp.bvantur.inspektify.ktor.InspektifyKtorConfig
import sp.bvantur.inspektify.ktor.client.shared.configurePresentation
import sp.bvantur.inspektify.ktor.core.data.KtorPluginCachedConfig
import sp.bvantur.inspektify.ktor.core.di.AppComponents
import sp.bvantur.inspektify.ktor.core.domain.DispatcherProvider
import sp.bvantur.inspektify.ktor.core.domain.NetworkTrafficRepository

internal class InspektifyKtorClient(
    private val dispatcherProvider: DispatcherProvider = AppComponents.getDispatcherProvider(),
    private val repository: NetworkTrafficRepository = AppComponents.getKtorModule().networkTrafficRepository,
    private val cachedConfig: KtorPluginCachedConfig = AppComponents.getKtorPluginCachedConfig(),
    private val requestHandler: InspektifyRequestHandler = AppComponents.getInspektifyRequestHandler(),
    private val responseHandler: InspektifyResponseHandler = AppComponents.getInspektifyResponseHandler(),
    private val trafficLogger: InspektifyNetworkTrafficLogger = AppComponents.getInspektifyNetworkTrafficLogger(),
    private val dataRetentionHandler: InspektifyDataRetentionHandler =
        AppComponents.getInspektifyDataRetentionHandler(),
    private val ignoreEndpointHandler: InspektifyKtorIgnoreEndpointHandler =
        AppComponents.getInspektifyKtorIgnoreEndpointHandler()
) {
    private val coroutineScope = CoroutineScope(dispatcherProvider.main + SupervisorJob())

    private var sessionId: Long? = null
    private var redactHeaders: List<String> = emptyList()
    private var redactBodyProperties: List<String> = emptyList()

    fun install(plugin: InspektifyKtor, client: HttpClient) {
        sessionId = getTimeMillis()
        configure(plugin.config)
        setupRequestInterceptor(client)
        setupResponseInterceptor(client)
        cachedConfig.currentSessionTimeStamp = getTimeMillis()
    }

    private fun configure(config: InspektifyKtorConfig) {
        trafficLogger.configureLogger(config.logLevel)
        redactHeaders = config.redactHeaders
        redactBodyProperties = config.redactBodyProperties
        coroutineScope.launch(dispatcherProvider.main.immediate) {
            ignoreEndpointHandler.configureEndpointIgnoring(config.ignoreEndpoints)
            configurePresentation(config.autoDetectEnabled, config.shortcutEnabled)
            dataRetentionHandler.configureDataRetentionPolicy(config.dataRetentionPolicy)
        }
    }

    private fun setupRequestInterceptor(client: HttpClient) {
        client.requestPipeline.intercept(HttpRequestPipeline.Before) {
            context.attributes.put(requestHandler.getNetworkTrafficIdKey(), getTimeMillis())
        }

        client.sendPipeline.intercept(HttpSendPipeline.Monitoring) {
            try {
                if (ignoreEndpointHandler.shouldIgnoreEndpoint(context)) return@intercept

                val networkTraffic = requestHandler.handleRequest(
                    request = context,
                    sessionId = sessionId,
                    redactHeaders = redactHeaders,
                    redactBodyProperties = redactBodyProperties
                )
                repository.saveNetworkTrafficData(networkTraffic)
                trafficLogger.logRequest(networkTraffic)
            } catch (ignore: Throwable) {
                // TODO handle this
            }
        }
    }

    private fun setupResponseInterceptor(client: HttpClient) {
        // TODO try to move logic for observing responses to
        // client.receivePipeline.intercept(HttpReceivePipeline.After)
        // currently there is a crash if some other plugin is installed
        // that requires reading of the bytes for response payload
        val responseHandler: ResponseHandler = { response ->
            val networkTraffic = repository.getNetworkTrafficData(
                response.request.attributes[requestHandler.getNetworkTrafficIdKey()]
            )
            if (networkTraffic != null) {
                val networkTrafficWithResponse = responseHandler.handleResponse(
                    response = response,
                    networkTraffic = networkTraffic,
                    redactHeaders = redactHeaders,
                    redactBodyProperties = redactBodyProperties
                )

                repository.saveNetworkTrafficData(networkTrafficWithResponse)
                trafficLogger.logResponse(networkTrafficWithResponse)
            }
        }
        val responseObserver = ResponseObserver.prepare { onResponse(responseHandler) }
        ResponseObserver.install(responseObserver, client)
    }
}
