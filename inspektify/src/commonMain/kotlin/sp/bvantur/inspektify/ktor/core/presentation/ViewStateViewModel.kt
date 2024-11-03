package sp.bvantur.inspektify.ktor.core.presentation

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.SharingStarted
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.onStart
import kotlinx.coroutines.flow.stateIn
import kotlinx.coroutines.flow.update

internal abstract class ViewStateViewModel<State : ViewState>(initialViewState: State) : ViewModel() {

    private val mutableViewStateFlow = MutableStateFlow(initialViewState)
    val viewStateFlow: StateFlow<State> = mutableViewStateFlow.onStart { initialLoadData() }
        .stateIn(
            viewModelScope,
            SharingStarted.WhileSubscribed(SUBSCRIPTION_TIMEOUT),
            initialViewState
        )

    fun emitViewState(onUpdateViewState: (State) -> State) {
        mutableViewStateFlow.update {
            onUpdateViewState(viewStateFlow.value)
        }
    }

    protected open fun initialLoadData() {}

    internal companion object {
        const val SUBSCRIPTION_TIMEOUT = 5000L
    }
}
