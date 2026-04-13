package sp.bvantur.inspektify.ktor.details.data.mapper

import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.core.data.utils.NetworkTrafficDataUtils

internal object DetailsNetworkTrafficMapper {

    fun toCurlCommand(networkTrafficData: NetworkTrafficDataLocal): String {
        val method = networkTrafficData.method ?: return "Failed to create cURL command"
        val url = networkTrafficData.url ?: return "Failed to create cURL command"

        return NetworkTrafficDataUtils.buildCurlCommand(
            method = method,
            url = url,
            headers = networkTrafficData.requestHeaders,
            payload = networkTrafficData.requestPayload
        )
    }

    fun toNetworkTrafficContent(networkTrafficData: NetworkTrafficDataLocal): String {
        var clipboardText = ""
        clipboardText += OverviewNetworkTrafficMapper.getOverviewDataAsString(networkTrafficData)
        clipboardText += "\n-------------------------------------------------------\n"
        clipboardText += PayloadNetworkTrafficMapper.getRequestDataAsString(networkTrafficData)
        clipboardText += "\n-------------------------------------------------------\n"
        clipboardText += PayloadNetworkTrafficMapper.getResponseDataAsString(networkTrafficData)
        return clipboardText
    }
}
