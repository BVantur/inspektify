package sp.bvantur.inspektify.ktor.client.shared

import sp.bvantur.inspektify.ktor.AutoDetectTarget

internal actual fun configurePresentation(
    autoDetectEnabledFor: Set<AutoDetectTarget>,
    shortcutEnabled: Boolean
) {
}

internal actual fun startInspektifyWindow() {
}

internal actual fun disposeInspektifyWindow() {
}
