package sp.bvantur.inspektify.ktor.payload.presentation

import androidx.compose.ui.text.AnnotatedString
import sp.bvantur.inspektify.ktor.core.presentation.ViewState

internal data class NetworkTrafficPayloadDetailsViewState(
    val headers: AnnotatedString? = null,
    val payload: String? = null
) : ViewState
