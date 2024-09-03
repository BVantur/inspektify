package sp.bvantur.inspektify.ktor.data.utils.extensions

import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.data.model.NetworkTraffic

internal fun NetworkTrafficDataLocal.toNetworkTraffic(): NetworkTraffic = NetworkTraffic(
    id = id,
    method = method,
    url = url,
    host = host,
    path = path,
    protocol = protocol,
    requestTimestamp = requestTimestamp,
    requestHeaders = requestHeaders,
    requestPayload = requestPayload,
    requestPayloadSize = requestPayloadSize,
    requestHeadersSize = requestHeadersSize,
    responseTimestamp = responseTimestamp,
    responseStatus = responseStatus?.toInt(),
    responseStatusDescription = responseStatusDescription,
    responseHeaders = responseHeaders,
    responsePayload = responsePayload,
    responsePayloadSize = responsePayloadSize,
    responseHeadersSize = responseHeadersSize?.toInt(),
    tookDurationInMs = tookDurationInMs,
)
