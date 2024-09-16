package sp.bvantur.inspektify.shared

internal expect object Platform {
    internal fun isAndroid(): Boolean

    internal fun closeInspektifyWindow()
}
