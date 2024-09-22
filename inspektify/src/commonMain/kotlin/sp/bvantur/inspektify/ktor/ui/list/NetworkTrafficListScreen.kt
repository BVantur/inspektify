package sp.bvantur.inspektify.ktor.ui.list

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
import androidx.compose.material.icons.automirrored.rounded.ArrowBack
import androidx.compose.material.icons.filled.Delete
import androidx.compose.material.icons.outlined.HourglassBottom
import androidx.compose.material.icons.outlined.Storage
import androidx.compose.material.icons.outlined.Timer
import androidx.compose.material3.ExperimentalMaterial3Api
import androidx.compose.material3.HorizontalDivider
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.material3.TopAppBar
import androidx.compose.material3.TopAppBarDefaults
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import androidx.lifecycle.viewmodel.compose.viewModel
import org.jetbrains.compose.resources.painterResource
import sp.bvantur.inspektify.ktor.di.AppComponents
import sp.bvantur.inspektify.ktor.domain.model.NetworkTrafficListItem
import sp.bvantur.inspektify.ktor.presentation.base.viewModelFactory
import sp.bvantur.inspektify.ktor.presentation.networktrafficlist.NetworkTrafficListEvent
import sp.bvantur.inspektify.ktor.presentation.networktrafficlist.NetworkTrafficListVewModel
import sp.bvantur.inspektify.ktor.presentation.networktrafficlist.NetworkTrafficListViewState
import sp.bvantur.inspektify.ktor.ui.navigation.list.OnNavigateToDetailsAction
import sp.bvantur.inspektify.ktor.ui.utils.CollectSingleEventsWithLifecycle
import sp.bvantur.inspektify.ktor.ui.utils.ColorUtils
import sp.bvantur.inspektify.ktor.shared.Platform

@Composable
internal fun NetworkTrafficListRoute(onNavigateToDetailsAction: OnNavigateToDetailsAction) {
    val viewModel = viewModel<NetworkTrafficListVewModel>(
        factory = viewModelFactory {
            NetworkTrafficListVewModel(
                dispatcherProvider = AppComponents.getAppModule().dispatcherProvider,
                getAllNetworkTrafficDataUseCase = AppComponents.getKtorModule().getNetworkTrafficUseCase,
                removeAllNetworkTrafficDataUseCase = AppComponents.getKtorModule().removeAllNetworkTrafficDataUseCase
            )
        }
    )

    val viewState by viewModel.viewStateFlow.collectAsStateWithLifecycle()

    LaunchedEffect(Unit) {
        viewModel.startObservingNetworkTrafficData()
    }

    CollectSingleEventsWithLifecycle(singleEventFlow = viewModel.singleEventFlow) { singleEvent ->
        when (singleEvent) {
            is NetworkTrafficListEvent.ToNetworkDetails -> {
                onNavigateToDetailsAction(singleEvent.id)
            }
        }
    }

    NetworkTrafficListScreen(
        viewState = viewState,
        onClearItems = viewModel::onClearItemsAction,
        onBackAction = viewModel::onBackAction,
        onSelectSingleNetworkTrafficItem = viewModel::onSelectSingleNetworkTrafficItem
    )
}

@OptIn(ExperimentalMaterial3Api::class, ExperimentalFoundationApi::class)
@Composable
internal fun NetworkTrafficListScreen(
    viewState: NetworkTrafficListViewState,
    onClearItems: () -> Unit,
    onBackAction: () -> Unit,
    onSelectSingleNetworkTrafficItem: OnNavigateToDetailsAction
) {
    Scaffold(
        topBar = {
            TopAppBar(
                title = { Text("Inspektify", color = MaterialTheme.colorScheme.onPrimary) },
                navigationIcon = {
                    IconButton(onClick = {
                        onBackAction()
                    }) {
                        Icon(
                            imageVector = Icons.AutoMirrored.Rounded.ArrowBack,
                            contentDescription = "Back",
                            tint = MaterialTheme.colorScheme.onPrimary
                        )
                    }
                },
                actions = {
                    IconButton(onClick = {
                        onClearItems()
                    }) {
                        Icon(
                            imageVector = Icons.Filled.Delete,
                            contentDescription = "Back",
                            tint = MaterialTheme.colorScheme.onPrimary
                        )
                    }
                },
                colors = TopAppBarDefaults.topAppBarColors(containerColor = MaterialTheme.colorScheme.primary)
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
                LazyColumn(modifier = Modifier.fillMaxWidth()) {
                    viewState.items.forEach { (date, items) ->
                        stickyHeader {
                            Box(modifier = Modifier.fillMaxWidth().background(MaterialTheme.colorScheme.secondary)) {
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

                                    onSelectSingleNetworkTrafficItem(networkTrafficItem.id)
                                }
                            )
                        }
                    }
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
                if (item.isCurrentSession) MaterialTheme.colorScheme.surface else MaterialTheme.colorScheme.tertiary
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
fun TextWithIcon(text: String, icon: ImageVector, modifier: Modifier = Modifier) {
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