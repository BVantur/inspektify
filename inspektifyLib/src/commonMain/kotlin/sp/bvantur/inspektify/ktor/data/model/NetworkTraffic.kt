package sp.bvantur.inspektify.ktor.data.model

data class NetworkTraffic(
    val id: Long,
    val method: String? = null,
    val url: String? = null,
    val host: String? = null,
    val path: String? = null,
    val protocol: String? = null,
    val requestTimestamp: Long? = null,
    val requestHeaders: List<NetworkTrafficHeader>? = null,
    val requestPayload: String? = null,
    val requestPayloadSize: Long? = null,
    val requestHeadersSize: Long? = null,
    val responseTimestamp: Long? = null,
    val responseStatus: Int? = null,
    val responseStatusDescription: String? = null,
    val responseHeaders: List<NetworkTrafficHeader>? = null,
    val responsePayload: String? = null,
    val responsePayloadSize: Int? = null,
    val responseHeadersSize: Int? = null,
    val tookDurationInMs: Long? = null,
)
