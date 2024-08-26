package sp.bvantur.inspektify.ktor

import io.ktor.client.HttpClient
import io.ktor.client.plugins.HttpClientPlugin
import io.ktor.util.AttributeKey

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
            inspektifyKtorClient = InspektifyKtorClient()
            inspektifyKtorClient.configure(plugin.config)
            inspektifyKtorClient.install(plugin, scope)
        }
    }
}
