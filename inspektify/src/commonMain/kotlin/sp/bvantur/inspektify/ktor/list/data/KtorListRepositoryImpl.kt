package sp.bvantur.inspektify.ktor.list.data

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.map
import sp.bvantur.inspektify.ktor.DataRetentionPolicy
import sp.bvantur.inspektify.ktor.list.data.mapper.NetworkTrafficDataLocalMapper.toDomainModel
import sp.bvantur.inspektify.ktor.list.di.KtorListModule.ktorListLocalDataSource
import sp.bvantur.inspektify.ktor.list.domain.KtorListRepository
import sp.bvantur.inspektify.ktor.list.domain.model.NetworkTrafficListItem

internal class KtorListRepositoryImpl : KtorListRepository {

    override fun getNetworkTrafficItems(): Flow<List<NetworkTrafficListItem>> =
        ktorListLocalDataSource.getAllNetworkTrafficData().map { items ->
            items.map { singleItem ->
                singleItem.toDomainModel(ktorListLocalDataSource.getCurrentSessionTimestamp())
            }
        }

    override suspend fun removeAllNetworkTrafficData() {
        ktorListLocalDataSource.removeAllNetworkTrafficData()
    }

    override fun getRetentionPolicy(): DataRetentionPolicy? = ktorListLocalDataSource.getRetentionPolicy()
}
