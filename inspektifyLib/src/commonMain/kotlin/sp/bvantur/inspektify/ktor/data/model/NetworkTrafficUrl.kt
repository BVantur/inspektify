package sp.bvantur.inspektify.ktor.data.model

internal data class NetworkTrafficUrl(
    private val scheme: String,
    private val host: String,
    private val port: Int,
    private val path: String,
    private val query: String,
) {

    companion object {
        private const val HTTPS_PORT = 443
        private const val HTTP_PORT = 80
    }

    private val pathWithQuery: String
        get() =
            if (query.isBlank()) {
                path
            } else {
                "$path?$query"
            }

    val url: String
        get() {
            return if (shouldShowPort()) {
                "$scheme://$host:$port$pathWithQuery"
            } else {
                "$scheme://$host$pathWithQuery"
            }
        }

    private fun shouldShowPort(): Boolean {
        if (scheme == "https" && port == HTTPS_PORT) {
            return false
        }
        if (scheme == "http" && port == HTTP_PORT) {
            return false
        }
        return true
    }
}
