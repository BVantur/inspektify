package sp.bvantur.inspektify.ktor.domain.usecase

import sp.bvantur.inspektify.ktor.data.NetworkTrafficRepository

internal interface RemoveAllNetworkTrafficDataUseCase {
    suspend operator fun invoke()
}

internal class RemoveAllNetworkTrafficDataUseCaseImpl(private val repository: NetworkTrafficRepository) :
    RemoveAllNetworkTrafficDataUseCase {

    override suspend operator fun invoke() {
        repository.removeAllNetworkTrafficData()
    }
}
