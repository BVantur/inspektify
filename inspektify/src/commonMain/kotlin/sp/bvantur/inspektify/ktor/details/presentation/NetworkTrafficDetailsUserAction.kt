package sp.bvantur.inspektify.ktor.details.presentation

import androidx.compose.ui.text.input.TextFieldValue
import sp.bvantur.inspektify.ktor.core.presentation.UserAction

internal sealed interface NetworkTrafficDetailsUserAction : UserAction {
    data object OnGetCurl : NetworkTrafficDetailsUserAction
    data object OnShare : NetworkTrafficDetailsUserAction
    data object OnCopyToClipboard : NetworkTrafficDetailsUserAction
    data object OnStartSearch : NetworkTrafficDetailsUserAction
    data object OnClearSearchQuery : NetworkTrafficDetailsUserAction
    data class OnSearchQuery(val query: TextFieldValue) : NetworkTrafficDetailsUserAction
    data object OnNavigateBack : NetworkTrafficDetailsUserAction
}
