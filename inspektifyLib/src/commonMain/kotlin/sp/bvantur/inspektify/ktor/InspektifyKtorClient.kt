package sp.bvantur.inspektify.ktor

import io.ktor.client.HttpClient

internal class InspektifyKtorClient {
    fun install(plugin: InspektifyKtor, scope: HttpClient) {
        plugin.also {
            // TODO install plugin
        }
        scope.also {
            // TODO install plugin
        }
    }

    fun configure(config: InspektifyKtorConfig) {
        config.also {
            // TODO configure plugin
        }
    }
}
