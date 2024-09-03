package sp.bvantur.inspektify.ktor.presentation.overview

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.ktor.data.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.data.utils.extensions.convertNullToEmpty
import sp.bvantur.inspektify.ktor.data.utils.extensions.nullOrEmpty
import sp.bvantur.inspektify.ktor.domain.utils.ByteSizeUtils
import sp.bvantur.inspektify.ktor.domain.utils.DateTimeUtils
import sp.bvantur.inspektify.ktor.presentation.base.ViewModelViewStateHandler
import sp.bvantur.inspektify.ktor.presentation.base.ViewModelViewStateHandlerImpl
import sp.bvantur.inspektify.ktor.presentation.utils.NetworkTrafficUtils
import sp.bvantur.inspektify.utils.DispatcherProvider

internal class NetworkTrafficDetailsOverviewViewModel(private val dispatcherProvider: DispatcherProvider,) :
    ViewModel(),
    ViewModelViewStateHandler<NetworkTrafficDetailsOverviewViewState> by ViewModelViewStateHandlerImpl(
        NetworkTrafficDetailsOverviewViewState(),
        dispatcherProvider
    ) {

    fun preparePresentationData(networkTraffic: NetworkTraffic?) {
        networkTraffic ?: return

        viewModelScope.launch(dispatcherProvider.main) {
            emitViewState(
                viewStateFlow.value.copy(
                    url = networkTraffic.url,
                    method = networkTraffic.method,
                    protocol = networkTraffic.protocol,
                    status = networkTraffic.responseStatusDescription.nullOrEmpty(),
                    response = "${
                        networkTraffic.responseStatus?.toString()?.convertNullToEmpty()
                    } ${networkTraffic.responseStatusDescription?.convertNullToEmpty()}",
                    ssl = NetworkTrafficUtils.getSslText(networkTraffic),
                    requestTime = DateTimeUtils.formatTimestamp(networkTraffic.requestTimestamp),
                    responseTime = DateTimeUtils.formatTimestamp(networkTraffic.responseTimestamp),
                    duration = DateTimeUtils.toTextWithTimeUnit(networkTraffic.tookDurationInMs),
                    requestSize = ByteSizeUtils.toTextWithByteUnit(
                        NetworkTrafficUtils.getAllRequestSize(networkTraffic)
                    ),
                    responseSize = ByteSizeUtils.toTextWithByteUnit(
                        NetworkTrafficUtils.getAllResponseSize(networkTraffic)
                    ),
                    totalSize = ByteSizeUtils.toTextWithByteUnit(
                        NetworkTrafficUtils.geAllNetworkTrafficSize(networkTraffic)
                    )
                )
            )
        }
    }
}
