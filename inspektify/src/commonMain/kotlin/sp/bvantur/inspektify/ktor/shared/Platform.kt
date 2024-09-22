package sp.bvantur.inspektify.ktor.shared

internal expect object Platform {
    fun closeInspektifyWindow()

    fun isAndroid(): Boolean
}
