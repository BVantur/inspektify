package sp.bvantur.inspektify.ktor.details.ui

import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.text.selection.SelectionContainer
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import sp.bvantur.inspektify.ktor.details.presentation.NetworkTrafficPayloadDetailsViewState

@Composable
internal fun NetworkTrafficPayloadDetailsScreen(
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
