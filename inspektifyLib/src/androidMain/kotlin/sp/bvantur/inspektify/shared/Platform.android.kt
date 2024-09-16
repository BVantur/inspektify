package sp.bvantur.inspektify.shared

internal actual object Platform {
    internal actual fun isAndroid(): Boolean = true

    internal actual fun closeInspektifyWindow() {
        // empty method for now
    }
}
