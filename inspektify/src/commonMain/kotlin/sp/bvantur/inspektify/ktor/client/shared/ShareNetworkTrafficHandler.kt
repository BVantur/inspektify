package sp.bvantur.inspektify.ktor.client.shared

internal expect object ShareNetworkTrafficHandler {
    internal fun shareNetworkTrafficContent(content: String)
}
