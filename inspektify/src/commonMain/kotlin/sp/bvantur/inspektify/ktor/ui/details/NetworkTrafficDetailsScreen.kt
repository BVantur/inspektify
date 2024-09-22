package sp.bvantur.inspektify.ktor.ui.details

import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.automirrored.rounded.ArrowBack
import androidx.compose.material.icons.filled.ContentCopy
import androidx.compose.material3.ExperimentalMaterial3Api
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Tab
import androidx.compose.material3.TabRow
import androidx.compose.material3.Text
import androidx.compose.material3.TopAppBar
import androidx.compose.material3.TopAppBarDefaults
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.text.style.TextOverflow
import androidx.compose.ui.unit.sp
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import androidx.lifecycle.viewmodel.compose.viewModel
import sp.bvantur.inspektify.ktor.di.AppComponents
import sp.bvantur.inspektify.ktor.data.model.NetworkTrafficId
import sp.bvantur.inspektify.ktor.presentation.base.viewModelFactory
import sp.bvantur.inspektify.ktor.presentation.details.NetworkTrafficDetailsViewModel
import sp.bvantur.inspektify.ktor.presentation.details.NetworkTrafficDetailsViewState
import sp.bvantur.inspektify.ktor.ui.navigation.OnNavigateBackAction
import sp.bvantur.inspektify.ktor.ui.overview.NetworkTrafficDetailsOverviewRoute
import sp.bvantur.inspektify.ktor.ui.payload.NetworkTrafficPayloadDetailsRoute

typealias OnCopyRestTransaction = () -> Unit

@Composable
internal fun NetworkTrafficDetailsRoute(
    networkTrafficId: NetworkTrafficId?,
    onNavigateBackAction: OnNavigateBackAction
) {
    val viewModel = viewModel<NetworkTrafficDetailsViewModel>(
        factory = viewModelFactory {
            NetworkTrafficDetailsViewModel(
                dispatcherProvider = AppComponents.getAppModule().dispatcherProvider,
                getNetworkTrafficDataByIdUseCase = AppComponents.getKtorModule().getNetworkTrafficDataByIdUseCase
            )
        }
    )

    val viewState by viewModel.viewStateFlow.collectAsStateWithLifecycle()

    LaunchedEffect(Unit) {
        viewModel.loadRestTransactionById(networkTrafficId)
    }

    NetworkTrafficDetailsScreen(
        viewState = viewState,
        onNavigateBackAction = onNavigateBackAction,
        onCopyRestTransaction = viewModel::copyToClipboard

    )
}

@OptIn(ExperimentalMaterial3Api::class)
@Composable
private fun NetworkTrafficDetailsScreen(
    viewState: NetworkTrafficDetailsViewState,
    onNavigateBackAction: OnNavigateBackAction,
    onCopyRestTransaction: OnCopyRestTransaction
) {
    Scaffold(
        modifier = Modifier.fillMaxSize(),
        topBar = {
            TopAppBar(
                title = {
                    Text(
                        "${viewState.networkTraffic?.method} ${viewState.networkTraffic?.path}",
                        color = MaterialTheme.colorScheme.onPrimary,
                        fontSize = 18.sp,
                        maxLines = 2,
                        overflow = TextOverflow.Ellipsis
                    )
                },
                colors = TopAppBarDefaults.topAppBarColors(containerColor = MaterialTheme.colorScheme.primary),
                navigationIcon = {
                    IconButton(onClick = { onNavigateBackAction() }) {
                        Icon(
                            imageVector = Icons.AutoMirrored.Rounded.ArrowBack,
                            contentDescription = "Back",
                            tint = MaterialTheme.colorScheme.onPrimary
                        )
                    }
                },
                actions = {
                    IconButton(onClick = { onCopyRestTransaction() }) {
                        Icon(
                            imageVector = Icons.Default.ContentCopy,
                            contentDescription = "Back",
                            tint = MaterialTheme.colorScheme.onPrimary
                        )
                    }
                }
            )
        }
    ) { innerPadding ->
        var tabIndex by remember { mutableStateOf(0) }

        val tabs = listOf("Overview", "Request", "Response")
        Column(modifier = Modifier.fillMaxWidth().padding(innerPadding)) {
            TabRow(
                selectedTabIndex = tabIndex,
                containerColor = MaterialTheme.colorScheme.surface,
                contentColor = MaterialTheme.colorScheme.onSurface
            ) {
                tabs.forEachIndexed { index, title ->
                    Tab(
                        text = { Text(title) },
                        selected = tabIndex == index,
                        onClick = { tabIndex = index }
                    )
                }
            }
            when (tabIndex) {
                0 -> NetworkTrafficDetailsOverviewRoute(viewState.networkTraffic)
                1 -> NetworkTrafficPayloadDetailsRoute(viewState.networkTraffic, false)
                2 -> NetworkTrafficPayloadDetailsRoute(viewState.networkTraffic, true)
            }
        }
    }
}
