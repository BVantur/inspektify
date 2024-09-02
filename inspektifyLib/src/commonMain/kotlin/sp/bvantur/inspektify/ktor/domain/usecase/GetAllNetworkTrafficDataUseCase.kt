package sp.bvantur.inspektify.ktor.domain.usecase

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow
import sp.bvantur.inspektify.ktor.data.NetworkTrafficRepository
import sp.bvantur.inspektify.ktor.data.utils.extensions.getDate
import sp.bvantur.inspektify.ktor.data.utils.extensions.getDuration
import sp.bvantur.inspektify.ktor.data.utils.extensions.getHost
import sp.bvantur.inspektify.ktor.data.utils.extensions.getHostImage
import sp.bvantur.inspektify.ktor.data.utils.extensions.getMethodWithPath
import sp.bvantur.inspektify.ktor.data.utils.extensions.getPresentationStatusCode
import sp.bvantur.inspektify.ktor.data.utils.extensions.getSize
import sp.bvantur.inspektify.ktor.data.utils.extensions.getTime
import sp.bvantur.inspektify.ktor.domain.model.NetworkTrafficListItem

internal typealias GroupedNetworkTrafficData = Map<String, List<NetworkTrafficListItem>>

internal interface GetAllNetworkTrafficDataUseCase {
    operator fun invoke(): Flow<GroupedNetworkTrafficData>
}

internal class GetAllNetworkTrafficDataUseCaseImpl(
    private val repository: NetworkTrafficRepository
) : GetAllNetworkTrafficDataUseCase {

    override fun invoke(): Flow<GroupedNetworkTrafficData> = flow {
        repository.networkTrafficData.collect { networkTrafficDataList ->
            emit(
                networkTrafficDataList.reversed().map { networkTrafficData ->
                    val statusCode = networkTrafficData.getPresentationStatusCode()
                    NetworkTrafficListItem(
                        statusCode = statusCode.statusCode,
                        statusColor = statusCode.statusColor,
                        methodWithPath = networkTrafficData.getMethodWithPath(),
                        host = networkTrafficData.getHost(),
                        hostImage = networkTrafficData.getHostImage(),
                        time = networkTrafficData.getTime(),
                        duration = networkTrafficData.getDuration(),
                        size = networkTrafficData.getSize()
                    ) to networkTrafficData.getDate()
                }.groupBy(
                    keySelector = { (_, localDate) ->
                        localDate
                    },
                    valueTransform = { (item, _) ->
                        item
                    }
                )
            )
        }
    }
}
