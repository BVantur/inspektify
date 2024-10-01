package sp.bvantur.inspektify.ktor.presentation.networktrafficlist

import sp.bvantur.inspektify.ktor.presentation.base.SingleEvent

internal sealed interface NetworkTrafficListEvent : SingleEvent {
    data class ToNetworkDetails(val id: Long) : NetworkTrafficListEvent
    data object MoveFocusOnSearch : NetworkTrafficListEvent
    data object RemoveFocusFromSearch : NetworkTrafficListEvent
}
