package sp.bvantur.inspektify.ktor.details.presentation

import sp.bvantur.inspektify.ktor.core.presentation.ViewState

internal data class NetworkTrafficDetailsViewState(val networkTrafficId: Long = -1, val title: String = "") : ViewState
