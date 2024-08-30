package sp.bvantur.inspektify.ktor

import io.ktor.client.HttpClient
import io.ktor.client.plugins.observer.ResponseHandler
import io.ktor.client.plugins.observer.ResponseObserver
import io.ktor.client.request.HttpRequestPipeline
import io.ktor.client.request.HttpSendPipeline
import io.ktor.client.statement.request
import io.ktor.util.date.getTimeMillis
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Job
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.ktor.data.NetworkTrafficRepository
import sp.bvantur.inspektify.utils.DispatcherProvider

internal class InspektifyKtorClient(
    private val dispatcherProvider: DispatcherProvider,
    private val networkTrafficRepository: NetworkTrafficRepository
) : InspektifyRequestHandler by InspektifyRequestHandlerImpl(dispatcherProvider),
    InspektifyResponseHandler by InspektifyResponseHandlerImpl(dispatcherProvider) {

    private val coroutineScope = CoroutineScope(
        Job() + dispatcherProvider.main
    ) // TODO remove when UI will be implemented

    fun install(plugin: InspektifyKtor, client: HttpClient) {
        configure(plugin.config)
        setupRequestInterceptor(client)
        setupResponseInterceptor(client)

        coroutineScope.launch {
            networkTrafficRepository.networkTrafficData.collect {
                for (networkTrafficData in it) {
                    println("networkTrafficData: $networkTrafficData")
                }
            }
        }
    }

    private fun configure(config: InspektifyKtorConfig) {
        config.also {
            // TODO configure plugin
        }
    }

    private fun setupRequestInterceptor(client: HttpClient) {
        client.requestPipeline.intercept(HttpRequestPipeline.Before) {
            context.attributes.put(getNetworkTrafficIdKey(), getTimeMillis())
        }

        client.sendPipeline.intercept(HttpSendPipeline.Monitoring) {
            try {
                val networkTraffic = handleRequest(context)
                networkTrafficRepository.saveNetworkTrafficData(networkTraffic)
            } catch (ignore: Throwable) {
                // TODO handle this
            }
        }
    }

    private fun setupResponseInterceptor(client: HttpClient) {
        val observer: ResponseHandler = { response ->
            val networkTraffic = networkTrafficRepository.getNetworkTrafficData(
                response.request.attributes[getNetworkTrafficIdKey()]
            )
            val networkTrafficWithResponse = handleResponse(response, networkTraffic)

            networkTrafficRepository.saveNetworkTrafficData(networkTrafficWithResponse)
        }
        ResponseObserver.install(ResponseObserver(observer), client)
    }
}
