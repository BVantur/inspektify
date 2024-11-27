package sp.bvantur.inspektify.ktor.core.data.utils.extensions

import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.client.domain.model.NetworkTraffic
import testutils.extensions.toEntry
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertNotNull

class NetworkTrafficDataExtensionsKtTest {
    @Test
    fun `GIVEN local data instance WHEN toNetworkTraffic is called THEN returns domain NetworkTraffic model`() {
        val networkTrafficDataLocal = NetworkTrafficDataLocal(
            id = 1,
            sessionId = 1,
            method = "GET",
            url = "https://example.com",
            host = "example.com",
            path = "/path",
            protocol = "HTTP/1.1",
            requestTimestamp = 1234567890,
            requestHeaders = setOf(
                "Header1" to listOf("value1", "value2"),
                "Header2" to listOf("value3", "value4"),
                "Header3" to listOf("value5", "value6")
            ).map { it.toEntry() }.toSet(),
            requestPayload = "Request Payload",
            requestContentType = "application/json",
            requestPayloadSize = 1024,
            requestHeadersSize = 512,
            responseTimestamp = 1234567890,
            responseStatus = 200,
            responseStatusDescription = "OK",
            responseHeaders = setOf(
                "Header1" to listOf("value1", "value2"),
                "Header2" to listOf("value3", "value4"),
                "Header3" to listOf("value5", "value6")
            ).map { it.toEntry() }.toSet(),
            responsePayload = "Response Payload",
            responseContentType = "application/json",
            responsePayloadSize = 2048,
            responseHeadersSize = 1024,
            tookDurationInMs = 1000
        )
        val networkTraffic = networkTrafficDataLocal.toNetworkTraffic()

        assertNotNull(networkTraffic as? NetworkTraffic)
        assertEquals(networkTrafficDataLocal.id, networkTraffic.id)
        assertEquals(networkTrafficDataLocal.sessionId, networkTraffic.sessionId)
        assertEquals(networkTrafficDataLocal.method, networkTraffic.method)
        assertEquals(networkTrafficDataLocal.url, networkTraffic.url)
        assertEquals(networkTrafficDataLocal.host, networkTraffic.host)
        assertEquals(networkTrafficDataLocal.path, networkTraffic.path)
        assertEquals(networkTrafficDataLocal.protocol, networkTraffic.protocol)
        assertEquals(networkTrafficDataLocal.requestTimestamp, networkTraffic.requestTimestamp)
        assertEquals(networkTrafficDataLocal.requestHeaders, networkTraffic.requestHeaders)
        assertEquals(networkTrafficDataLocal.requestPayload, networkTraffic.requestPayload)
        assertEquals(networkTrafficDataLocal.requestContentType, networkTraffic.requestContentType)
        assertEquals(networkTrafficDataLocal.requestPayloadSize, networkTraffic.requestPayloadSize)
        assertEquals(networkTrafficDataLocal.requestHeadersSize, networkTraffic.requestHeadersSize)
        assertEquals(networkTrafficDataLocal.responseTimestamp, networkTraffic.responseTimestamp)
        assertEquals(networkTrafficDataLocal.responseStatus?.toInt(), networkTraffic.responseStatus)
        assertEquals(networkTrafficDataLocal.responseStatusDescription, networkTraffic.responseStatusDescription)
        assertEquals(networkTrafficDataLocal.responseHeaders, networkTraffic.responseHeaders)
        assertEquals(networkTrafficDataLocal.responsePayload, networkTraffic.responsePayload)
        assertEquals(networkTrafficDataLocal.responseContentType, networkTraffic.responseContentType)
        assertEquals(networkTrafficDataLocal.responsePayloadSize, networkTraffic.responsePayloadSize)
        assertEquals(networkTrafficDataLocal.responseHeadersSize?.toInt(), networkTraffic.responseHeadersSize)
        assertEquals(networkTrafficDataLocal.tookDurationInMs, networkTraffic.tookDurationInMs)
    }
}
