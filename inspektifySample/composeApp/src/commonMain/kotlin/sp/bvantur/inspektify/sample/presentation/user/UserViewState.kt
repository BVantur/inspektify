package sp.bvantur.inspektify.sample.presentation.user

import sp.bvantur.inspektify.sample.domain.model.User
import sp.bvantur.inspektify.sample.presentation.base.BaseViewState

data class UserViewState(val users: List<User> = listOf()) : BaseViewState
