package sp.bvantur.inspektify.ktor.presentation.networktrafficlist

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.delay
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

    companion object {
        private const val KEYBOARD_DELAY = 200L
    }

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
            if (viewStateFlow.value.isSearching) {
                emitSingleEvent(NetworkTrafficListEvent.RemoveFocusFromSearch)
                emitViewState(viewStateFlow.value.copy(isSearching = false, searchQuery = ""))
            } else {
                Platform.closeInspektifyWindow()
            }
        }
    }

    fun onSearchAction() {
        viewModelScope.launch(dispatcherProvider.main.immediate) {
            emitViewState(
                viewStateFlow.value.copy(
                    isSearching = true,
                    queriedItems = viewStateFlow.value.items
                )
            )
            delay(KEYBOARD_DELAY)
            emitSingleEvent(NetworkTrafficListEvent.MoveFocusOnSearch)
        }
    }

    fun onSearchQueryAction(query: String) {
        viewModelScope.launch(dispatcherProvider.main.immediate) {
            val lowercaseQuery = query.lowercase()
            val queriedItems = if (query.isBlank()) {
                viewStateFlow.value.items
            } else {
                viewStateFlow.value.items.mapValues { entry ->
                    entry.value.filter { item ->
                        item.statusCode.contains(lowercaseQuery, ignoreCase = true) ||
                            item.methodWithPath.contains(lowercaseQuery, ignoreCase = true) ||
                            item.host.contains(lowercaseQuery, ignoreCase = true)
                    }
                }.filterValues { it.isNotEmpty() }
            }
            emitViewState(
                viewStateFlow.value.copy(
                    searchQuery = query,
                    queriedItems = queriedItems
                )
            )
        }
    }
}
