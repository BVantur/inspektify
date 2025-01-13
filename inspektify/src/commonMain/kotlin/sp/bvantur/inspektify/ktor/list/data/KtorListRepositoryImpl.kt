package sp.bvantur.inspektify.ktor.list.data

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.map
import sp.bvantur.inspektify.ktor.DataRetentionPolicy
import sp.bvantur.inspektify.ktor.list.data.datasource.KtorListLocalDataSource
import sp.bvantur.inspektify.ktor.list.data.mapper.NetworkTrafficDataLocalMapper.toDomainModel
import sp.bvantur.inspektify.ktor.list.domain.KtorListRepository
import sp.bvantur.inspektify.ktor.list.domain.model.NetworkTrafficListItem

internal class KtorListRepositoryImpl(private val localDataSource: KtorListLocalDataSource) : KtorListRepository {

    override suspend fun getNetworkTrafficItems(): Flow<List<NetworkTrafficListItem>> =
        localDataSource.getAllNetworkTrafficData().map { items ->
            items.map { singleItem ->
                singleItem.toDomainModel(localDataSource.getCurrentSessionTimestamp())
            }
        }

    override suspend fun removeAllNetworkTrafficData() {
        localDataSource.removeAllNetworkTrafficData()
    }

    override fun getRetentionPolicy(): DataRetentionPolicy? = localDataSource.getRetentionPolicy()
}
