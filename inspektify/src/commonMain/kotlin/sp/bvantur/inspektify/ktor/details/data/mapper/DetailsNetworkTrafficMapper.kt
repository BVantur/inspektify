package sp.bvantur.inspektify.ktor.details.data.mapper

import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.core.data.utils.NetworkTrafficDataUtils

internal object DetailsNetworkTrafficMapper {

    fun toCurlCommand(networkTrafficData: NetworkTrafficDataLocal): String {
        val errorMessage = "Failed to create cURL command"
        val method = networkTrafficData.method ?: return errorMessage
        val url = networkTrafficData.url ?: return errorMessage

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
