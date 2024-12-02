package sp.bvantur.inspektify.ktor.details.data.mapper

import kotlinx.serialization.json.Json
import sp.bvantur.inspektify.NetworkTrafficDataLocal

internal object DetailsNetworkTrafficMapper {

    fun toCurlCommand(networkTrafficData: NetworkTrafficDataLocal): String {
        val errorMessage = "Failed to create cURL command"
        val method = networkTrafficData.method ?: return errorMessage
        val url = networkTrafficData.url ?: return errorMessage

        val components = mutableListOf("curl -v")

        components.add("-X $method")

        networkTrafficData.requestHeaders?.forEach { (key, value) ->
            val escapedValue = value.joinToString().replace("\"", "\\\"")
            components.add("-H \"$key: $escapedValue\"")
        }

        networkTrafficData.requestPayload?.let { payload ->
            var escapedBody = payload.replace("\\\"", "\\\\\"")
            escapedBody = escapedBody.replace("\"", "\\\"")
            components.add("-d \"$escapedBody\"")
        }

        components.add("\"$url\"")

        return components.joinToString(separator = " \\\n\t")
    }

    fun toNetworkTrafficContent(networkTrafficData: NetworkTrafficDataLocal, json: Json): String {
        var clipboardText = ""
        clipboardText += OverviewNetworkTrafficMapper.getOverviewDataAsString(networkTrafficData)
        clipboardText += "\n-------------------------------------------------------\n"
        clipboardText += PayloadNetworkTrafficMapper.getRequestDataAsString(networkTrafficData, json)
        clipboardText += "\n-------------------------------------------------------\n"
        clipboardText += PayloadNetworkTrafficMapper.getResponseDataAsString(networkTrafficData, json)
        return clipboardText
    }
}
