package sp.bvantur.inspektify.ktor.list.presentation

import sp.bvantur.inspektify.ktor.core.presentation.ViewState
import sp.bvantur.inspektify.ktor.list.domain.usecase.GroupedNetworkTrafficData

internal data class KtorListViewState(
    val items: GroupedNetworkTrafficData = emptyMap(),
    val suggestions: Set<String> = emptySet(),
    val queriedItems: GroupedNetworkTrafficData = emptyMap(),
    val retentionPolicyText: String = "",
    val isSearching: Boolean = false,
    val searchQuery: String = "",
) : ViewState
