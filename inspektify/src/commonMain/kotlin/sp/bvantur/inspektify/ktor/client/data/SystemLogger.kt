package sp.bvantur.inspektify.ktor.client.data

internal interface SystemLogger {
    fun log(message: String)
}
internal class SystemLoggerImpl : SystemLogger {
    override fun log(message: String) {
        println(message)
    }
}
