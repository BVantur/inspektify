package sp.bvantur.inspektify.ktor.client.shared

internal expect object Platform {
    fun closeInspektifyWindow()

    fun isAndroid(): Boolean
}
