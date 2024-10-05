package sp.bvantur.inspektify.ktor.details.data

import sp.bvantur.inspektify.ktor.details.data.datasource.KtorDetailsLocalDataSource
import sp.bvantur.inspektify.ktor.details.data.mapper.KtorDetailsMapper
import sp.bvantur.inspektify.ktor.details.domain.KtorDetailsRepository

internal class KtorDetailsRepositoryImpl(private val localDataSource: KtorDetailsLocalDataSource) :
    KtorDetailsRepository {
    override suspend fun getCurlContent(id: Long): String {
        val details = localDataSource.getTransactionDetails(id)
        return KtorDetailsMapper.toCurlCommand(details)
    }

    override suspend fun getWholeNetworkTrafficContent(id: Long): String {
        val details = localDataSource.getTransactionDetails(id)
        return KtorDetailsMapper.toNetworkTrafficContent(details)
    }

    override suspend fun getTitle(id: Long): String {
        val details = localDataSource.getTransactionDetails(id)
        return "${details.method} ${details.path}"
    }
}
