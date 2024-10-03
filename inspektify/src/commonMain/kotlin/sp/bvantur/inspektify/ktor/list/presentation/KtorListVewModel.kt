package sp.bvantur.inspektify.ktor.list.presentation

import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.delay
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.ktor.core.presentation.SingleEventHandler
import sp.bvantur.inspektify.ktor.core.presentation.SingleEventHandlerImpl
import sp.bvantur.inspektify.ktor.core.presentation.ViewModelUserActionHandler
import sp.bvantur.inspektify.ktor.core.presentation.ViewStateViewModel
import sp.bvantur.inspektify.ktor.list.di.KtorListModule
import sp.bvantur.inspektify.ktor.list.domain.KtorListRepository
import sp.bvantur.inspektify.ktor.list.domain.usecase.GetAllNetworkTrafficDataUseCase
import sp.bvantur.inspektify.ktor.list.domain.usecase.GetCurrentSessionRetentionPolicy
import sp.bvantur.inspektify.ktor.shared.Platform

internal class KtorListVewModel(
    private val networkTrafficUseCase: GetAllNetworkTrafficDataUseCase =
        KtorListModule.getAllNetworkTrafficDataUseCase(),
    private val repository: KtorListRepository = KtorListModule.getKtorListRepository(),
    sessionRetentionPolicy: GetCurrentSessionRetentionPolicy = KtorListModule.getCurrentSessionRetentionPolicy()
) : ViewStateViewModel<KtorListViewState>(
    initialViewState = KtorListViewState(retentionPolicyText = sessionRetentionPolicy())
),
    SingleEventHandler<KtorListEvent> by SingleEventHandlerImpl(),
    ViewModelUserActionHandler<KtorListUserAction> {

    override fun initialLoadData() {
        viewModelScope.launch {
            networkTrafficUseCase().collect { (networkTrafficDataList, suggestions) ->
                emitViewState { viewState ->
                    viewState.copy(
                        items = networkTrafficDataList,
                        suggestions = suggestions
                    )
                }
            }
        }
    }

    override fun onUserAction(userAction: KtorListUserAction) {
        when (userAction) {
            KtorListUserAction.OnRemoveAllNetworkTraffic -> onRemoveAllNetworkTraffic()
            KtorListUserAction.OnNavigateBack -> onNavigateBack()
            is KtorListUserAction.OnNetworkTrafficItemSelected -> onNetworkTrafficItemSelected(userAction.id)
            KtorListUserAction.OnStartSearch -> onStartSearch()
            KtorListUserAction.OnClearSearchQuery -> onSearchQuery("")
            is KtorListUserAction.OnSearchSuggestionQuery -> {
                onSearchQuery(userAction.suggestion)
                // TODO move cursor to the end
            }

            is KtorListUserAction.OnSearchQuery -> onSearchQuery(userAction.query)
        }
    }

    private fun onRemoveAllNetworkTraffic() {
        viewModelScope.launch {
            repository.removeAllNetworkTrafficData()
        }
    }

    private fun onNetworkTrafficItemSelected(id: Long) {
        viewModelScope.launch {
            emitSingleEvent(KtorListEvent.ToNetworkDetails(id))
        }
    }

    private fun onNavigateBack() {
        viewModelScope.launch {
            if (viewStateFlow.value.isSearching) {
                emitSingleEvent(KtorListEvent.RemoveFocusFromSearch)
                emitViewState { viewState ->
                    viewState.copy(isSearching = false, searchQuery = "")
                }
            } else {
                Platform.closeInspektifyWindow()
            }
        }
    }

    private fun onStartSearch() {
        viewModelScope.launch {
            emitViewState { viewState ->
                viewState.copy(
                    isSearching = true,
                    queriedItems = viewStateFlow.value.items
                )
            }
            delay(KEYBOARD_DELAY)
            emitSingleEvent(KtorListEvent.MoveFocusOnSearch)
        }
    }

    private fun onSearchQuery(query: String) {
        viewModelScope.launch {
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
            emitViewState { viewState ->
                viewState.copy(
                    searchQuery = query,
                    queriedItems = queriedItems
                )
            }
        }
    }

    companion object {
        private const val KEYBOARD_DELAY = 200L
    }
}
