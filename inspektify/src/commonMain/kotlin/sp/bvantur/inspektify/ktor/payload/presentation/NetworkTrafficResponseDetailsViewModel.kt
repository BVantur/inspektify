package sp.bvantur.inspektify.ktor.payload.presentation

import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.ktor.core.presentation.ViewStateViewModel
import sp.bvantur.inspektify.ktor.payload.di.KtorPayloadModule
import sp.bvantur.inspektify.ktor.payload.domain.KtorPayloadRepository

internal class NetworkTrafficResponseDetailsViewModel(
    private val networkTrafficId: Long?, // TODO make it not nullable
    private val repository: KtorPayloadRepository = KtorPayloadModule.getKtorPayloadRepository()
) : ViewStateViewModel<NetworkTrafficPayloadDetailsViewState>(NetworkTrafficPayloadDetailsViewState()) {

    override fun initialLoadData() {
        super.initialLoadData()
        viewModelScope.launch {
            val payloadData = repository.getTransactionPayloadDetails(networkTrafficId!!, false)
            emitViewState { viewState ->
                viewState.copy(
                    headers = payloadData.headers,
                    payload = payloadData.payload
                )
            }
        }
    }
}
