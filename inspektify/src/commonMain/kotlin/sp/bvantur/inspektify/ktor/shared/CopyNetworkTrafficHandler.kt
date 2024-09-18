package sp.bvantur.inspektify.ktor.shared

internal expect object CopyNetworkTrafficHandler {

    internal fun copyToClipboard(content: String)
}
