package sp.bvantur.inspektify.sample.presentation.user

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.launch
import sp.bvantur.inspektify.sample.data.utils.DispatcherProvider
import sp.bvantur.inspektify.sample.domain.usecase.CreateUserUseCase
import sp.bvantur.inspektify.sample.domain.usecase.GetUserUseCase
import sp.bvantur.inspektify.sample.presentation.base.ViewModelViewStateHandler
import sp.bvantur.inspektify.sample.presentation.base.ViewModelViewStateHandlerImpl

class UserViewModel(
    private val dispatcher: DispatcherProvider,
    private val getUserUseCase: GetUserUseCase,
    private val createUserUseCase: CreateUserUseCase
) : ViewModel(),
    ViewModelViewStateHandler<UserViewState> by ViewModelViewStateHandlerImpl(UserViewState(), dispatcher) {

    fun onGetNextUserAction() {
        viewModelScope.launch(dispatcher.main) {
            val result = getUserUseCase(viewStateFlow.value.users.size + 1)
            if (result.isFailure) {
                // TODO handle error
                return@launch
            }
            val newUser = result.getOrNull() ?: return@launch
            emitViewState(
                viewStateFlow.value.copy(
                    users = viewStateFlow.value.users.plus(newUser)
                )
            )
        }
    }

    fun onCreateUserAction() {
        viewModelScope.launch(dispatcher.main) {
            val result = createUserUseCase()
            if (result.isFailure) {
                // TODO handle error
                return@launch
            }
            val newUser = result.getOrNull() ?: return@launch
            emitViewState(
                viewStateFlow.value.copy(
                    users = viewStateFlow.value.users.plus(newUser)
                )
            )
        }
    }
}
