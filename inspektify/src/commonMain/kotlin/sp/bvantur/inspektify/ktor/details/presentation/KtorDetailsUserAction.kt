package sp.bvantur.inspektify.ktor.details.presentation

import sp.bvantur.inspektify.ktor.core.presentation.UserAction

internal sealed interface KtorDetailsUserAction : UserAction {
    data object OnGetCurl : KtorDetailsUserAction
    data object OnShare : KtorDetailsUserAction
    data object OnCopyToClipboard : KtorDetailsUserAction
}
