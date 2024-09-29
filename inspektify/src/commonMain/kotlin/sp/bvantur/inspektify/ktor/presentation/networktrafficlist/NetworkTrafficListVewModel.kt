package sp.bvantur.inspektify.ktor.presentation.networktrafficlist

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.ktor.domain.usecase.GetAllNetworkTrafficDataUseCase
import sp.bvantur.inspektify.ktor.domain.usecase.GetCurrentSessionRetentionPolicy
import sp.bvantur.inspektify.ktor.domain.usecase.RemoveAllNetworkTrafficDataUseCase
import sp.bvantur.inspektify.ktor.presentation.base.SingleEventHandler
import sp.bvantur.inspektify.ktor.presentation.base.SingleEventHandlerImpl
import sp.bvantur.inspektify.ktor.presentation.base.ViewModelViewStateHandler
import sp.bvantur.inspektify.ktor.presentation.base.ViewModelViewStateHandlerImpl
import sp.bvantur.inspektify.ktor.shared.Platform
import sp.bvantur.inspektify.ktor.utils.DispatcherProvider

internal class NetworkTrafficListVewModel(
    private val dispatcherProvider: DispatcherProvider,
    private val getAllNetworkTrafficDataUseCase: GetAllNetworkTrafficDataUseCase,
    private val removeAllNetworkTrafficDataUseCase: RemoveAllNetworkTrafficDataUseCase,
    private val getCurrentSessionRetentionPolicy: GetCurrentSessionRetentionPolicy
) : ViewModel(),
    ViewModelViewStateHandler<NetworkTrafficListViewState> by ViewModelViewStateHandlerImpl(
        NetworkTrafficListViewState(retentionPolicyText = getCurrentSessionRetentionPolicy()),
        dispatcherProvider
    ),
    SingleEventHandler<NetworkTrafficListEvent> by SingleEventHandlerImpl(dispatcherProvider) {

    fun startObservingNetworkTrafficData() {
        viewModelScope.launch(dispatcherProvider.main.immediate) {
            getAllNetworkTrafficDataUseCase().collect { networkTrafficDataList ->
                emitViewState(
                    viewStateFlow.value.copy(
                        items = networkTrafficDataList
                    )
                )
            }
        }
    }

    fun onClearItemsAction() {
        viewModelScope.launch(dispatcherProvider.main.immediate) {
            removeAllNetworkTrafficDataUseCase()
        }
    }

    fun onSelectSingleNetworkTrafficItem(id: Long) {
        viewModelScope.launch(dispatcherProvider.main.immediate) {
            emitSingleEvent(NetworkTrafficListEvent.ToNetworkDetails(id))
        }
    }

    fun onBackAction() {
        viewModelScope.launch(dispatcherProvider.main.immediate) {
            Platform.closeInspektifyWindow()
        }
    }
}
