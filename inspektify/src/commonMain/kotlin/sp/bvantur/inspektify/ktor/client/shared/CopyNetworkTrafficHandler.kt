package sp.bvantur.inspektify.ktor.client.shared

internal expect object CopyNetworkTrafficHandler {

    internal fun copyToClipboard(content: String)
}
