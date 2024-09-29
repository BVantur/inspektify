package sp.bvantur.inspektify.ktor.presentation.payload

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.ktor.data.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.presentation.base.ViewModelViewStateHandler
import sp.bvantur.inspektify.ktor.presentation.base.ViewModelViewStateHandlerImpl
import sp.bvantur.inspektify.ktor.presentation.utils.NetworkTrafficUtils
import sp.bvantur.inspektify.ktor.utils.DispatcherProvider

internal class NetworkTrafficPayloadDetailsViewModel(private val dispatcherProvider: DispatcherProvider) :
    ViewModel(),
    ViewModelViewStateHandler<NetworkTrafficPayloadDetailsViewState> by ViewModelViewStateHandlerImpl(
        NetworkTrafficPayloadDetailsViewState(),
        dispatcherProvider
    ) {
    fun preparePresentationData(networkTraffic: NetworkTraffic?, isResponse: Boolean) {
        networkTraffic ?: return

        viewModelScope.launch(dispatcherProvider.main.immediate) {
            val headers = NetworkTrafficUtils.formatHeadersAsAnnotatedString(
                if (isResponse) {
                    networkTraffic.responseHeaders
                } else {
                    networkTraffic.requestHeaders
                }
            )
            val payload = NetworkTrafficUtils.prettyPrintJson(
                if (isResponse) {
                    networkTraffic.responsePayload
                } else {
                    networkTraffic.requestPayload
                }
            )
            emitViewState(
                viewStateFlow.value.copy(
                    headers = headers,
                    payload = payload
                )
            )
        }
    }
}
