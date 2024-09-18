package sp.bvantur.inspektify.ktor.presentation.networktrafficlist

import sp.bvantur.inspektify.ktor.domain.usecase.GroupedNetworkTrafficData
import sp.bvantur.inspektify.ktor.presentation.base.BaseViewState

internal data class NetworkTrafficListViewState(val items: GroupedNetworkTrafficData = emptyMap()) : BaseViewState
