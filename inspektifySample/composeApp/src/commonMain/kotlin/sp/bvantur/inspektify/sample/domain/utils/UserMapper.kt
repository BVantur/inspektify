package sp.bvantur.inspektify.sample.domain.utils

import sp.bvantur.inspektify.sample.data.user.CreateUserRemote
import sp.bvantur.inspektify.sample.data.user.UserRemote
import sp.bvantur.inspektify.sample.domain.model.User

fun UserRemote.toUser() =
    User(firstName = this.data?.firstName, lastName = this.data?.lastName, email = this.data?.email)

fun CreateUserRemote.toUser() = User(firstName = this.name)
