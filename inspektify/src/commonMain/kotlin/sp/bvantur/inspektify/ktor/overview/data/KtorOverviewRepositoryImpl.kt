package sp.bvantur.inspektify.ktor.overview.data

import sp.bvantur.inspektify.ktor.client.data.model.NetworkTrafficId
import sp.bvantur.inspektify.ktor.overview.data.datasource.KtorOverviewLocalDataSource
import sp.bvantur.inspektify.ktor.overview.data.mapper.KtorOverviewDataMapper
import sp.bvantur.inspektify.ktor.overview.domain.KtorOverviewRepository
import sp.bvantur.inspektify.ktor.overview.domain.model.KtorOverviewData

internal class KtorOverviewRepositoryImpl(private val localDataSource: KtorOverviewLocalDataSource) :
    KtorOverviewRepository {

    override suspend fun getTransactionOverviewDetails(id: NetworkTrafficId): KtorOverviewData =
        KtorOverviewDataMapper.toDomain(localDataSource.getTransactionOverviewDetails(id))
}
