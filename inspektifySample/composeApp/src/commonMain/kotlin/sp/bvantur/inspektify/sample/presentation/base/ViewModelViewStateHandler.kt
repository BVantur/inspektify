package sp.bvantur.inspektify.sample.presentation.base

import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.withContext
import sp.bvantur.inspektify.sample.data.utils.DispatcherProvider

interface ViewModelViewStateHandler<ViewState : BaseViewState> {
    val viewStateFlow: StateFlow<ViewState>

    suspend fun emitViewState(viewState: ViewState)
}

class ViewModelViewStateHandlerImpl<ViewState : BaseViewState>(
    initialViewState: ViewState,
    private val dispatcherProvider: DispatcherProvider
) : ViewModelViewStateHandler<ViewState> {
    private val mutableViewStateFlow = MutableStateFlow(initialViewState)
    override val viewStateFlow: StateFlow<ViewState> = mutableViewStateFlow.asStateFlow()

    override suspend fun emitViewState(viewState: ViewState) {
        withContext(dispatcherProvider.main.immediate) {
            mutableViewStateFlow.update {
                viewState
            }
        }
    }
}
