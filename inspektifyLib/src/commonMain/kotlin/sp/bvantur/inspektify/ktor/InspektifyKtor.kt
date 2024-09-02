package sp.bvantur.inspektify.ktor

import io.ktor.client.HttpClient
import io.ktor.client.plugins.HttpClientPlugin
import io.ktor.util.AttributeKey
import sp.bvantur.inspektify.AppComponents

class InspektifyKtor(val config: InspektifyKtorConfig) {

    companion object : HttpClientPlugin<InspektifyKtorConfig, InspektifyKtor> {
        private lateinit var inspektifyKtorClient: InspektifyKtorClient
        override val key: AttributeKey<InspektifyKtor>
            get() = AttributeKey("InspektifyKtor")

        override fun prepare(block: InspektifyKtorConfig.() -> Unit): InspektifyKtor {
            val config = InspektifyKtorConfig().apply(block)
            return InspektifyKtor(config)
        }

        override fun install(plugin: InspektifyKtor, scope: HttpClient) {
            inspektifyKtorClient = InspektifyKtorClient(
                dispatcherProvider = AppComponents.getAppModule().dispatcherProvider,
                networkTrafficRepository = AppComponents.getKtorModule().networkTrafficRepository
            )
            inspektifyKtorClient.install(plugin, scope)
        }
    }
}
