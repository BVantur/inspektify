package sp.bvantur.inspektify.ktor.details.presentation

import sp.bvantur.inspektify.ktor.core.presentation.SingleEvent

internal sealed interface NetworkTrafficDetailsEvent : SingleEvent {
    data object MoveFocusOnSearch : NetworkTrafficDetailsEvent
    data object RemoveFocusFromSearch : NetworkTrafficDetailsEvent
    data object OnNavigateBack : NetworkTrafficDetailsEvent
}
