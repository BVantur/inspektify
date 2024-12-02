package sp.bvantur.inspektify.ktor.details.presentation

import androidx.compose.ui.text.AnnotatedString
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.input.TextFieldValue
import sp.bvantur.inspektify.ktor.client.shared.Platform
import sp.bvantur.inspektify.ktor.core.presentation.ViewState

internal data class NetworkTrafficDetailsViewState(
    val networkTrafficId: Long = -1,
    val title: String = "",
    val showFeedbackMessage: Boolean = false,
    val showShareAction: Boolean = !Platform.getTargetType().isDesktop(),
    val isSearching: Boolean = false,
    val searchQuery: TextFieldValue = TextFieldValue(""),
    val overviewData: AnnotatedString = buildAnnotatedString { },
    val originalOverviewData: AnnotatedString = buildAnnotatedString { },
    val overviewSearchQueryCount: Int = 0,
    val requestData: NetworkTrafficPayloadDetailsViewState = NetworkTrafficPayloadDetailsViewState(),
    val responseData: NetworkTrafficPayloadDetailsViewState = NetworkTrafficPayloadDetailsViewState(),
    val showDownloadDialog: Boolean = false
) : ViewState

internal data class NetworkTrafficPayloadDetailsViewState(
    val headers: AnnotatedString = buildAnnotatedString { },
    val originalHeaders: AnnotatedString = buildAnnotatedString { },
    val payload: AnnotatedString = buildAnnotatedString { },
    val originalPayload: AnnotatedString = buildAnnotatedString { },
    val searchQueryCount: Int = 0
) : ViewState
