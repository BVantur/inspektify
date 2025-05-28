package sp.bvantur.inspektify.ktor.list.domain.usecase

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.map
import sp.bvantur.inspektify.ktor.core.domain.utils.KtorPresentationConstants
import sp.bvantur.inspektify.ktor.list.di.KtorListModule.ktorListRepository
import sp.bvantur.inspektify.ktor.list.domain.model.NetworkTrafficListItem

internal typealias GroupedNetworkTrafficData = Map<String, List<NetworkTrafficListItem>>

internal interface GetAllNetworkTrafficDataUseCase {
    operator fun invoke(): Flow<Pair<GroupedNetworkTrafficData, Set<String>>>
}

internal class GetAllNetworkTrafficDataUseCaseImpl : GetAllNetworkTrafficDataUseCase {

    override fun invoke(): Flow<Pair<GroupedNetworkTrafficData, Set<String>>> =
        ktorListRepository.getNetworkTrafficItems().map { items ->

            val data = items.reversed()

            val statusCodes = data
                .asSequence()
                .distinctBy { it.statusCode }
                .map { it.statusCode }
                .filter { it != KtorPresentationConstants.MISSING_DATA }
                .sortedBy { it.toInt() }
                .map { it }
                .toSet()

            val methods = data
                .distinctBy { it.method }
                .filter { it.method.isNotBlank() }
                .map { it.method }.toSet()

            val suggestions = statusCodes + methods

            val groupedNetworkTrafficData: Map<String, List<NetworkTrafficListItem>> = data.map { item ->
                item to item.date
            }.groupBy(
                keySelector = { (_, localDate) ->
                    localDate
                },
                valueTransform = { (item, _) ->
                    item
                }
            )
            groupedNetworkTrafficData to suggestions
        }
}
