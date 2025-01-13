package sp.bvantur.inspektify.ktor.core.data.mappers

import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.client.data.model.NetworkTrafficLocalData

internal fun NetworkTrafficLocalData.toNetworkTrafficDataLocal(): NetworkTrafficDataLocal {
    return NetworkTrafficDataLocal(
        id = this.id,
        sessionId = this.sessionId,
        method = this.method,
        url = this.url,
        host = this.host,
        path = this.path,
        protocol = this.protocol,
        requestTimestamp = this.requestTimestamp,
        requestHeaders = this.requestHeaders,
        requestPayload = this.requestPayload,
        requestContentType = this.requestContentType,
        requestPayloadSize = this.requestPayloadSize,
        requestHeadersSize = this.requestHeadersSize,
        responseTimestamp = this.responseTimestamp,
        responseStatus = this.responseStatus,
        responseStatusDescription = this.responseStatusDescription,
        responseHeaders = this.responseHeaders,
        responsePayload = this.responsePayload,
        responseContentType = this.responseContentType,
        responsePayloadSize = this.responsePayloadSize,
        responseHeadersSize = this.responseHeadersSize,
        tookDurationInMs = this.tookDurationInMs
    )
}
