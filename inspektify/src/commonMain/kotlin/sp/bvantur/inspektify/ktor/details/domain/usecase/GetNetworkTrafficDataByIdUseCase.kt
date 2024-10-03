package sp.bvantur.inspektify.ktor.details.domain.usecase

import sp.bvantur.inspektify.ktor.data.NetworkTrafficRepository
import sp.bvantur.inspektify.ktor.data.model.NetworkTraffic
import sp.bvantur.inspektify.ktor.data.model.NetworkTrafficId

internal interface GetNetworkTrafficDataByIdUseCase {
    suspend operator fun invoke(id: NetworkTrafficId): NetworkTraffic
}

internal class GetNetworkTrafficDataByIdUseCaseImpl(private val repository: NetworkTrafficRepository) :
    GetNetworkTrafficDataByIdUseCase {

    override suspend fun invoke(id: NetworkTrafficId): NetworkTraffic = repository.getNetworkTrafficData(id)
}
