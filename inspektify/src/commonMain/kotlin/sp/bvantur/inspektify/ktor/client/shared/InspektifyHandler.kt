package sp.bvantur.inspektify.ktor.client.shared

import sp.bvantur.inspektify.ktor.PresentationType

// TODO remove PresentationType when going to stable
internal expect fun configurePresentation(
    autoDetectEnabled: Boolean,
    shortcutEnabled: Boolean,
    presentationType: PresentationType?
)

internal expect fun startInspektifyWindow()

internal expect fun disposeInspektifyWindow()
