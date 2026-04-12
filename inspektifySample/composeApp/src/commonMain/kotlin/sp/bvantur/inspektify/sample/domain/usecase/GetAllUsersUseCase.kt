package sp.bvantur.inspektify.sample.domain.usecase

import sp.bvantur.inspektify.sample.data.user.UserId
import sp.bvantur.inspektify.sample.data.user.UserRepository
import sp.bvantur.inspektify.sample.domain.model.User
import sp.bvantur.inspektify.sample.domain.utils.toUser

interface GetAllUsersUseCase {
    suspend operator fun invoke(): Result<Any>
}

class GetAllUsersUseCaseImpl(private val userRepository: UserRepository) : GetAllUsersUseCase {
    override suspend fun invoke(): Result<Any> {
        val response = userRepository.getAllUsers()
        if (response.isFailure) {
            return Result.failure(response.exceptionOrNull() ?: Exception("Unknown error"))
        }
        return Result.success(Any())
    }
}
