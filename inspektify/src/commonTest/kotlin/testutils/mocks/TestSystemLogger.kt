package testutils.mocks

import sp.bvantur.inspektify.ktor.client.data.SystemLogger

class TestSystemLogger : SystemLogger {
    val loggedMessages = mutableListOf<String>()

    override fun log(message: String) {
        loggedMessages.add(message)
    }
}
