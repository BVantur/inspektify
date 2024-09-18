package sp.bvantur.inspektify.ktor

import io.ktor.client.HttpClient
import io.ktor.client.plugins.observer.ResponseHandler
import io.ktor.client.plugins.observer.ResponseObserver
import io.ktor.client.request.HttpRequestPipeline
import io.ktor.client.request.HttpSendPipeline
import io.ktor.client.statement.request
import io.ktor.util.date.getTimeMillis
import io.ktor.utils.io.InternalAPI
import sp.bvantur.inspektify.ktor.data.NetworkTrafficRepository
import sp.bvantur.inspektify.shared.configurePresentationType
import sp.bvantur.inspektify.utils.DispatcherProvider

internal class InspektifyKtorClient(
    private val dispatcherProvider: DispatcherProvider,
    private val networkTrafficRepository: NetworkTrafficRepository
) : InspektifyRequestHandler by InspektifyRequestHandlerImpl(dispatcherProvider),
    InspektifyResponseHandler by InspektifyResponseHandlerImpl(dispatcherProvider),
    InspektifyNetworkTrafficLogger by InspektifyNetworkTrafficLoggerImpl() {

    fun install(plugin: InspektifyKtor, client: HttpClient) {
        configure(plugin.config)
        setupRequestInterceptor(client)
        setupResponseInterceptor(client)
    }

    private fun configure(config: InspektifyKtorConfig) {
        configurePresentationType(config.presentationType)
        configureLogger(config.logLevel)
    }

    private fun setupRequestInterceptor(client: HttpClient) {
        client.requestPipeline.intercept(HttpRequestPipeline.Before) {
            context.attributes.put(getNetworkTrafficIdKey(), getTimeMillis())
        }

        client.sendPipeline.intercept(HttpSendPipeline.Monitoring) {
            try {
                val networkTraffic = handleRequest(context)
                networkTrafficRepository.saveNetworkTrafficData(networkTraffic)
                logRequest(networkTraffic)
            } catch (ignore: Throwable) {
                // TODO handle this
            }
        }
    }

    @OptIn(InternalAPI::class)
    private fun setupResponseInterceptor(client: HttpClient) {
        // TODO try to move logic for observing responses to
        // client.receivePipeline.intercept(HttpReceivePipeline.After)
        // currently there is a crash if some other plugin is installed
        // that requires reading of the bytes for response payload
        val observer: ResponseHandler = { response ->
            val networkTraffic = networkTrafficRepository.getNetworkTrafficData(
                response.request.attributes[getNetworkTrafficIdKey()]
            )
            val networkTrafficWithResponse = handleResponse(response, networkTraffic)

            networkTrafficRepository.saveNetworkTrafficData(networkTrafficWithResponse)
            logResponse(networkTrafficWithResponse)
        }
        ResponseObserver.prepare { onResponse(observer) }.install(client)
    }
}
