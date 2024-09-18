package sp.bvantur.inspektify.ktor.data.model

typealias NetworkTrafficId = Long

internal data class NetworkTraffic(
    val id: NetworkTrafficId,
    val method: String? = null,
    val url: String? = null,
    val host: String? = null,
    val path: String? = null,
    val protocol: String? = null,
    val requestContentType: String? = null,
    val requestTimestamp: Long? = null,
    val requestHeaders: List<NetworkTrafficHeader>? = null,
    val requestPayload: String? = null,
    val requestPayloadSize: Long? = null,
    val requestHeadersSize: Long? = null,
    val responseContentType: String? = null,
    val responseTimestamp: Long? = null,
    val responseStatus: Int? = null,
    val responseStatusDescription: String? = null,
    val responseHeaders: List<NetworkTrafficHeader>? = null,
    val responsePayload: String? = null,
    val responsePayloadSize: Long? = null,
    val responseHeadersSize: Int? = null,
    val tookDurationInMs: Long? = null,
)
