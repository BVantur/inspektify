package sp.bvantur.inspektify.sample.domain.usecase

import sp.bvantur.inspektify.sample.data.user.UserRepository
import sp.bvantur.inspektify.sample.domain.model.User
import sp.bvantur.inspektify.sample.domain.utils.toUser

interface CreateUserUseCase {
    suspend operator fun invoke(): Result<User?>
}

class CreateUserUseCaseImpl(private val userRepository: UserRepository) : CreateUserUseCase {
    override suspend fun invoke(): Result<User?> {
        val response = userRepository.createUser()

        if (response.isFailure) {
            return Result.failure(response.exceptionOrNull() ?: Exception("Unknown error"))
        }
        return Result.success(response.getOrNull()?.toUser())
    }
}
