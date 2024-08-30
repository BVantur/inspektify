package sp.bvantur.inspektify.sample.domain.usecase

import sp.bvantur.inspektify.sample.data.user.UserId
import sp.bvantur.inspektify.sample.data.user.UserRepository
import sp.bvantur.inspektify.sample.domain.model.User
import sp.bvantur.inspektify.sample.domain.utils.toUser

interface GetUserUseCase {
    suspend operator fun invoke(userId: UserId): Result<User?>
}

class GetUserUseCaseImpl(
    private val userRepository: UserRepository
) : GetUserUseCase {
    override suspend fun invoke(userId: UserId): Result<User?> {
        val response = userRepository.getUser(userId)
        if (response.isFailure) {
            return Result.failure(response.exceptionOrNull() ?: Exception("Unknown error"))
        }
        return Result.success(response.getOrNull()?.toUser())
    }
}
