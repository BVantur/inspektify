package sp.bvantur.inspektify.ktor.overview.presentation

import sp.bvantur.inspektify.ktor.core.presentation.ViewState

internal data class NetworkTrafficDetailsOverviewViewState(
    val url: String? = null,
    val method: String? = null,
    val protocol: String? = null,
    val status: String? = null,
    val response: String? = null,
    val ssl: String? = null,
    val requestTime: String? = null,
    val responseTime: String? = null,
    val duration: String? = null,
    val requestSize: String? = null,
    val responseSize: String? = null,
    val totalSize: String? = null,
) : ViewState
