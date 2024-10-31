package sp.bvantur.inspektify.ktor.payload.ui

import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.text.selection.SelectionContainer
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import androidx.lifecycle.viewmodel.compose.viewModel
import sp.bvantur.inspektify.ktor.core.presentation.viewModelFactory
import sp.bvantur.inspektify.ktor.payload.presentation.NetworkTrafficPayloadDetailsViewState
import sp.bvantur.inspektify.ktor.payload.presentation.NetworkTrafficRequestDetailsViewModel
import sp.bvantur.inspektify.ktor.payload.presentation.NetworkTrafficResponseDetailsViewModel

@Composable
internal fun NetworkTrafficPayloadDetailsRoute(id: Long?, isRequest: Boolean, modifier: Modifier = Modifier) {
    val viewModel = if (isRequest) {
        viewModel<NetworkTrafficRequestDetailsViewModel>(
            factory = viewModelFactory {
                NetworkTrafficRequestDetailsViewModel(
                    networkTrafficId = id,
                    isRequest = isRequest
                )
            }
        )
    } else {
        viewModel<NetworkTrafficResponseDetailsViewModel>(
            factory = viewModelFactory {
                NetworkTrafficResponseDetailsViewModel(
                    networkTrafficId = id
                )
            }
        )
    }
    val viewState by viewModel.viewStateFlow.collectAsStateWithLifecycle()

    NetworkTrafficPayloadDetailsScreen(
        viewState = viewState,
        modifier = modifier
    )
}

@Composable
private fun NetworkTrafficPayloadDetailsScreen(
    viewState: NetworkTrafficPayloadDetailsViewState,
    modifier: Modifier = Modifier
) {
    Box(modifier = modifier.fillMaxWidth()) {
        SelectionContainer(modifier = Modifier.fillMaxWidth().verticalScroll(rememberScrollState()).padding(8.dp)) {
            Column {
                viewState.headers?.let { headers ->
                    Text(headers)
                }
                viewState.payload?.let { body ->
                    Text(body)
                }
            }
        }
    }
}
