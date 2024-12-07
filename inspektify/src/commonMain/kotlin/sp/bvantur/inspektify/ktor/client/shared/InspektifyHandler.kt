package sp.bvantur.inspektify.ktor.client.shared

import sp.bvantur.inspektify.ktor.AutoDetectTarget

internal expect fun configurePresentation(autoDetectEnabledFor: Set<AutoDetectTarget>, shortcutEnabled: Boolean)

internal expect fun startInspektifyWindow()

internal expect fun disposeInspektifyWindow()
