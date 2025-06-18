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
import sp.bvantur.inspektify.ktor.client.di.KtorModule.networkTrafficRepository
import sp.bvantur.inspektify.ktor.client.shared.configurePresentation
import sp.bvantur.inspektify.ktor.core.di.AppComponents.cachedConfig
import sp.bvantur.inspektify.ktor.core.di.AppComponents.dispatcherProvider
import sp.bvantur.inspektify.ktor.core.di.AppComponents.inspektifyDataRetentionHandler
import sp.bvantur.inspektify.ktor.core.di.AppComponents.inspektifyKtorIgnoreEndpointHandler
import sp.bvantur.inspektify.ktor.core.di.AppComponents.inspektifyNetworkTrafficLogger
import sp.bvantur.inspektify.ktor.core.di.AppComponents.inspektifyRequestHandler
import sp.bvantur.inspektify.ktor.core.di.AppComponents.inspektifyResponseHandler

internal class InspektifyKtorClient {
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
        inspektifyNetworkTrafficLogger.configureLogger(config.logLevel)
        redactHeaders = config.redactHeaders
        redactBodyProperties = config.redactBodyProperties
        coroutineScope.launch(dispatcherProvider.main.immediate) {
            inspektifyKtorIgnoreEndpointHandler.configureEndpointIgnoring(config.ignoreEndpoints)
            configurePresentation(config.autoDetectEnabledFor, config.shortcutEnabled)
            inspektifyDataRetentionHandler.configureDataRetentionPolicy(config.dataRetentionPolicy)
        }
    }

    private fun setupRequestInterceptor(client: HttpClient) {
        client.requestPipeline.intercept(HttpRequestPipeline.Before) {
            context.attributes.put(inspektifyRequestHandler.getNetworkTrafficIdKey(), getTimeMillis())
        }

        client.sendPipeline.intercept(HttpSendPipeline.Monitoring) {
            try {
                if (inspektifyKtorIgnoreEndpointHandler.shouldIgnoreEndpoint(context)) return@intercept

                val networkTraffic = inspektifyRequestHandler.handleRequest(
                    request = context,
                    sessionId = sessionId,
                    redactHeaders = redactHeaders,
                    redactBodyProperties = redactBodyProperties
                )
                networkTrafficRepository.saveNetworkTrafficData(networkTraffic)
                inspektifyNetworkTrafficLogger.logRequest(networkTraffic)
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
            val networkTraffic = networkTrafficRepository.getNetworkTrafficData(
                response.request.attributes[inspektifyRequestHandler.getNetworkTrafficIdKey()]
            )
            if (networkTraffic != null) {
                val networkTrafficWithResponse = inspektifyResponseHandler.handleResponse(
                    response = response,
                    networkTraffic = networkTraffic,
                    redactHeaders = redactHeaders,
                    redactBodyProperties = redactBodyProperties
                )

                networkTrafficRepository.saveNetworkTrafficData(networkTrafficWithResponse)
                inspektifyNetworkTrafficLogger.logResponse(networkTrafficWithResponse)
            }
        }
        val responseObserver = ResponseObserver.prepare { onResponse(responseHandler) }
        ResponseObserver.install(responseObserver, client)
    }
}
