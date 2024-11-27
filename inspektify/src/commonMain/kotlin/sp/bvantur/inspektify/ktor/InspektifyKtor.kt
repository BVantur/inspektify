package sp.bvantur.inspektify.ktor

import io.ktor.client.HttpClient
import io.ktor.client.plugins.HttpClientPlugin
import io.ktor.util.AttributeKey
import sp.bvantur.inspektify.ktor.client.data.InspektifyKtorClient
import sp.bvantur.inspektify.ktor.client.shared.startInspektifyWindow

public class InspektifyKtor(public val config: InspektifyKtorConfig) {

    public companion object : HttpClientPlugin<InspektifyKtorConfig, InspektifyKtor> {
        private lateinit var inspektifyKtorClient: InspektifyKtorClient
        override val key: AttributeKey<InspektifyKtor>
            get() = AttributeKey("InspektifyKtor")

        override fun prepare(block: InspektifyKtorConfig.() -> Unit): InspektifyKtor {
            val config = InspektifyKtorConfig().apply(block)
            return InspektifyKtor(config)
        }

        override fun install(plugin: InspektifyKtor, scope: HttpClient) {
            inspektifyKtorClient = InspektifyKtorClient()
            inspektifyKtorClient.install(plugin, scope)
        }

        public fun startInspektify() {
            startInspektifyWindow()
        }
    }
}
