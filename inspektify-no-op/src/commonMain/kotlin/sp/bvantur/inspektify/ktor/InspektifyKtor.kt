package sp.bvantur.inspektify.ktor

import io.ktor.client.HttpClient
import io.ktor.client.plugins.HttpClientPlugin
import io.ktor.util.AttributeKey

public class InspektifyKtor(public val config: InspektifyKtorConfig) {

    public companion object : HttpClientPlugin<InspektifyKtorConfig, InspektifyKtor> {
        override val key: AttributeKey<InspektifyKtor>
            get() = AttributeKey("InspektifyKtor")

        override fun prepare(block: InspektifyKtorConfig.() -> Unit): InspektifyKtor =
            InspektifyKtor(InspektifyKtorConfig().apply(block))

        override fun install(plugin: InspektifyKtor, scope: HttpClient) {
            // no-op
        }

        public fun startInspektify() {
            // no-op
        }
    }
}
