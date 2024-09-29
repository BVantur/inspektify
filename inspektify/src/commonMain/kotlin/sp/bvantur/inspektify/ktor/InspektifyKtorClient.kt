package sp.bvantur.inspektify.ktor

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
import sp.bvantur.inspektify.ktor.data.NetworkTrafficRepository
import sp.bvantur.inspektify.ktor.shared.configurePresentationType
import sp.bvantur.inspektify.ktor.utils.DispatcherProvider

internal class InspektifyKtorClient(
    private val dispatcherProvider: DispatcherProvider,
    private val networkTrafficRepository: NetworkTrafficRepository
) : InspektifyRequestHandler by InspektifyRequestHandlerImpl(dispatcherProvider),
    InspektifyResponseHandler by InspektifyResponseHandlerImpl(dispatcherProvider),
    InspektifyNetworkTrafficLogger by InspektifyNetworkTrafficLoggerImpl(),
    InspektifyDataRetentionHandler by InspektifyDataRetentionHandlerImpl(networkTrafficRepository) {

    private val coroutineScope = CoroutineScope(dispatcherProvider.main + SupervisorJob())

    private var sessionId: Long? = null

    fun install(plugin: InspektifyKtor, client: HttpClient) {
        sessionId = getTimeMillis()
        configure(plugin.config)
        setupRequestInterceptor(client)
        setupResponseInterceptor(client)
        networkTrafficRepository.createCurrentSessionTimestamp()
    }

    private fun configure(config: InspektifyKtorConfig) {
        configurePresentationType(config.presentationType)
        configureLogger(config.logLevel)
        coroutineScope.launch {
            configureDataRetentionPolicy(config.dataRetentionPolicy)
        }
    }

    private fun setupRequestInterceptor(client: HttpClient) {
        client.requestPipeline.intercept(HttpRequestPipeline.Before) {
            context.attributes.put(getNetworkTrafficIdKey(), getTimeMillis())
        }

        client.sendPipeline.intercept(HttpSendPipeline.Monitoring) {
            try {
                val networkTraffic = handleRequest(request = context, sessionId = sessionId)
                networkTrafficRepository.saveNetworkTrafficData(networkTraffic)
                logRequest(networkTraffic)
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
                response.request.attributes[getNetworkTrafficIdKey()]
            )
            val networkTrafficWithResponse = handleResponse(response, networkTraffic)

            networkTrafficRepository.saveNetworkTrafficData(networkTrafficWithResponse)
            logResponse(networkTrafficWithResponse)
        }
        val responseObserver = ResponseObserver.prepare { onResponse(responseHandler) }
        ResponseObserver.install(responseObserver, client)
    }
}
