package sp.bvantur.inspektify.ktor.client.data

import io.ktor.http.Url
import sp.bvantur.inspektify.ktor.LogLevel
import sp.bvantur.inspektify.ktor.client.domain.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.core.data.utils.NetworkTrafficDataUtils

internal class InspektifyNetworkTrafficLogger(private val logger: SystemLogger = SystemLoggerImpl()) {
    private var logLevel: LogLevel = LogLevel.None
    private val tag = "[Inspektify]:"

    fun configureLogger(logLevel: LogLevel) {
        this.logLevel = logLevel
    }

    fun logRequest(networkTraffic: NetworkTraffic) {
        if (logLevel.isLoggerEnabled()) return

        val requestLogger = StringBuilder()
        if (logLevel.canLogInfo()) {
            networkTraffic.url?.let { url ->
                requestLogger.appendLineWithTag("REQUEST: ${Url(url)}")
            }
            requestLogger.appendLineWithTag("METHOD: ${networkTraffic.method}")
        }
        if (logLevel.canLogHeaders()) {
            requestLogger.appendLineWithTag("HEADERS")
            requestLogger.appendLine(headersToLog(networkTraffic.requestHeaders))
        }

        if (networkTraffic.requestPayload?.isNotEmpty() == true && logLevel.canLogBody()) {
            requestLogger.appendLineWithTag("BODY Content-Type: ${networkTraffic.requestContentType}")
            requestLogger.appendLineWithTag("BODY START")
            requestLogger.appendLineWithTag(networkTraffic.requestPayload)
            requestLogger.appendLineWithTag("BODY END")
        }
        if (logLevel.canLogInfo()) {
            buildCurlCommand(networkTraffic).takeIf { it.isNotBlank() }?.let { curlCommand ->
                requestLogger.appendLineWithTag("CURL")
                requestLogger.appendLine(curlCommand)
            }
        }
        requestLogger.appendLine(SEPARATOR)
        logger.log(requestLogger.toString().trim())
    }

    fun logResponse(networkTraffic: NetworkTraffic) {
        if (logLevel.isLoggerEnabled()) return

        val responseLogger = StringBuilder()
        if (logLevel.canLogInfo()) {
            responseLogger.appendLineWithTag("RESPONSE: ${networkTraffic.responseStatus}")
            responseLogger.appendLineWithTag("METHOD: ${networkTraffic.method}")
            networkTraffic.url?.let { url ->
                responseLogger.appendLineWithTag("FROM: ${Url(url)}")
            }
        }
        if (logLevel.canLogHeaders()) {
            responseLogger.appendLineWithTag("HEADERS")
            responseLogger.appendLine(headersToLog(networkTraffic.responseHeaders))
        }

        if (networkTraffic.responsePayload?.isNotEmpty() == true && logLevel.canLogBody()) {
            responseLogger.appendLineWithTag("BODY Content-Type: ${networkTraffic.responseContentType}")
            responseLogger.appendLineWithTag("BODY START")
            responseLogger.appendLineWithTag(networkTraffic.responsePayload)
            responseLogger.appendLineWithTag("BODY END")
        }

        responseLogger.appendLine(SEPARATOR)
        logger.log(responseLogger.toString().trim())
    }

    private fun buildCurlCommand(networkTraffic: NetworkTraffic): String {
        val method = networkTraffic.method ?: return ""
        val url = networkTraffic.url ?: return ""

        return NetworkTrafficDataUtils.buildCurlCommand(
            method = method,
            url = url,
            headers = networkTraffic.requestHeaders.takeIf { logLevel.canLogHeaders() },
            payload = networkTraffic.requestPayload?.takeIf { it.isNotEmpty() && logLevel.canLogBody() }
        )
    }

    private fun headersToLog(headers: Set<Map.Entry<String, List<String>>>?): String {
        headers ?: return ""

        return headers.joinToString(separator = "") { (headerName, headerValues) ->
            "$tag $headerName:$headerValues\n"
        }
    }

    private fun StringBuilder.appendLineWithTag(line: String) {
        appendLine("$tag $line")
    }
}

internal const val SEPARATOR =
    "------------------------------------------------------------------------------" +
        "---------------------------------------------------------------------------------------"
