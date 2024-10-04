package sp.bvantur.inspektify.ktor.list.ui

import androidx.compose.foundation.ExperimentalFoundationApi
import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.outlined.HourglassBottom
import androidx.compose.material.icons.outlined.Storage
import androidx.compose.material.icons.outlined.Timer
import androidx.compose.material3.HorizontalDivider
import androidx.compose.material3.Icon
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.remember
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.focus.FocusRequester
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import androidx.lifecycle.viewmodel.compose.viewModel
import org.jetbrains.compose.resources.painterResource
import sp.bvantur.inspektify.ktor.client.shared.Platform
import sp.bvantur.inspektify.ktor.core.presentation.viewModelFactory
import sp.bvantur.inspektify.ktor.core.ui.theme.disabled
import sp.bvantur.inspektify.ktor.core.ui.utils.CollectSingleEventsWithLifecycle
import sp.bvantur.inspektify.ktor.core.ui.utils.ColorUtils
import sp.bvantur.inspektify.ktor.list.domain.model.NetworkTrafficListItem
import sp.bvantur.inspektify.ktor.list.presentation.KtorListEvent
import sp.bvantur.inspektify.ktor.list.presentation.KtorListUserAction
import sp.bvantur.inspektify.ktor.list.presentation.KtorListVewModel
import sp.bvantur.inspektify.ktor.list.presentation.KtorListViewState
import sp.bvantur.inspektify.ktor.list.ui.components.KtorListTopAppBar
import sp.bvantur.inspektify.ktor.list.ui.navigation.OnNavigateToDetailsAction

@Composable
internal fun KtorListRoute(onNavigateToDetailsAction: OnNavigateToDetailsAction) {
    val viewModel = viewModel<KtorListVewModel>(
        factory = viewModelFactory {
            KtorListVewModel()
        }
    )

    val viewState by viewModel.viewStateFlow.collectAsStateWithLifecycle()
    val searchFocusRequester = remember { FocusRequester() }

    CollectSingleEventsWithLifecycle(singleEventFlow = viewModel.singleEventFlow) { singleEvent ->
        when (singleEvent) {
            is KtorListEvent.ToNetworkDetails -> {
                onNavigateToDetailsAction(singleEvent.id)
            }

            KtorListEvent.MoveFocusOnSearch -> {
                searchFocusRequester.requestFocus()
            }

            KtorListEvent.RemoveFocusFromSearch -> {
                searchFocusRequester.requestFocus()
            }
        }
    }

    KtorListScreen(
        viewState = viewState,
        searchFocusRequester = searchFocusRequester,
        onUserAction = viewModel::onUserAction
    )
}

@OptIn(ExperimentalFoundationApi::class)
@Composable
private fun KtorListScreen(
    viewState: KtorListViewState,
    searchFocusRequester: FocusRequester,
    onUserAction: (KtorListUserAction) -> Unit
) {
    Scaffold(
        topBar = {
            KtorListTopAppBar(
                isSearching = viewState.isSearching,
                searchQuery = viewState.searchQuery,
                focusRequester = searchFocusRequester,
                onUserAction = onUserAction,
                suggestions = viewState.suggestions
            )
        }
    ) { innerPadding ->
        Column(modifier = Modifier.fillMaxWidth().padding(innerPadding)) {
            if (viewState.items.isEmpty()) {
                Text(
                    text = "No items",
                    modifier = Modifier.align(Alignment.CenterHorizontally).padding(top = 8.dp)
                )
            } else {
                val networkTrafficItems = if (viewState.isSearching) {
                    viewState.queriedItems
                } else {
                    viewState.items
                }
                LazyColumn(modifier = Modifier.weight(1f)) {
                    networkTrafficItems.forEach { (date, items) ->
                        stickyHeader {
                            Box(
                                modifier = Modifier.fillMaxWidth().background(MaterialTheme.colorScheme.secondary)
                                    .clickable { }
                            ) {
                                Text(
                                    text = date,
                                    color = MaterialTheme.colorScheme.onSecondary,
                                    style = MaterialTheme.typography.titleMedium,
                                    modifier = Modifier.padding(8.dp).align(Alignment.Center)
                                )
                            }
                        }
                        items(items.size) { index ->
                            val networkTrafficItem = items[index]

                            NetworkTrafficItem(
                                item = networkTrafficItem,
                                modifier = Modifier.clickable {
                                    if (!networkTrafficItem.isCompleted) return@clickable

                                    onUserAction(KtorListUserAction.OnNetworkTrafficItemSelected(networkTrafficItem.id))
                                }
                            )
                        }
                    }
                }

                Box(modifier = Modifier.fillMaxWidth().background(MaterialTheme.colorScheme.secondary)) {
                    Text(
                        text = viewState.retentionPolicyText,
                        modifier = Modifier.align(Alignment.Center).padding(16.dp),
                        color = MaterialTheme.colorScheme.onSecondary
                    )
                }
            }
        }
    }
}

@Composable
internal fun NetworkTrafficItem(item: NetworkTrafficListItem, modifier: Modifier = Modifier) {
    Box(
        modifier = modifier.fillMaxWidth()
            .background(
                if (item.isCurrentSession) MaterialTheme.colorScheme.surface else MaterialTheme.colorScheme.disabled
            )
    ) {
        Row(modifier = Modifier.fillMaxWidth()) {
            Text(
                modifier = Modifier.padding(all = 16.dp),
                text = item.statusCode,
                color = ColorUtils.statusColorToComposableColor(item.statusColor),
                fontWeight = FontWeight.Bold
            )
            Column(modifier = Modifier.fillMaxWidth().padding(top = 16.dp)) {
                Text(
                    text = item.methodWithPath,
                    fontWeight = FontWeight.Bold,
                    color = MaterialTheme.colorScheme.onSurface,
                    modifier = Modifier.fillMaxWidth().padding(end = 16.dp)
                )

                Row(
                    modifier = Modifier.fillMaxWidth().padding(top = 4.dp, end = 16.dp),
                    verticalAlignment = Alignment.CenterVertically
                ) {
                    if (Platform.isAndroid()) {
                        Image(
                            modifier = Modifier.size(12.dp),
                            painter = painterResource(item.hostImage),
                            contentDescription = null,
                            colorFilter = ColorFilter.tint(MaterialTheme.colorScheme.primary)
                        )
                    }
                    Text(
                        modifier = Modifier.fillMaxWidth().padding(start = 4.dp),
                        text = item.host,
                        color = MaterialTheme.colorScheme.onSurface
                    )
                }

                Row(modifier = Modifier.fillMaxWidth().padding(top = 4.dp, end = 16.dp, bottom = 8.dp)) {
                    TextWithIcon(
                        text = item.time,
                        icon = Icons.Outlined.Timer,
                        modifier = Modifier.weight(1f)
                    )
                    TextWithIcon(
                        text = item.duration,
                        icon = Icons.Outlined.HourglassBottom,
                        modifier = Modifier.weight(1f)
                    )
                    TextWithIcon(
                        text = item.size,
                        icon = Icons.Outlined.Storage,
                        modifier = Modifier.weight(1f)
                    )
                }
                HorizontalDivider(
                    color = MaterialTheme.colorScheme.onSurface,
                    modifier = Modifier.fillMaxWidth().height(1.dp).padding(bottom = 16.dp)
                )
            }
        }

        if (!item.isCompleted) {
            Box(
                modifier = Modifier
                    .matchParentSize()
                    .background(Color.White.copy(alpha = 0.5f))
            )
        }
    }
}

@Composable
internal fun TextWithIcon(text: String, icon: ImageVector, modifier: Modifier = Modifier) {
    Row(modifier = modifier, verticalAlignment = Alignment.CenterVertically) {
        Icon(
            imageVector = icon,
            contentDescription = "Size Icon",
            modifier = Modifier.padding(end = 4.dp).size(12.dp)
        )
        Text(
            text = text,
            color = MaterialTheme.colorScheme.onSurface
        )
    }
}
