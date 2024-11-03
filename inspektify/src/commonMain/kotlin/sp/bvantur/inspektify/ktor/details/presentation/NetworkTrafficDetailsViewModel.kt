package sp.bvantur.inspektify.ktor.details.presentation

import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.input.TextFieldValue
import androidx.lifecycle.SavedStateHandle
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.SharingStarted
import kotlinx.coroutines.flow.distinctUntilChanged
import kotlinx.coroutines.flow.map
import kotlinx.coroutines.flow.stateIn
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.ktor.client.shared.CopyNetworkTrafficHandler
import sp.bvantur.inspektify.ktor.client.shared.Platform
import sp.bvantur.inspektify.ktor.client.shared.ShareNetworkTrafficHandler
import sp.bvantur.inspektify.ktor.core.presentation.SingleEventHandler
import sp.bvantur.inspektify.ktor.core.presentation.SingleEventHandlerImpl
import sp.bvantur.inspektify.ktor.core.presentation.ViewModelUserActionHandler
import sp.bvantur.inspektify.ktor.core.presentation.ViewStateViewModel
import sp.bvantur.inspektify.ktor.details.di.KtorDetailsModule
import sp.bvantur.inspektify.ktor.details.domain.KtorDetailsRepository
import sp.bvantur.inspektify.ktor.details.presentation.utils.DetailsNetworkTrafficTextUtils.searchAndAnnotatedText
import sp.bvantur.inspektify.ktor.details.presentation.utils.DetailsNetworkTrafficTextUtils.toOverviewAnnotatedString
import sp.bvantur.inspektify.ktor.details.ui.navigation.NETWORK_TRAFFIC_ID

internal class NetworkTrafficDetailsViewModel(
    private val savedStateHandle: SavedStateHandle,
    private val repository: KtorDetailsRepository = KtorDetailsModule.getRepository()
) : ViewStateViewModel<NetworkTrafficDetailsViewState>(NetworkTrafficDetailsViewState()),
    ViewModelUserActionHandler<NetworkTrafficDetailsUserAction>,
    SingleEventHandler<NetworkTrafficDetailsEvent> by SingleEventHandlerImpl() {

    val requestStateFlow = viewStateFlow.map { it.requestData }.distinctUntilChanged().stateIn(
        viewModelScope,
        SharingStarted.WhileSubscribed(SUBSCRIPTION_TIMEOUT),
        NetworkTrafficPayloadDetailsViewState()
    )

    val responseStateFlow = viewStateFlow.map { it.responseData }.distinctUntilChanged().stateIn(
        viewModelScope,
        SharingStarted.WhileSubscribed(SUBSCRIPTION_TIMEOUT),
        NetworkTrafficPayloadDetailsViewState()
    )

    override fun initialLoadData() {
        super.initialLoadData()
        val trafficId = savedStateHandle.get<Long>(NETWORK_TRAFFIC_ID) ?: return
        viewModelScope.launch {
            val overviewDetails = repository.getTransactionOverviewDetails(trafficId)

            val overviewData = toOverviewAnnotatedString(overviewDetails)

            val payloadRequestData = repository.getTransactionRequestPayloadDetails(trafficId)
            val payloadResponseData = repository.getTransactionResponsePayloadDetails(trafficId)

            val requestData = NetworkTrafficPayloadDetailsViewState(
                headers = payloadRequestData.headers,
                originalHeaders = payloadRequestData.headers,
                payload = buildAnnotatedString { append(payloadRequestData.payload) },
                originalPayload = buildAnnotatedString { append(payloadRequestData.payload) }
            )
            val responseData = NetworkTrafficPayloadDetailsViewState(
                headers = payloadResponseData.headers,
                originalHeaders = payloadResponseData.headers,
                payload = buildAnnotatedString { append(payloadResponseData.payload) },
                originalPayload = buildAnnotatedString { append(payloadResponseData.payload) }
            )

            val title = repository.getTitle(id = trafficId)
            emitViewState { viewState ->
                viewState.copy(
                    networkTrafficId = trafficId,
                    title = title,
                    overviewData = overviewData,
                    originalOverviewData = overviewData,
                    requestData = requestData,
                    responseData = responseData
                )
            }
        }
    }

    private fun onCurlAction() {
        viewModelScope.launch {
            ShareNetworkTrafficHandler.shareNetworkTrafficContent(
                repository.getCurlContent(viewStateFlow.value.networkTrafficId)
            )
            if (Platform.getTargetType().isDesktop()) {
                showFeedbackMessage()
            }
        }
    }

    private fun onShareAction() {
        viewModelScope.launch {
            ShareNetworkTrafficHandler.shareNetworkTrafficContent(
                repository.getWholeNetworkTrafficContent(viewStateFlow.value.networkTrafficId)
            )
        }
    }

    private fun onCopyAction() {
        viewModelScope.launch {
            CopyNetworkTrafficHandler.copyToClipboard(
                repository.getWholeNetworkTrafficContent(viewStateFlow.value.networkTrafficId)
            )
            showFeedbackMessage()
        }
    }

    override fun onUserAction(userAction: NetworkTrafficDetailsUserAction) {
        when (userAction) {
            NetworkTrafficDetailsUserAction.OnCopyToClipboard -> onCopyAction()
            NetworkTrafficDetailsUserAction.OnGetCurl -> onCurlAction()
            NetworkTrafficDetailsUserAction.OnShare -> onShareAction()
            NetworkTrafficDetailsUserAction.OnClearSearchQuery -> {
                onSearchQuery(TextFieldValue(""))
                viewModelScope.launch {
                    emitSingleEvent(NetworkTrafficDetailsEvent.MoveFocusOnSearch)
                }
            }

            is NetworkTrafficDetailsUserAction.OnSearchQuery -> onSearchQuery(userAction.query)
            NetworkTrafficDetailsUserAction.OnStartSearch -> onStartSearch()
            NetworkTrafficDetailsUserAction.OnNavigateBack -> onBackAction()
        }
    }

    private suspend fun showFeedbackMessage() {
        emitViewState { viewState ->
            viewState.copy(showFeedbackMessage = true)
        }

        delay(SHOW_MESSAGE_DELAY)

        emitViewState { viewState ->
            viewState.copy(showFeedbackMessage = false)
        }
    }

    private fun onStartSearch() {
        viewModelScope.launch {
            emitViewState { viewState ->
                viewState.copy(
                    isSearching = true
                )
            }
            delay(KEYBOARD_DELAY)
            emitSingleEvent(NetworkTrafficDetailsEvent.MoveFocusOnSearch)
        }
    }

    private fun onSearchQuery(query: TextFieldValue) {
        val (annotatedRequestHeaders, requestHeadersSearchCount) = searchAndAnnotatedText(
            text = viewStateFlow.value.requestData.originalHeaders,
            searchQuery = query.text
        )
        val (annotatedRequestPayload, requestPayloadSearchCount) = searchAndAnnotatedText(
            text = viewStateFlow.value.requestData.originalPayload,
            searchQuery = query.text
        )
        val (annotatedResponseHeaders, responseHeadersSearchCount) = searchAndAnnotatedText(
            text = viewStateFlow.value.responseData.originalHeaders,
            searchQuery = query.text
        )
        val (annotatedResponsePayload, responsePayloadSearchCount) = searchAndAnnotatedText(
            text = viewStateFlow.value.responseData.originalPayload,
            searchQuery = query.text
        )
        val (overviewData, overviewSearchCount) = searchAndAnnotatedText(
            text = viewStateFlow.value.originalOverviewData,
            searchQuery = query.text
        )

        emitViewState { viewState ->
            viewState.copy(
                requestData = viewStateFlow.value.requestData.copy(
                    headers = annotatedRequestHeaders,
                    payload = annotatedRequestPayload,
                    searchQueryCount = requestHeadersSearchCount + requestPayloadSearchCount
                ),
                responseData = viewStateFlow.value.responseData.copy(
                    headers = annotatedResponseHeaders,
                    payload = annotatedResponsePayload,
                    searchQueryCount = responseHeadersSearchCount + responsePayloadSearchCount
                ),
                overviewData = overviewData,
                overviewSearchQueryCount = overviewSearchCount,
                searchQuery = query
            )
        }
    }

    private fun onBackAction() {
        if (viewStateFlow.value.isSearching) {
            onSearchQuery(TextFieldValue(""))
            emitViewState { viewState ->
                viewState.copy(isSearching = false)
            }
        } else {
            viewModelScope.launch {
                emitSingleEvent(NetworkTrafficDetailsEvent.OnNavigateBack)
            }
        }
    }

    companion object {
        private const val SHOW_MESSAGE_DELAY = 3000L
        private const val KEYBOARD_DELAY = 200L
    }
}
