package sp.bvantur.inspektify.ktor.client.data

import sp.bvantur.inspektify.ktor.LogLevel
import sp.bvantur.inspektify.ktor.client.domain.model.NetworkTraffic
import testutils.extensions.toEntry
import testutils.mocks.TestSystemLogger
import kotlin.test.BeforeTest
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue

class InspektifyNetworkTrafficLoggerTest {

    private val systemLogger = TestSystemLogger()

    private lateinit var inspektifyLogger: InspektifyNetworkTrafficLogger

    private val networkTraffic = NetworkTraffic(
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

    @BeforeTest
    fun setup() {
        inspektifyLogger = InspektifyNetworkTrafficLogger(systemLogger)
    }

    @Test
    fun `GIVEN LogLevel None is set WHEN logRequest is called THEN nothing is logged`() {
        inspektifyLogger.configureLogger(LogLevel.None)
        inspektifyLogger.logRequest(networkTraffic)

        assertTrue(systemLogger.loggedMessages.isEmpty())
    }

    @Test
    fun `GIVEN LogLevel Info is set WHEN logRequest is called THEN only Info data is logged`() {
        inspektifyLogger.configureLogger(LogLevel.Info)
        inspektifyLogger.logRequest(networkTraffic)

        assertEquals(1, systemLogger.loggedMessages.size)
        assertEquals(
            "[InspektifyHttpClient]: REQUEST: https://example.com\n" +
                "[InspektifyHttpClient]: METHOD: GET",
            systemLogger.loggedMessages.first()
        )
    }

    @Test
    fun `GIVEN LogLevel Headers is set WHEN logRequest is called THEN only Info and Headers data is logged`() {
        inspektifyLogger.configureLogger(LogLevel.Headers)
        inspektifyLogger.logRequest(networkTraffic)

        assertEquals(1, systemLogger.loggedMessages.size)
        assertEquals(
            "[InspektifyHttpClient]: REQUEST: https://example.com\n" +
                "[InspektifyHttpClient]: METHOD: GET\n" +
                "[InspektifyHttpClient]: HEADERS\n" +
                "[InspektifyHttpClient]: Header1:[value1, value2]\n" +
                ", [InspektifyHttpClient]: Header2:[value3, value4]\n" +
                ", [InspektifyHttpClient]: Header3:[value5, value6]",
            systemLogger.loggedMessages.first()
        )
    }

    @Test
    fun `GIVEN LogLevel Body is set WHEN logRequest is called THEN only Info and Body data is logged`() {
        inspektifyLogger.configureLogger(LogLevel.Body)
        inspektifyLogger.logRequest(networkTraffic)

        assertEquals(1, systemLogger.loggedMessages.size)
        assertEquals(
            "[InspektifyHttpClient]: REQUEST: https://example.com\n" +
                "[InspektifyHttpClient]: METHOD: GET\n" +
                "[InspektifyHttpClient]: BODY Content-Type: application/json\n" +
                "[InspektifyHttpClient]: BODY START\n" +
                "[InspektifyHttpClient]: Request Payload\n" +
                "[InspektifyHttpClient]: BODY END",
            systemLogger.loggedMessages.first()
        )
    }

    @Test
    fun `GIVEN LogLevel All is set WHEN logRequest is called THEN all the data is logged`() {
        inspektifyLogger.configureLogger(LogLevel.All)
        inspektifyLogger.logRequest(networkTraffic)

        assertEquals(1, systemLogger.loggedMessages.size)
        assertEquals(
            "[InspektifyHttpClient]: REQUEST: https://example.com\n" +
                "[InspektifyHttpClient]: METHOD: GET\n" +
                "[InspektifyHttpClient]: HEADERS\n" +
                "[InspektifyHttpClient]: Header1:[value1, value2]\n" +
                ", [InspektifyHttpClient]: Header2:[value3, value4]\n" +
                ", [InspektifyHttpClient]: Header3:[value5, value6]\n" +
                "\n" +
                "[InspektifyHttpClient]: BODY Content-Type: application/json\n" +
                "[InspektifyHttpClient]: BODY START\n" +
                "[InspektifyHttpClient]: Request Payload\n" +
                "[InspektifyHttpClient]: BODY END",
            systemLogger.loggedMessages.first()
        )
    }

    @Test
    fun `GIVEN LogLevel None is set WHEN logResponse is called THEN nothing is logged`() {
        inspektifyLogger.configureLogger(LogLevel.None)
        inspektifyLogger.logResponse(networkTraffic)

        assertTrue(systemLogger.loggedMessages.isEmpty())
    }

    @Test
    fun `GIVEN LogLevel Info is set WHEN logResponse is called THEN only Info data is logged`() {
        inspektifyLogger.configureLogger(LogLevel.Info)
        inspektifyLogger.logResponse(networkTraffic)

        assertEquals(1, systemLogger.loggedMessages.size)
        assertEquals(
            "[InspektifyHttpClient]: RESPONSE: 200\n" +
                "[InspektifyHttpClient]: METHOD: GET\n" +
                "[InspektifyHttpClient]: FROM: https://example.com",
            systemLogger.loggedMessages.first()
        )
    }

    @Test
    fun `GIVEN LogLevel Headers is set WHEN logResponse is called THEN only Info and Headers data is logged`() {
        inspektifyLogger.configureLogger(LogLevel.Headers)
        inspektifyLogger.logResponse(networkTraffic)

        assertEquals(1, systemLogger.loggedMessages.size)
        assertEquals(
            "[InspektifyHttpClient]: RESPONSE: 200\n" +
                "[InspektifyHttpClient]: METHOD: GET\n" +
                "[InspektifyHttpClient]: FROM: https://example.com\n" +
                "[InspektifyHttpClient]: HEADERS\n" +
                "[InspektifyHttpClient]: Header1:[value1, value2]\n" +
                ", [InspektifyHttpClient]: Header2:[value3, value4]\n" +
                ", [InspektifyHttpClient]: Header3:[value5, value6]",
            systemLogger.loggedMessages.first()
        )
    }

    @Test
    fun `GIVEN LogLevel Body is set WHEN logResponse is called THEN only Info and Body data is logged`() {
        inspektifyLogger.configureLogger(LogLevel.Body)
        inspektifyLogger.logResponse(networkTraffic)

        assertEquals(1, systemLogger.loggedMessages.size)
        assertEquals(
            "[InspektifyHttpClient]: RESPONSE: 200\n" +
                "[InspektifyHttpClient]: METHOD: GET\n" +
                "[InspektifyHttpClient]: FROM: https://example.com\n" +
                "[InspektifyHttpClient]: BODY Content-Type: application/json\n" +
                "[InspektifyHttpClient]: BODY START\n" +
                "[InspektifyHttpClient]: Response Payload\n" +
                "[InspektifyHttpClient]: BODY END",
            systemLogger.loggedMessages.first()
        )
    }

    @Test
    fun `GIVEN LogLevel All is set WHEN logResponse is called THEN all the data is logged`() {
        inspektifyLogger.configureLogger(LogLevel.All)
        inspektifyLogger.logResponse(networkTraffic)

        assertEquals(1, systemLogger.loggedMessages.size)
        assertEquals(
            "[InspektifyHttpClient]: RESPONSE: 200\n" +
                "[InspektifyHttpClient]: METHOD: GET\n" +
                "[InspektifyHttpClient]: FROM: https://example.com\n" +
                "[InspektifyHttpClient]: HEADERS\n" +
                "[InspektifyHttpClient]: Header1:[value1, value2]\n" +
                ", [InspektifyHttpClient]: Header2:[value3, value4]\n" +
                ", [InspektifyHttpClient]: Header3:[value5, value6]\n" +
                "\n" +
                "[InspektifyHttpClient]: BODY Content-Type: application/json\n" +
                "[InspektifyHttpClient]: BODY START\n" +
                "[InspektifyHttpClient]: Response Payload\n" +
                "[InspektifyHttpClient]: BODY END",
            systemLogger.loggedMessages.first()
        )
    }
}
