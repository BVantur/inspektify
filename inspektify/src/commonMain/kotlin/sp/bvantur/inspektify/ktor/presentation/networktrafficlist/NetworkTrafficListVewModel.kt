package sp.bvantur.inspektify.ktor.presentation.networktrafficlist

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.ktor.domain.usecase.GetAllNetworkTrafficDataUseCase
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
    private val removeAllNetworkTrafficDataUseCase: RemoveAllNetworkTrafficDataUseCase
) : ViewModel(),
    ViewModelViewStateHandler<NetworkTrafficListViewState> by ViewModelViewStateHandlerImpl(
        NetworkTrafficListViewState(),
        dispatcherProvider
    ),
    SingleEventHandler<NetworkTrafficListEvent> by SingleEventHandlerImpl(dispatcherProvider) {

    fun startObservingNetworkTrafficData() {
        viewModelScope.launch(dispatcherProvider.main) {
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
        viewModelScope.launch(dispatcherProvider.main) {
            removeAllNetworkTrafficDataUseCase()
        }
    }

    fun onSelectSingleNetworkTrafficItem(id: Long) {
        viewModelScope.launch(dispatcherProvider.main) {
            emitSingleEvent(NetworkTrafficListEvent.ToNetworkDetails(id))
        }
    }

    fun onBackAction() {
        viewModelScope.launch(dispatcherProvider.main) {
            Platform.closeInspektifyWindow()
        }
    }
}
