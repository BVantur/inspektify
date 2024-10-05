package sp.bvantur.inspektify.ktor.overview.presentation

import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.ktor.core.presentation.ViewStateViewModel
import sp.bvantur.inspektify.ktor.overview.di.KtorOverviewModule
import sp.bvantur.inspektify.ktor.overview.domain.KtorOverviewRepository

internal class NetworkTrafficDetailsOverviewViewModel(
    private val networkTrafficId: Long?,
    private val repository: KtorOverviewRepository = KtorOverviewModule.getKtorOverviewRepository()
) : ViewStateViewModel<NetworkTrafficDetailsOverviewViewState>(NetworkTrafficDetailsOverviewViewState()) {

    override fun initialLoadData() {
        super.initialLoadData()
        viewModelScope.launch {
            // TODO handle nullable id
            val overviewDetails = repository.getTransactionOverviewDetails(networkTrafficId ?: return@launch)
            emitViewState { viewState ->
                viewState.copy(
                    url = overviewDetails.url,
                    method = overviewDetails.method,
                    protocol = overviewDetails.protocol,
                    status = overviewDetails.status,
                    response = overviewDetails.response,
                    ssl = overviewDetails.ssl,
                    requestTime = overviewDetails.requestTime,
                    responseTime = overviewDetails.responseTime,
                    duration = overviewDetails.duration,
                    requestSize = overviewDetails.requestSize,
                    responseSize = overviewDetails.responseSize,
                    totalSize = overviewDetails.totalSize
                )
            }
        }
    }
}
