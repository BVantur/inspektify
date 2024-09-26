package sp.bvantur.inspektify.ktor.ui.payload

import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import androidx.lifecycle.viewmodel.compose.viewModel
import sp.bvantur.inspektify.ktor.data.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.di.AppComponents
import sp.bvantur.inspektify.ktor.presentation.base.viewModelFactory
import sp.bvantur.inspektify.ktor.presentation.payload.NetworkTrafficPayloadDetailsViewModel
import sp.bvantur.inspektify.ktor.presentation.payload.NetworkTrafficPayloadDetailsViewState

@Composable
internal fun NetworkTrafficPayloadDetailsRoute(
    networkTraffic: NetworkTraffic?,
    isResponse: Boolean,
    modifier: Modifier = Modifier
) {
    val viewModel = viewModel<NetworkTrafficPayloadDetailsViewModel>(
        factory = viewModelFactory {
            NetworkTrafficPayloadDetailsViewModel(
                dispatcherProvider = AppComponents.getAppModule().dispatcherProvider
            )
        }
    )
    val viewState by viewModel.viewStateFlow.collectAsStateWithLifecycle()
    LaunchedEffect(networkTraffic) {
        viewModel.preparePresentationData(networkTraffic, isResponse)
    }

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
    Column(
        modifier = modifier.fillMaxWidth().verticalScroll(rememberScrollState()).padding(8.dp)
    ) {
        viewState.headers?.let { headers ->
            Text(headers)
        }
        viewState.payload?.let { body ->
            Text(body)
        }
    }
}
