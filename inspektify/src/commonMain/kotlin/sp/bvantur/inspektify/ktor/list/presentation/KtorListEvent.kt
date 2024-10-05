package sp.bvantur.inspektify.ktor.list.presentation

import sp.bvantur.inspektify.ktor.core.presentation.SingleEvent

internal sealed interface KtorListEvent : SingleEvent {
    data class ToNetworkDetails(val id: Long) : KtorListEvent
    data object MoveFocusOnSearch : KtorListEvent
    data object RemoveFocusFromSearch : KtorListEvent
}
