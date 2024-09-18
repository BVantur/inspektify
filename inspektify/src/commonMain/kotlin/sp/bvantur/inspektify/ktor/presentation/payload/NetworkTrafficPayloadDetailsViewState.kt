package sp.bvantur.inspektify.ktor.presentation.payload

import androidx.compose.ui.text.AnnotatedString
import sp.bvantur.inspektify.ktor.presentation.base.BaseViewState

internal data class NetworkTrafficPayloadDetailsViewState(
    val headers: AnnotatedString? = null,
    val payload: String? = null
) : BaseViewState
