package sp.bvantur.inspektify.sample.domain.usecase

import sp.bvantur.inspektify.sample.data.catfact.CatFactRepository
import sp.bvantur.inspektify.sample.domain.model.CatFact
import sp.bvantur.inspektify.sample.domain.utils.toCatFact

interface GetCatFactUseCase {
    suspend operator fun invoke(): Result<CatFact?>
}

class GetCatFactUseCaseImpl(
    private val catFactRepository: CatFactRepository
) : GetCatFactUseCase {
    override suspend fun invoke(): Result<CatFact?> {
        val response = catFactRepository.getCatFact()
        if (response.isFailure) {
            return Result.failure(response.exceptionOrNull() ?: Exception("Unknown error"))
        }
        return Result.success(response.getOrNull()?.toCatFact())
    }
}
