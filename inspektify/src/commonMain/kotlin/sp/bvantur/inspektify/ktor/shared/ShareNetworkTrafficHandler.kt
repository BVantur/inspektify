package sp.bvantur.inspektify.ktor.shared

internal expect object ShareNetworkTrafficHandler {
    internal fun shareNetworkTrafficContent(content: String)
}
