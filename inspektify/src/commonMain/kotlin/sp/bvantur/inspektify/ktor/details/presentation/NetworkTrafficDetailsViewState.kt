package sp.bvantur.inspektify.ktor.details.presentation

import sp.bvantur.inspektify.ktor.client.shared.Platform
import sp.bvantur.inspektify.ktor.core.presentation.ViewState

internal data class NetworkTrafficDetailsViewState(
    val networkTrafficId: Long = -1,
    val title: String = "",
    val showFeedbackMessage: Boolean = false,
    val showShareAction: Boolean = !Platform.getTargetType().isDesktop()
) : ViewState
