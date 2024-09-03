package sp.bvantur.inspektify.ktor.presentation.details

import sp.bvantur.inspektify.ktor.data.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.presentation.base.BaseViewState

internal data class NetworkTrafficDetailsViewState(val networkTraffic: NetworkTraffic? = null) : BaseViewState
