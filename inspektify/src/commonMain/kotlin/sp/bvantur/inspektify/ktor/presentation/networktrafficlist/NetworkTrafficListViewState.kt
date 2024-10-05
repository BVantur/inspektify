package sp.bvantur.inspektify.ktor.presentation.networktrafficlist

import sp.bvantur.inspektify.ktor.domain.usecase.GroupedNetworkTrafficData
import sp.bvantur.inspektify.ktor.presentation.base.BaseViewState

internal data class NetworkTrafficListViewState(
    val items: GroupedNetworkTrafficData = emptyMap(),
    val suggestions: Set<String> = emptySet(),
    val queriedItems: GroupedNetworkTrafficData = emptyMap(),
    val retentionPolicyText: String = "",
    val isSearching: Boolean = false,
    val searchQuery: String = "",
) : BaseViewState
