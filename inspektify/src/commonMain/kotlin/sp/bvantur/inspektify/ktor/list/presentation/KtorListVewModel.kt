package sp.bvantur.inspektify.ktor.list.presentation

import androidx.compose.ui.text.TextRange
import androidx.compose.ui.text.input.TextFieldValue
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.delay
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.ktor.client.shared.Platform
import sp.bvantur.inspektify.ktor.core.presentation.SingleEventHandler
import sp.bvantur.inspektify.ktor.core.presentation.SingleEventHandlerImpl
import sp.bvantur.inspektify.ktor.core.presentation.ViewModelUserActionHandler
import sp.bvantur.inspektify.ktor.core.presentation.ViewStateViewModel
import sp.bvantur.inspektify.ktor.list.di.KtorListModule.getAllNetworkTrafficDataUseCase
import sp.bvantur.inspektify.ktor.list.di.KtorListModule.getCurrentSessionRetentionPolicy
import sp.bvantur.inspektify.ktor.list.di.KtorListModule.ktorListRepository

internal class KtorListVewModel :
    ViewStateViewModel<KtorListViewState>(
        initialViewState = KtorListViewState(retentionPolicyText = getCurrentSessionRetentionPolicy())
    ),
    SingleEventHandler<KtorListEvent> by SingleEventHandlerImpl(),
    ViewModelUserActionHandler<KtorListUserAction> {

    override fun initialLoadData() {
        viewModelScope.launch {
            getAllNetworkTrafficDataUseCase().collect { (networkTrafficDataList, suggestions) ->
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
            KtorListUserAction.OnClearSearchQuery -> {
                onSearchQuery(viewStateFlow.value.searchQuery.copy(text = ""))
                viewModelScope.launch {
                    emitSingleEvent(KtorListEvent.MoveFocusOnSearch)
                }
            }
            is KtorListUserAction.OnSearchSuggestionQuery -> {
                onSearchQuery(viewStateFlow.value.searchQuery.copy(text = "${userAction.suggestion} "))
                emitViewState { viewState ->
                    val searchQuery = viewState.searchQuery
                    viewState.copy(searchQuery = searchQuery.copy(selection = TextRange(searchQuery.text.length)))
                }
                viewModelScope.launch {
                    emitSingleEvent(KtorListEvent.MoveFocusOnSearch)
                }
            }

            is KtorListUserAction.OnSearchQuery -> onSearchQuery(userAction.query)
        }
    }

    private fun onRemoveAllNetworkTraffic() {
        viewModelScope.launch {
            ktorListRepository.removeAllNetworkTrafficData()
        }
    }

    private fun onNetworkTrafficItemSelected(id: Long) {
        viewModelScope.launch {
            emitSingleEvent(KtorListEvent.ToNetworkDetails(id))
        }
    }

    private fun onNavigateBack() {
        if (viewStateFlow.value.isSearching) {
            viewModelScope.launch {
                emitSingleEvent(KtorListEvent.RemoveFocusFromSearch)
                emitViewState { viewState ->
                    viewState.copy(
                        isSearching = false,
                        searchQuery = TextFieldValue(""),
                        showNavigationBackAction = !Platform.getTargetType().isDesktop()
                    )
                }
            }
        } else {
            Platform.closeInspektifyWindow()
        }
    }

    private fun onStartSearch() {
        viewModelScope.launch {
            emitViewState { viewState ->
                viewState.copy(
                    isSearching = true,
                    queriedItems = viewStateFlow.value.items,
                    showNavigationBackAction = true
                )
            }
            delay(KEYBOARD_DELAY)
            emitSingleEvent(KtorListEvent.MoveFocusOnSearch)
        }
    }

    private fun onSearchQuery(query: TextFieldValue) {
        val searchTerms = query.text
            .trim()
            .lowercase()
            .split("\\s+".toRegex())
            .filter { it.isNotBlank() }

        val queriedItems = if (searchTerms.isEmpty()) {
            viewStateFlow.value.items
        } else {
            viewStateFlow.value.items.mapValues { entry ->
                entry.value.filter { item ->
                    searchTerms.all { term ->
                        item.statusCode.contains(term, ignoreCase = true) ||
                            item.methodWithPath.contains(term, ignoreCase = true) ||
                            item.host.contains(term, ignoreCase = true)
                    }
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

    companion object {
        private const val KEYBOARD_DELAY = 200L
    }
}
