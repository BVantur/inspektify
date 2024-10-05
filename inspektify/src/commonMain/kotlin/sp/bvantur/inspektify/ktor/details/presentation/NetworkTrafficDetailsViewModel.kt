package sp.bvantur.inspektify.ktor.details.presentation

import androidx.lifecycle.SavedStateHandle
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.ktor.client.shared.CopyNetworkTrafficHandler
import sp.bvantur.inspektify.ktor.client.shared.ShareNetworkTrafficHandler
import sp.bvantur.inspektify.ktor.core.presentation.ViewModelUserActionHandler
import sp.bvantur.inspektify.ktor.core.presentation.ViewStateViewModel
import sp.bvantur.inspektify.ktor.details.di.KtorDetailsModule
import sp.bvantur.inspektify.ktor.details.domain.KtorDetailsRepository
import sp.bvantur.inspektify.ktor.details.ui.navigation.NETWORK_TRAFFIC_ID

internal class NetworkTrafficDetailsViewModel(
    private val savedStateHandle: SavedStateHandle,
    private val repository: KtorDetailsRepository = KtorDetailsModule.getRepository()
) : ViewStateViewModel<NetworkTrafficDetailsViewState>(NetworkTrafficDetailsViewState()),
    ViewModelUserActionHandler<KtorDetailsUserAction> {

    override fun initialLoadData() {
        super.initialLoadData()
        val trafficId = savedStateHandle.get<Long>(NETWORK_TRAFFIC_ID) ?: return
        viewModelScope.launch {
            emitViewState { viewState ->
                viewState.copy(
                    networkTrafficId = trafficId,
                    title = repository.getTitle(id = trafficId)
                )
            }
        }
    }

    private fun onCurlAction() {
        viewModelScope.launch {
            ShareNetworkTrafficHandler.shareNetworkTrafficContent(
                repository.getCurlContent(viewStateFlow.value.networkTrafficId)
            )
        }
    }

    private fun onShareAction() {
        viewModelScope.launch {
            ShareNetworkTrafficHandler.shareNetworkTrafficContent(
                repository.getWholeNetworkTrafficContent(viewStateFlow.value.networkTrafficId)
            )
        }
    }

    private fun onCopyAction() {
        viewModelScope.launch {
            CopyNetworkTrafficHandler.copyToClipboard(
                repository.getWholeNetworkTrafficContent(viewStateFlow.value.networkTrafficId)
            )
        }
    }

    override fun onUserAction(userAction: KtorDetailsUserAction) {
        when (userAction) {
            KtorDetailsUserAction.OnCopyToClipboard -> onCopyAction()
            KtorDetailsUserAction.OnGetCurl -> onCurlAction()
            KtorDetailsUserAction.OnShare -> onShareAction()
        }
    }
}
