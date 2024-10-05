package sp.bvantur.inspektify.ktor.details.ui

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.automirrored.rounded.ArrowBack
import androidx.compose.material.icons.filled.ContentCopy
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
import androidx.compose.material3.TopAppBar
import androidx.compose.material3.TopAppBarDefaults
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.text.style.TextOverflow
import androidx.compose.ui.unit.sp
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import androidx.lifecycle.viewmodel.compose.viewModel
import sp.bvantur.inspektify.ktor.core.presentation.viewModelFactory
import sp.bvantur.inspektify.ktor.core.ui.navigation.OnNavigateBackAction
import sp.bvantur.inspektify.ktor.details.presentation.KtorDetailsUserAction
import sp.bvantur.inspektify.ktor.details.presentation.NetworkTrafficDetailsViewModel
import sp.bvantur.inspektify.ktor.details.presentation.NetworkTrafficDetailsViewState
import sp.bvantur.inspektify.ktor.overview.ui.NetworkTrafficDetailsOverviewRoute
import sp.bvantur.inspektify.ktor.payload.ui.NetworkTrafficPayloadDetailsRoute

@Composable
internal fun NetworkTrafficDetailsRoute(onNavigateBackAction: OnNavigateBackAction) {
    val viewModel = viewModel<NetworkTrafficDetailsViewModel>(
        factory = viewModelFactory { savedStateHandle ->
            NetworkTrafficDetailsViewModel(savedStateHandle)
        }
    )

    val viewState by viewModel.viewStateFlow.collectAsStateWithLifecycle()

    NetworkTrafficDetailsScreen(
        viewState = viewState,
        onNavigateBackAction = onNavigateBackAction,
        onUserAction = viewModel::onUserAction
    )
}

@OptIn(ExperimentalMaterial3Api::class)
@Composable
private fun NetworkTrafficDetailsScreen(
    viewState: NetworkTrafficDetailsViewState,
    onNavigateBackAction: OnNavigateBackAction,
    onUserAction: (KtorDetailsUserAction) -> Unit,
) {
    Scaffold(
        modifier = Modifier.fillMaxSize(),
        topBar = {
            TopAppBar(
                title = {
                    Text(
                        text = viewState.title,
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
                }
            )
        }
    ) { innerPadding ->
        var tabIndex by remember { mutableStateOf(0) }

        val tabs = listOf("Overview", "Request", "Response")
        Column(modifier = Modifier.fillMaxSize().padding(innerPadding)) {
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
            if (viewState.networkTrafficId > 0) {
                when (tabIndex) {
                    0 -> NetworkTrafficDetailsOverviewRoute(
                        id = viewState.networkTrafficId,
                        modifier = Modifier.weight(1f)
                    )

                    1 -> NetworkTrafficPayloadDetailsRoute(
                        id = viewState.networkTrafficId,
                        isRequest = true,
                        modifier = Modifier.weight(1f)
                    )

                    2 -> NetworkTrafficPayloadDetailsRoute(
                        id = viewState.networkTrafficId,
                        isRequest = false,
                        modifier = Modifier.weight(1f)
                    )
                }
            }
            Row(modifier = Modifier.fillMaxWidth().background(MaterialTheme.colorScheme.secondary)) {
                ActionTextIcon(
                    modifier = Modifier.weight(1f),
                    text = "cURL",
                    imageVector = Icons.Default.Terminal,
                    onClick = {
                        onUserAction(KtorDetailsUserAction.OnGetCurl)
                    }
                )
                ActionTextIcon(
                    modifier = Modifier.weight(1f),
                    text = "Share",
                    imageVector = Icons.Default.Share,
                    onClick = {
                        onUserAction(KtorDetailsUserAction.OnShare)
                    }
                )
                ActionTextIcon(
                    modifier = Modifier.weight(1f),
                    text = "Copy",
                    imageVector = Icons.Default.ContentCopy,
                    onClick = {
                        onUserAction(KtorDetailsUserAction.OnCopyToClipboard)
                    }
                )
            }
        }
    }
}

@Composable
fun ActionTextIcon(text: String, imageVector: ImageVector, modifier: Modifier = Modifier, onClick: () -> Unit = {}) {
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
