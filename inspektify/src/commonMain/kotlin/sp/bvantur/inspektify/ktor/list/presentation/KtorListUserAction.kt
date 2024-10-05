package sp.bvantur.inspektify.ktor.list.presentation

import androidx.compose.ui.text.input.TextFieldValue
import sp.bvantur.inspektify.ktor.core.presentation.UserAction

internal sealed interface KtorListUserAction : UserAction {
    data object OnRemoveAllNetworkTraffic : KtorListUserAction
    data object OnNavigateBack : KtorListUserAction
    data class OnNetworkTrafficItemSelected(val id: Long) : KtorListUserAction
    data object OnStartSearch : KtorListUserAction
    data object OnClearSearchQuery : KtorListUserAction
    data class OnSearchSuggestionQuery(val suggestion: String) : KtorListUserAction
    data class OnSearchQuery(val query: TextFieldValue) : KtorListUserAction
}
