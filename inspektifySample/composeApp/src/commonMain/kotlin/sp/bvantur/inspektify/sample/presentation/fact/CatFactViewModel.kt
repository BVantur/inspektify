package sp.bvantur.inspektify.sample.presentation.fact

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.sample.data.utils.DispatcherProvider
import sp.bvantur.inspektify.sample.domain.usecase.GetCatFactUseCase
import sp.bvantur.inspektify.sample.presentation.base.ViewModelViewStateHandler
import sp.bvantur.inspektify.sample.presentation.base.ViewModelViewStateHandlerImpl

class CatFactViewModel(
    private val dispatcher: DispatcherProvider,
    private val getCatFactUseCase: GetCatFactUseCase
) : ViewModel(),
    ViewModelViewStateHandler<CatFactViewState> by ViewModelViewStateHandlerImpl(CatFactViewState(), dispatcher) {

    fun onGetNewFactAction() {
        viewModelScope.launch(dispatcher.main) {
            val result = getCatFactUseCase()
            if (result.isFailure) {
                // TODO handle error
                return@launch
            }
            val newFact = result.getOrNull() ?: return@launch
            emitViewState(
                viewStateFlow.value.copy(
                    facts = viewStateFlow.value.facts.plus(newFact)
                )
            )
        }
    }
}
