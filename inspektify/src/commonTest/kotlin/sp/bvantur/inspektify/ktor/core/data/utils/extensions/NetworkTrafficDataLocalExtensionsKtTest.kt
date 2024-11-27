package sp.bvantur.inspektify.ktor.core.data.utils.extensions

import inspektifyroot.inspektify.generated.resources.Res
import inspektifyroot.inspektify.generated.resources.img_http_icon
import inspektifyroot.inspektify.generated.resources.img_https_icon
import kotlinx.datetime.TimeZone
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.ktor.core.domain.utils.KtorPresentationConstants
import sp.bvantur.inspektify.ktor.list.domain.model.StatusColor
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertFalse
import kotlin.test.assertTrue

class NetworkTrafficDataLocalExtensionsKtTest {
    private val networkTrafficDataLocal = NetworkTrafficDataLocal(
        id = 1,
        sessionId = 1,
        method = null,
        url = null,
        host = null,
        path = null,
        protocol = null,
        requestTimestamp = null,
        requestHeaders = null,
        requestPayload = null,
        requestContentType = null,
        requestPayloadSize = null,
        requestHeadersSize = null,
        responseTimestamp = null,
        responseStatus = null,
        responseStatusDescription = null,
        responseHeaders = null,
        responsePayload = null,
        responseContentType = null,
        responsePayloadSize = null,
        responseHeadersSize = null,
        tookDurationInMs = null
    )

    @Test
    fun `GIVEN responseStatus is null WHEN getPresentationStatusCode is called THEN returns correct default StatusCode data`() {
        val data = networkTrafficDataLocal.copy(responseStatus = null)
        val statusCode = data.getPresentationStatusCode()

        assertEquals(KtorPresentationConstants.MISSING_DATA, statusCode.statusCode)
        assertEquals(StatusColor.ORANGE, statusCode.statusColor)
    }

    @Test
    fun `GIVEN responseStatus is in 200 WHEN getPresentationStatusCode is called THEN returns correct default StatusCode data`() {
        var data = networkTrafficDataLocal.copy(responseStatus = 200)
        var statusCode = data.getPresentationStatusCode()

        assertEquals("200", statusCode.statusCode)
        assertEquals(StatusColor.GREEN, statusCode.statusColor)
        data = networkTrafficDataLocal.copy(responseStatus = 299)
        statusCode = data.getPresentationStatusCode()

        assertEquals("299", statusCode.statusCode)
        assertEquals(StatusColor.GREEN, statusCode.statusColor)
    }

    @Test
    fun `GIVEN responseStatus is not in 200 WHEN getPresentationStatusCode is called THEN returns correct default StatusCode data`() {
        var data = networkTrafficDataLocal.copy(responseStatus = 300)
        var statusCode = data.getPresentationStatusCode()

        assertEquals("300", statusCode.statusCode)
        assertEquals(StatusColor.RED, statusCode.statusColor)
        data = networkTrafficDataLocal.copy(responseStatus = 500)
        statusCode = data.getPresentationStatusCode()

        assertEquals("500", statusCode.statusCode)
        assertEquals(StatusColor.RED, statusCode.statusColor)
    }

    @Test
    fun `GIVEN method and path is null WHEN getMethodWithPath is called THEN returns empty data`() {
        val data = networkTrafficDataLocal.copy(method = null, path = null)
        val methodWithPath = data.getMethodWithPath()

        assertEquals("", methodWithPath)
    }

    @Test
    fun `GIVEN method is null and path is not null WHEN getMethodWithPath is called THEN returns only path data`() {
        val data = networkTrafficDataLocal.copy(method = null, path = "path")
        val methodWithPath = data.getMethodWithPath()

        assertEquals("path", methodWithPath)
    }

    @Test
    fun `GIVEN method is not null and path is null WHEN getMethodWithPath is called THEN returns only method data`() {
        val data = networkTrafficDataLocal.copy(method = "method", path = null)
        val methodWithPath = data.getMethodWithPath()

        assertEquals("method", methodWithPath)
    }

    @Test
    fun `GIVEN method and path are not null WHEN getMethodWithPath is called THEN returns all data`() {
        val data = networkTrafficDataLocal.copy(method = "method", path = "path")
        val methodWithPath = data.getMethodWithPath()

        assertEquals("method path", methodWithPath)
    }

    @Test
    fun `GIVEN host is null WHEN getHost is called THEN returns empty data`() {
        val data = networkTrafficDataLocal.copy(host = null)
        val host = data.getHost()

        assertEquals("", host)
    }

    @Test
    fun `GIVEN host is not null WHEN getHost is called THEN returns actual data`() {
        val data = networkTrafficDataLocal.copy(host = "host")
        val host = data.getHost()

        assertEquals("host", host)
    }

    @Test
    fun `GIVEN method is null WHEN getMethod is called THEN returns empty data`() {
        val data = networkTrafficDataLocal.copy(method = null)
        val method = data.getMethod()

        assertEquals("", method)
    }

    @Test
    fun `GIVEN method is not null WHEN getMethod is called THEN returns actual data`() {
        val data = networkTrafficDataLocal.copy(method = "method")
        val method = data.getMethod()

        assertEquals("method", method)
    }

    @Test
    fun `GIVEN requestTimestamp is null WHEN getTime is called THEN returns missing data`() {
        val data = networkTrafficDataLocal.copy(requestTimestamp = null)
        val time = data.getTime()

        assertEquals(KtorPresentationConstants.MISSING_DATA, time)
    }

    @Test
    fun `GIVEN requestTimestamp is not null WHEN getTime is called THEN returns actual data`() {
        val data = networkTrafficDataLocal.copy(requestTimestamp = 1234567890)
        val time = data.getTime(
            systemTimeZone = TimeZone.UTC
        )

        assertEquals("06:56:07", time)
    }

    @Test
    fun `GIVEN responseTimestamp and requestTimestamp are null WHEN getDuration is called THEN returns missing data`() {
        val data = networkTrafficDataLocal.copy(responseTimestamp = null, requestTimestamp = null)
        val duration = data.getDuration()

        assertEquals(KtorPresentationConstants.MISSING_DATA, duration)
    }

    @Test
    fun `GIVEN responseTimestamp is null and requestTimestamp is not null WHEN getDuration is called THEN returns missing data`() {
        val data = networkTrafficDataLocal.copy(responseTimestamp = null, requestTimestamp = 1234567890)
        val duration = data.getDuration()

        assertEquals(KtorPresentationConstants.MISSING_DATA, duration)
    }

    @Test
    fun `GIVEN responseTimestamp is not null and requestTimestamp is null WHEN getDuration is called THEN returns missing data`() {
        val data = networkTrafficDataLocal.copy(responseTimestamp = null, requestTimestamp = 1234567890)
        val duration = data.getDuration()

        assertEquals(KtorPresentationConstants.MISSING_DATA, duration)
    }

    @Test
    fun `GIVEN responseTimestamp and requestTimestamp are not null WHEN getDuration is called THEN returns actual data`() {
        val data = networkTrafficDataLocal.copy(responseTimestamp = 1234567890, requestTimestamp = 1234566000)
        val duration = data.getDuration()

        assertEquals("1.8 s", duration)
    }

    @Test
    fun `GIVEN responsePayloadSize responseHeadersSize requestPayloadSize and requestHeadersSize are null WHEN getSize is called THEN returns 0 formatted size`() {
        val data = networkTrafficDataLocal.copy(
            responsePayloadSize = null,
            responseHeadersSize = null,
            requestPayloadSize = null,
            requestHeadersSize = null
        )
        val size = data.getSize()

        assertEquals("0 B", size)
    }

    @Test
    fun `GIVEN responsePayloadSize is not null and responseHeadersSize requestPayloadSize and requestHeadersSize are null WHEN getSize is called THEN returns size of response payload`() {
        val data = networkTrafficDataLocal.copy(
            responsePayloadSize = 100,
            responseHeadersSize = null,
            requestPayloadSize = null,
            requestHeadersSize = null
        )
        val size = data.getSize()

        assertEquals("100 B", size)
    }

    @Test
    fun `GIVEN responseHeadersSize is not null and responsePayloadSize requestPayloadSize and requestHeadersSize are null WHEN getSize is called THEN returns size of response headers`() {
        val data = networkTrafficDataLocal.copy(
            responsePayloadSize = null,
            responseHeadersSize = 200,
            requestPayloadSize = null,
            requestHeadersSize = null
        )
        val size = data.getSize()

        assertEquals("200 B", size)
    }

    @Test
    fun `GIVEN requestPayloadSize is not null and responsePayloadSize responseHeadersSize and requestHeadersSize are null WHEN getSize is called THEN returns size of response payload`() {
        val data = networkTrafficDataLocal.copy(
            responsePayloadSize = null,
            responseHeadersSize = null,
            requestPayloadSize = 300,
            requestHeadersSize = null
        )
        val size = data.getSize()

        assertEquals("300 B", size)
    }

    @Test
    fun `GIVEN requestHeadersSize is not null and responsePayloadSize responseHeadersSize and requestPayloadSize are null WHEN getSize is called THEN returns size of response header`() {
        val data = networkTrafficDataLocal.copy(
            responsePayloadSize = null,
            responseHeadersSize = null,
            requestPayloadSize = null,
            requestHeadersSize = 400
        )
        val size = data.getSize()

        assertEquals("400 B", size)
    }

    @Test
    fun `GIVEN requestHeadersSize and responsePayloadSize responseHeadersSize and requestPayloadSize are not null WHEN getSize is called THEN returns size of response header`() {
        val data = networkTrafficDataLocal.copy(
            responsePayloadSize = 100,
            responseHeadersSize = 200,
            requestPayloadSize = 300,
            requestHeadersSize = 400
        )
        val size = data.getSize()

        assertEquals("1000 B", size)
    }

    @Test
    fun `GIVEN protocol is null WHEN getHostImage is called THEN returns http icon`() {
        val data = networkTrafficDataLocal.copy(protocol = null)
        val hostImage = data.getHostImage()

        assertEquals(Res.drawable.img_http_icon, hostImage)
    }

    @Test
    fun `GIVEN protocol is http WHEN getHostImage is called THEN returns http icon`() {
        val data = networkTrafficDataLocal.copy(protocol = "http")
        val hostImage = data.getHostImage()

        assertEquals(Res.drawable.img_http_icon, hostImage)
    }

    @Test
    fun `GIVEN protocol is https WHEN getHostImage is called THEN returns https icon`() {
        val data = networkTrafficDataLocal.copy(protocol = "https")
        val hostImage = data.getHostImage()

        assertEquals(Res.drawable.img_https_icon, hostImage)
    }

    @Test
    fun `GIVEN date is null WHEN getDate is called THEN returns 01 01 1970 date`() {
        val data = networkTrafficDataLocal.copy(requestTimestamp = null)
        val date = data.getDate(
            systemTimeZone = TimeZone.UTC
        )

        assertEquals("01. 01. 1970", date)
    }

    @Test
    fun `GIVEN date is 0 WHEN getDate is called THEN returns 01 01 1970 date`() {
        val data = networkTrafficDataLocal.copy(requestTimestamp = 0)
        val date = data.getDate(
            systemTimeZone = TimeZone.UTC
        )

        assertEquals("01. 01. 1970", date)
    }

    @Test
    fun `GIVEN date has correct value WHEN getDate is called THEN returns correctly formatted date`() {
        val data = networkTrafficDataLocal.copy(requestTimestamp = 1234567890000)
        val date = data.getDate(
            systemTimeZone = TimeZone.UTC
        )

        assertEquals("13. 02. 2009", date)
    }

    @Test
    fun `GIVEN responseStatus is null WHEN isCompleted is called THEN returns false`() {
        val data = networkTrafficDataLocal.copy(responseStatus = null)

        assertFalse {
            data.isCompleted()
        }
    }

    @Test
    fun `GIVEN responseStatus is not null WHEN isCompleted is called THEN returns true`() {
        val data = networkTrafficDataLocal.copy(responseStatus = 200)

        assertTrue {
            data.isCompleted()
        }
    }

    @Test
    fun `GIVEN requestTimestamp is null and sessionTimestamp is set WHEN isFromActiveSession is called THEN returns false`() {
        val data = networkTrafficDataLocal.copy(requestTimestamp = null)

        assertFalse {
            data.isFromActiveSession(sessionTimestamp = 1234567890000)
        }
    }

    @Test
    fun `GIVEN requestTimestamp is lower then and sessionTimestamp is set WHEN isFromActiveSession is called THEN returns false`() {
        val data = networkTrafficDataLocal.copy(requestTimestamp = 1234567820000)

        assertFalse {
            data.isFromActiveSession(sessionTimestamp = 1234567890000)
        }
    }

    @Test
    fun `GIVEN requestTimestamp is higher then and sessionTimestamp is set WHEN isFromActiveSession is called THEN returns false`() {
        val data = networkTrafficDataLocal.copy(requestTimestamp = 1234567920000)

        assertTrue {
            data.isFromActiveSession(sessionTimestamp = 1234567890000)
        }
    }
}
