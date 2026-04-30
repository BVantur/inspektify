package sp.bvantur.inspektify.ktor.client.shared

import sp.bvantur.inspektify.ktor.AutoDetectTarget

internal actual fun configurePresentation(autoDetectEnabledFor: Set<AutoDetectTarget>, shortcutEnabled: Boolean) {
    // No-op for web - could set up keyboard shortcuts if needed
}

internal actual fun startInspektifyWindow() {
    // No-op for web - could open a modal or new tab if needed
}

internal actual fun disposeInspektifyWindow() {
    // No-op for web - could close modal or clean up resources if needed
}