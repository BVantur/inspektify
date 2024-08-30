package sp.bvantur.inspektify.ktor

import io.ktor.client.HttpClient
import io.ktor.client.request.HttpRequestPipeline
import io.ktor.client.request.HttpSendPipeline
import sp.bvantur.inspektify.utils.DispatcherProvider

internal class InspektifyKtorClient(
    private val dispatcherProvider: DispatcherProvider
) : InspektifyRequestHandler by InspektifyRequestHandlerImpl(dispatcherProvider) {

    fun install(plugin: InspektifyKtor, client: HttpClient) {
        configure(plugin.config)
        setupRequestInterceptor(client)
    }

    private fun configure(config: InspektifyKtorConfig) {
        config.also {
            // TODO configure plugin
        }
    }

    private fun setupRequestInterceptor(client: HttpClient) {
        client.requestPipeline.intercept(HttpRequestPipeline.Before) {
            context.attributes.put(getRequestKey(), generateRequestId())
        }

        client.sendPipeline.intercept(HttpSendPipeline.Monitoring) {
            try {
                handleRequest(context)
            } catch (ignore: Throwable) {
                // TODO handle this
            }
        }
    }
}
