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
            "[Inspektify]: REQUEST: https://example.com\n" +
                "[Inspektify]: METHOD: GET\n" +
                "[Inspektify]: CURL\n" +
                "curl -v \\\n\t-X GET \\\n\t\"https://example.com\"\n" +
                SEPARATOR,
            systemLogger.loggedMessages.first()
        )
    }

    @Test
    fun `GIVEN LogLevel Headers is set WHEN logRequest is called THEN only Info and Headers data is logged`() {
        inspektifyLogger.configureLogger(LogLevel.Headers)
        inspektifyLogger.logRequest(networkTraffic)

        assertEquals(1, systemLogger.loggedMessages.size)
        assertEquals(
            "[Inspektify]: REQUEST: https://example.com\n" +
                "[Inspektify]: METHOD: GET\n" +
                "[Inspektify]: HEADERS\n" +
                "[Inspektify]: Header1:[value1, value2]\n" +
                "[Inspektify]: Header2:[value3, value4]\n" +
                "[Inspektify]: Header3:[value5, value6]\n" +
                "\n" +
                "[Inspektify]: CURL\n" +
                "curl -v \\\n\t-X GET \\\n\t-H \"Header1: value1, value2\" \\\n\t-H \"Header2: value3, value4\" " +
                "\\\n\t-H \"Header3: value5, value6\" \\\n\t\"https://example.com\"\n" +
                SEPARATOR,
            systemLogger.loggedMessages.first()
        )
    }

    @Test
    fun `GIVEN LogLevel Body is set WHEN logRequest is called THEN only Info and Body data is logged`() {
        inspektifyLogger.configureLogger(LogLevel.Body)
        inspektifyLogger.logRequest(networkTraffic)

        assertEquals(1, systemLogger.loggedMessages.size)
        assertEquals(
            "[Inspektify]: REQUEST: https://example.com\n" +
                "[Inspektify]: METHOD: GET\n" +
                "[Inspektify]: BODY Content-Type: application/json\n" +
                "[Inspektify]: BODY START\n" +
                "[Inspektify]: Request Payload\n" +
                "[Inspektify]: BODY END\n" +
                "[Inspektify]: CURL\n" +
                "curl -v \\\n\t-X GET \\\n\t-d \"Request Payload\" \\\n\t\"https://example.com\"\n" +
                SEPARATOR,
            systemLogger.loggedMessages.first()
        )
    }

    @Test
    fun `GIVEN LogLevel All is set WHEN logRequest is called THEN all the data is logged`() {
        inspektifyLogger.configureLogger(LogLevel.All)
        inspektifyLogger.logRequest(networkTraffic)

        assertEquals(1, systemLogger.loggedMessages.size)
        assertEquals(
            "[Inspektify]: REQUEST: https://example.com\n" +
                "[Inspektify]: METHOD: GET\n" +
                "[Inspektify]: HEADERS\n" +
                "[Inspektify]: Header1:[value1, value2]\n" +
                "[Inspektify]: Header2:[value3, value4]\n" +
                "[Inspektify]: Header3:[value5, value6]\n" +
                "\n" +
                "[Inspektify]: BODY Content-Type: application/json\n" +
                "[Inspektify]: BODY START\n" +
                "[Inspektify]: Request Payload\n" +
                "[Inspektify]: BODY END\n" +
                "[Inspektify]: CURL\n" +
                "curl -v \\\n\t-X GET \\\n\t-H \"Header1: value1, value2\" \\\n\t-H \"Header2: value3, " +
                "value4\" \\\n\t-H \"Header3: value5, value6\" \\\n\t-d \"Request Payload\" " +
                "\\\n\t\"https://example.com\"\n" +
                SEPARATOR,
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
            "[Inspektify]: RESPONSE: 200\n" +
                "[Inspektify]: METHOD: GET\n" +
                "[Inspektify]: FROM: https://example.com\n" +
                SEPARATOR,
            systemLogger.loggedMessages.first()
        )
    }

    @Test
    fun `GIVEN LogLevel Headers is set WHEN logResponse is called THEN only Info and Headers data is logged`() {
        inspektifyLogger.configureLogger(LogLevel.Headers)
        inspektifyLogger.logResponse(networkTraffic)

        assertEquals(1, systemLogger.loggedMessages.size)
        assertEquals(
            "[Inspektify]: RESPONSE: 200\n" +
                "[Inspektify]: METHOD: GET\n" +
                "[Inspektify]: FROM: https://example.com\n" +
                "[Inspektify]: HEADERS\n" +
                "[Inspektify]: Header1:[value1, value2]\n" +
                "[Inspektify]: Header2:[value3, value4]\n" +
                "[Inspektify]: Header3:[value5, value6]\n" +
                "\n" +
                SEPARATOR,
            systemLogger.loggedMessages.first()
        )
    }

    @Test
    fun `GIVEN LogLevel Body is set WHEN logResponse is called THEN only Info and Body data is logged`() {
        inspektifyLogger.configureLogger(LogLevel.Body)
        inspektifyLogger.logResponse(networkTraffic)

        assertEquals(1, systemLogger.loggedMessages.size)
        assertEquals(
            "[Inspektify]: RESPONSE: 200\n" +
                "[Inspektify]: METHOD: GET\n" +
                "[Inspektify]: FROM: https://example.com\n" +
                "[Inspektify]: BODY Content-Type: application/json\n" +
                "[Inspektify]: BODY START\n" +
                "[Inspektify]: Response Payload\n" +
                "[Inspektify]: BODY END\n" +
                SEPARATOR,
            systemLogger.loggedMessages.first()
        )
    }

    @Test
    fun `GIVEN LogLevel All is set WHEN logResponse is called THEN all the data is logged`() {
        inspektifyLogger.configureLogger(LogLevel.All)
        inspektifyLogger.logResponse(networkTraffic)

        assertEquals(1, systemLogger.loggedMessages.size)
        assertEquals(
            "[Inspektify]: RESPONSE: 200\n" +
                "[Inspektify]: METHOD: GET\n" +
                "[Inspektify]: FROM: https://example.com\n" +
                "[Inspektify]: HEADERS\n" +
                "[Inspektify]: Header1:[value1, value2]\n" +
                "[Inspektify]: Header2:[value3, value4]\n" +
                "[Inspektify]: Header3:[value5, value6]\n" +
                "\n" +
                "[Inspektify]: BODY Content-Type: application/json\n" +
                "[Inspektify]: BODY START\n" +
                "[Inspektify]: Response Payload\n" +
                "[Inspektify]: BODY END\n" +
                SEPARATOR,
            systemLogger.loggedMessages.first()
        )
    }
}
