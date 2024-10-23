package sp.bvantur.inspektify.ktor.client.shared

import sp.bvantur.inspektify.ktor.PresentationConfig

internal expect fun configurePresentationType(presentationConfig: PresentationConfig)

internal expect fun startInspektifyWindow()

internal expect fun disposeInspektifyWindow()
