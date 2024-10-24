package sp.bvantur.inspektify.ktor.client.shared

internal expect fun configurePresentation(autoDetectEnabled: Boolean, shortcutEnabled: Boolean)

internal expect fun startInspektifyWindow()

internal expect fun disposeInspektifyWindow()
