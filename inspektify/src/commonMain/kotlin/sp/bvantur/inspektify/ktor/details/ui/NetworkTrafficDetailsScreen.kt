package sp.bvantur.inspektify.ktor.details.ui

import androidx.compose.animation.AnimatedVisibility
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.automirrored.rounded.ArrowBack
import androidx.compose.material.icons.filled.Close
import androidx.compose.material.icons.filled.ContentCopy
import androidx.compose.material.icons.filled.Search
import androidx.compose.material.icons.filled.Share
import androidx.compose.material.icons.filled.Terminal
import androidx.compose.material3.ExperimentalMaterial3Api
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Tab
import androidx.compose.material3.TabRow
import androidx.compose.material3.Text
import androidx.compose.material3.TextButton
import androidx.compose.material3.TextField
import androidx.compose.material3.TextFieldDefaults
import androidx.compose.material3.TopAppBar
import androidx.compose.material3.TopAppBarDefaults
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.focus.FocusRequester
import androidx.compose.ui.focus.focusRequester
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.text.AnnotatedString
import androidx.compose.ui.text.style.TextOverflow
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import androidx.lifecycle.viewmodel.compose.viewModel
import sp.bvantur.inspektify.ktor.core.presentation.viewModelFactory
import sp.bvantur.inspektify.ktor.core.ui.navigation.OnNavigateBackAction
import sp.bvantur.inspektify.ktor.core.ui.theme.Ferra
import sp.bvantur.inspektify.ktor.core.ui.theme.success
import sp.bvantur.inspektify.ktor.core.ui.utils.CollectSingleEventsWithLifecycle
import sp.bvantur.inspektify.ktor.details.presentation.NetworkTrafficDetailsEvent
import sp.bvantur.inspektify.ktor.details.presentation.NetworkTrafficDetailsUserAction
import sp.bvantur.inspektify.ktor.details.presentation.NetworkTrafficDetailsViewModel
import sp.bvantur.inspektify.ktor.details.presentation.NetworkTrafficDetailsViewState
import sp.bvantur.inspektify.ktor.details.presentation.NetworkTrafficPayloadDetailsViewState

@Composable
internal fun NetworkTrafficDetailsRoute(onNavigateBackAction: OnNavigateBackAction) {
    val viewModel = viewModel<NetworkTrafficDetailsViewModel>(
        factory = viewModelFactory { savedStateHandle ->
            NetworkTrafficDetailsViewModel(savedStateHandle)
        }
    )

    val viewState by viewModel.viewStateFlow.collectAsStateWithLifecycle()
    val requestViewState by viewModel.requestStateFlow.collectAsStateWithLifecycle()
    val responseViewState by viewModel.responseStateFlow.collectAsStateWithLifecycle()

    val searchFocusRequester = remember { FocusRequester() }

    CollectSingleEventsWithLifecycle(singleEventFlow = viewModel.singleEventFlow) { singleEvent ->
        when (singleEvent) {
            NetworkTrafficDetailsEvent.MoveFocusOnSearch -> {
                searchFocusRequester.requestFocus()
            }

            NetworkTrafficDetailsEvent.RemoveFocusFromSearch -> {
                searchFocusRequester.requestFocus()
            }

            NetworkTrafficDetailsEvent.OnNavigateBack -> {
                onNavigateBackAction()
            }
        }
    }

    NetworkTrafficDetailsScreen(
        viewState = viewState,
        overviewData = viewState.overviewData,
        requestViewState = requestViewState,
        responseViewState = responseViewState,
        searchFocusRequester = searchFocusRequester,
        onUserAction = viewModel::onUserAction
    )
}

@OptIn(ExperimentalMaterial3Api::class)
@Composable
private fun NetworkTrafficDetailsScreen(
    viewState: NetworkTrafficDetailsViewState,
    overviewData: AnnotatedString,
    requestViewState: NetworkTrafficPayloadDetailsViewState,
    responseViewState: NetworkTrafficPayloadDetailsViewState,
    searchFocusRequester: FocusRequester,
    onUserAction: (NetworkTrafficDetailsUserAction) -> Unit,
) {
    Scaffold(
        modifier = Modifier.fillMaxSize(),
        topBar = {
            TopAppBar(
                title = {
                    if (viewState.isSearching) {
                        TextField(
                            value = viewState.searchQuery,
                            onValueChange = {
                                onUserAction(NetworkTrafficDetailsUserAction.OnSearchQuery(it))
                            },
                            placeholder = { Text("Search...") },
                            singleLine = true,
                            modifier = Modifier
                                .fillMaxWidth()
                                .focusRequester(searchFocusRequester),
                            colors = TextFieldDefaults.colors(
                                focusedTextColor = MaterialTheme.colorScheme.onPrimary,
                                unfocusedTextColor = MaterialTheme.colorScheme.onPrimary,
                                focusedTrailingIconColor = MaterialTheme.colorScheme.onPrimary,
                                unfocusedTrailingIconColor = MaterialTheme.colorScheme.onPrimary,
                                focusedContainerColor = MaterialTheme.colorScheme.primary,
                                unfocusedContainerColor = MaterialTheme.colorScheme.primary,
                                cursorColor = MaterialTheme.colorScheme.onPrimary,
                                focusedIndicatorColor = Color.Transparent,
                                unfocusedIndicatorColor = Color.Transparent,
                                focusedPlaceholderColor = MaterialTheme.colorScheme.onPrimary.copy(alpha = 0.9f),
                                unfocusedPlaceholderColor = MaterialTheme.colorScheme.onPrimary.copy(alpha = 0.9f),
                            ),
                            trailingIcon = {
                                if (viewState.searchQuery.text.isNotEmpty()) {
                                    IconButton(onClick = {
                                        onUserAction(NetworkTrafficDetailsUserAction.OnClearSearchQuery)
                                    }) {
                                        Icon(
                                            imageVector = Icons.Default.Close,
                                            contentDescription = "Clear Search",
                                            tint = MaterialTheme.colorScheme.onPrimary
                                        )
                                    }
                                }
                            }
                        )
                    } else {
                        Text(
                            text = viewState.title,
                            color = MaterialTheme.colorScheme.onPrimary,
                            fontSize = 18.sp,
                            maxLines = 2,
                            overflow = TextOverflow.Ellipsis
                        )
                    }
                },
                colors = TopAppBarDefaults.topAppBarColors(containerColor = MaterialTheme.colorScheme.primary),
                navigationIcon = {
                    IconButton(onClick = { onUserAction(NetworkTrafficDetailsUserAction.OnNavigateBack) }) {
                        Icon(
                            imageVector = Icons.AutoMirrored.Rounded.ArrowBack,
                            contentDescription = "Back",
                            tint = MaterialTheme.colorScheme.onPrimary
                        )
                    }
                },
                actions = {
                    if (!viewState.isSearching) {
                        IconButton(onClick = {
                            onUserAction(NetworkTrafficDetailsUserAction.OnStartSearch)
                        }) {
                            Icon(
                                imageVector = Icons.Filled.Search,
                                contentDescription = "Search",
                                tint = MaterialTheme.colorScheme.onPrimary
                            )
                        }
                    }
                }
            )
        }
    ) { innerPadding ->
        var tabIndex by remember { mutableStateOf(0) }

        val tabs = listOf("Overview", "Request", "Response")
        val searchCount = listOf(
            viewState.overviewSearchQueryCount,
            viewState.requestData.searchQueryCount,
            viewState.responseData.searchQueryCount
        )
        Column(modifier = Modifier.fillMaxSize().padding(innerPadding)) {
            TabRow(
                selectedTabIndex = tabIndex,
                containerColor = MaterialTheme.colorScheme.surface,
                contentColor = MaterialTheme.colorScheme.onSurface
            ) {
                tabs.forEachIndexed { index, title ->
                    Tab(
                        text = {
                            Row(
                                verticalAlignment = Alignment.CenterVertically
                            ) {
                                Text(title)
                                SearchCountIndicator(
                                    modifier = Modifier.padding(start = 4.dp),
                                    count = searchCount[index]
                                )
                            }
                        },
                        selected = tabIndex == index,
                        onClick = { tabIndex = index }
                    )
                }
            }
            if (viewState.networkTrafficId > 0) {
                when (tabIndex) {
                    0 -> NetworkTrafficDetailsOverviewScreen(
                        overviewData = overviewData,
                        modifier = Modifier.weight(1f)
                    )

                    1 -> NetworkTrafficPayloadDetailsScreen(
                        requestViewState,
                        modifier = Modifier.weight(1f)
                    )

                    2 -> NetworkTrafficPayloadDetailsScreen(
                        responseViewState,
                        modifier = Modifier.weight(1f)
                    )
                }
            }

            AnimatedVisibility(
                visible = viewState.showFeedbackMessage,
                modifier = Modifier
                    .padding(16.dp)
            ) {
                Row(
                    horizontalArrangement = Arrangement.Center,
                    modifier = Modifier
                        .clip(RoundedCornerShape(16.dp))
                        .fillMaxWidth()
                        .background(MaterialTheme.colorScheme.success)
                        .padding(16.dp)
                ) {
                    Text(
                        text = "Successfully copied to clipboard",
                        color = MaterialTheme.colorScheme.onPrimary,
                        modifier = Modifier.align(Alignment.CenterVertically)
                    )
                }
            }

            Row(modifier = Modifier.fillMaxWidth().background(MaterialTheme.colorScheme.secondary)) {
                ActionTextIcon(
                    modifier = Modifier.weight(1f),
                    text = "cURL",
                    imageVector = Icons.Default.Terminal,
                    onClick = {
                        onUserAction(NetworkTrafficDetailsUserAction.OnGetCurl)
                    }
                )
                if (viewState.showShareAction) {
                    ActionTextIcon(
                        modifier = Modifier.weight(1f),
                        text = "Share",
                        imageVector = Icons.Default.Share,
                        onClick = {
                            onUserAction(NetworkTrafficDetailsUserAction.OnShare)
                        }
                    )
                }
                ActionTextIcon(
                    modifier = Modifier.weight(1f),
                    text = "Copy",
                    imageVector = Icons.Default.ContentCopy,
                    onClick = {
                        onUserAction(NetworkTrafficDetailsUserAction.OnCopyToClipboard)
                    }
                )
            }
        }
    }
}

@Composable
private fun ActionTextIcon(
    text: String,
    imageVector: ImageVector,
    modifier: Modifier = Modifier,
    onClick: () -> Unit = {}
) {
    TextButton(
        modifier = modifier,
        onClick = {
            onClick()
        }
    ) {
        Column(
            horizontalAlignment = Alignment.CenterHorizontally
        ) {
            Icon(
                imageVector = imageVector,
                contentDescription = "Action icon",
                tint = MaterialTheme.colorScheme.onSecondary
            )
            Text(
                text = text,
                color = MaterialTheme.colorScheme.onSecondary,
                style = MaterialTheme.typography.bodyMedium
            )
        }
    }
}

@Composable
private fun SearchCountIndicator(modifier: Modifier = Modifier, count: Int) {
    println(count)
    if (count <= 0) {
        return
    }

    val displayText = if (count > 10) "10+" else count.toString()
    Box(
        modifier = modifier
            .size(24.dp)
            .clip(CircleShape)
            .background(color = Ferra),
        contentAlignment = Alignment.Center
    ) {
        Text(
            text = displayText,
            color = Color.White,
            fontSize = 12.sp,
            style = MaterialTheme.typography.bodySmall
        )
    }
}
