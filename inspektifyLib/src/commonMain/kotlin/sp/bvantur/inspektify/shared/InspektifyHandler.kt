package sp.bvantur.inspektify.shared

import sp.bvantur.inspektify.ktor.PresentationType

internal expect fun configurePresentationType(presentationType: PresentationType)

internal expect fun startInspektifyWindow()
