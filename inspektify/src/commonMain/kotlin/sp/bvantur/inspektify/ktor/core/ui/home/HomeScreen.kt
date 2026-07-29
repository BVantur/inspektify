package sp.bvantur.inspektify.ktor.core.ui.home

import androidx.compose.foundation.ExperimentalFoundationApi
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.pager.HorizontalPager
import androidx.compose.foundation.pager.rememberPagerState
import androidx.compose.material3.Scaffold
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.remember
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.ui.Modifier
import androidx.compose.ui.focus.FocusRequester
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import androidx.lifecycle.viewmodel.compose.viewModel
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.ktor.core.extensions.InspektifyExtensionRegistry
import sp.bvantur.inspektify.ktor.core.presentation.viewModelFactory
import sp.bvantur.inspektify.ktor.core.ui.extensions.ExtensionsPageContent
import sp.bvantur.inspektify.ktor.core.ui.extensions.ExtensionsPageTopBar
import sp.bvantur.inspektify.ktor.core.ui.navigation.EXTENSIONS_PAGE_INDEX
import sp.bvantur.inspektify.ktor.core.ui.navigation.InspektifyBottomBar
import sp.bvantur.inspektify.ktor.core.ui.navigation.NETWORK_PAGE_INDEX
import sp.bvantur.inspektify.ktor.core.ui.utils.CollectSingleEventsWithLifecycle
import sp.bvantur.inspektify.ktor.list.presentation.KtorListEvent
import sp.bvantur.inspektify.ktor.list.presentation.KtorListVewModel
import sp.bvantur.inspektify.ktor.list.ui.NetworkPageContent
import sp.bvantur.inspektify.ktor.list.ui.components.KtorListTopAppBar

@OptIn(ExperimentalFoundationApi::class)
@Composable
internal fun HomeScreen(onNavigateToNetworkDetails: (Long) -> Unit, onNavigateToExtensionDetail: (String) -> Unit) {
    val networkViewModel = viewModel<KtorListVewModel>(
        factory = viewModelFactory { KtorListVewModel() }
    )
    val networkViewState by networkViewModel.viewStateFlow.collectAsStateWithLifecycle()
    val searchFocusRequester = remember { FocusRequester() }

    CollectSingleEventsWithLifecycle(singleEventFlow = networkViewModel.singleEventFlow) { singleEvent ->
        when (singleEvent) {
            is KtorListEvent.ToNetworkDetails -> onNavigateToNetworkDetails(singleEvent.id)
            KtorListEvent.MoveFocusOnSearch,
            KtorListEvent.RemoveFocusFromSearch -> searchFocusRequester.requestFocus()
        }
    }

    val extensions by InspektifyExtensionRegistry.extensions.collectAsStateWithLifecycle()
    val hasExtensions = extensions.isNotEmpty()
    val pagerState = rememberPagerState(pageCount = { if (hasExtensions) 2 else 1 })
    val coroutineScope = rememberCoroutineScope()

    Scaffold(
        topBar = {
            when {
                hasExtensions && pagerState.currentPage == EXTENSIONS_PAGE_INDEX -> ExtensionsPageTopBar()
                else -> KtorListTopAppBar(
                    isSearching = networkViewState.isSearching,
                    searchQuery = networkViewState.searchQuery,
                    focusRequester = searchFocusRequester,
                    onUserAction = networkViewModel::onUserAction,
                    showNavigationBackAction = networkViewState.showNavigationBackAction,
                    suggestions = networkViewState.suggestions
                )
            }
        },
        bottomBar = {
            InspektifyBottomBar(
                selectedPage = pagerState.currentPage,
                onSelectPage = { page ->
                    coroutineScope.launch { pagerState.animateScrollToPage(page) }
                }
            )
        }
    ) { innerPadding ->
        HorizontalPager(
            state = pagerState,
            modifier = Modifier.padding(innerPadding)
        ) { page ->
            when (page) {
                NETWORK_PAGE_INDEX -> NetworkPageContent(
                    viewState = networkViewState,
                    onUserAction = networkViewModel::onUserAction
                )
                EXTENSIONS_PAGE_INDEX -> ExtensionsPageContent(
                    onNavigateToExtension = onNavigateToExtensionDetail
                )
            }
        }
    }
}
