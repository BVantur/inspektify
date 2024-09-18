package sp.bvantur.inspektify.ktor.presentation.details

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.ktor.data.model.NetworkTrafficId
import sp.bvantur.inspektify.ktor.domain.usecase.GetNetworkTrafficDataByIdUseCase
import sp.bvantur.inspektify.ktor.presentation.base.ViewModelViewStateHandler
import sp.bvantur.inspektify.ktor.presentation.base.ViewModelViewStateHandlerImpl
import sp.bvantur.inspektify.ktor.presentation.utils.NetworkTrafficUtils
import sp.bvantur.inspektify.ktor.shared.CopyNetworkTrafficHandler
import sp.bvantur.inspektify.utils.DispatcherProvider

internal class NetworkTrafficDetailsViewModel(
    private val getNetworkTrafficDataByIdUseCase: GetNetworkTrafficDataByIdUseCase,
    private val dispatcherProvider: DispatcherProvider
) : ViewModel(),
    ViewModelViewStateHandler<NetworkTrafficDetailsViewState> by ViewModelViewStateHandlerImpl(
        NetworkTrafficDetailsViewState(),
        dispatcherProvider
    ) {

    fun loadRestTransactionById(id: NetworkTrafficId?) {
        id ?: return

        viewModelScope.launch(dispatcherProvider.main) {
            val networkTraffic = getNetworkTrafficDataByIdUseCase(id)
            emitViewState(
                viewStateFlow.value.copy(
                    networkTraffic = networkTraffic
                )
            )
        }
    }

    fun copyToClipboard() {
        CopyNetworkTrafficHandler.copyToClipboard(
            NetworkTrafficUtils.copyToClipboardStructure(viewStateFlow.value.networkTraffic)
        )
    }
}
