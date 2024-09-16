package sp.bvantur.inspektify.ktor

import io.ktor.http.Url
import sp.bvantur.inspektify.ktor.data.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.data.model.NetworkTrafficHeader

internal interface InspektifyNetworkTrafficLogger {
    fun configureLogger(logLevel: LogLevel)
    fun logRequest(networkTraffic: NetworkTraffic)
    fun logResponse(networkTraffic: NetworkTraffic)
}

internal class InspektifyNetworkTrafficLoggerImpl : InspektifyNetworkTrafficLogger {
    private var logLevel: LogLevel = LogLevel.None

    override fun configureLogger(logLevel: LogLevel) {
        this.logLevel = logLevel
    }

    override fun logRequest(networkTraffic: NetworkTraffic) {
        if (logLevel.isLoggerEnabled()) return

        val requestLogger = StringBuilder()
        if (logLevel.canLogInfo()) {
            networkTraffic.url?.let { url ->
                requestLogger.appendLine("REQUEST: ${Url(url)}")
            }
            requestLogger.appendLine("METHOD: ${networkTraffic.method}")
        }
        if (logLevel.canLogHeaders()) {
            requestLogger.appendLine("HEADERS")
            requestLogger.appendLine(headersToLog(networkTraffic.requestHeaders))
        }

        if (networkTraffic.requestPayload?.isNotEmpty() == true && logLevel.canLogBody()) {
            requestLogger.appendLine("BODY Content-Type: ${networkTraffic.contentType}")
            requestLogger.appendLine("BODY START")
            requestLogger.appendLine(networkTraffic.requestPayload)
            requestLogger.appendLine("BODY END")
        }
        println("InspektifyHttpClient: ${requestLogger.toString().trim()}")
    }

    override fun logResponse(networkTraffic: NetworkTraffic) {
        if (logLevel.isLoggerEnabled()) return

        val responseLogger = StringBuilder()
        if (logLevel.canLogInfo()) {
            responseLogger.appendLine("RESPONSE: ${networkTraffic.responseStatus}")
            responseLogger.appendLine("METHOD: ${networkTraffic.method}")
            networkTraffic.url?.let { url ->
                responseLogger.appendLine("FROM: ${Url(url)}")
            }
        }
        if (logLevel.canLogHeaders()) {
            responseLogger.appendLine("HEADERS")
            responseLogger.appendLine(headersToLog(networkTraffic.responseHeaders))
        }

        if (networkTraffic.responsePayload?.isNotEmpty() == true && logLevel.canLogBody()) {
            responseLogger.appendLine("BODY Content-Type: ${networkTraffic.contentType}")
            responseLogger.appendLine("BODY START")
            responseLogger.appendLine(networkTraffic.responsePayload)
            responseLogger.appendLine("BODY END")
        }

        println("InspektifyHttpClient: ${responseLogger.toString().trim()}")
    }

    private fun headersToLog(headers: List<NetworkTrafficHeader>?): String {
        headers ?: return ""

        return headers.joinToString("\n") { header ->
            "${header.name}:${header.value}"
        }
    }
}
