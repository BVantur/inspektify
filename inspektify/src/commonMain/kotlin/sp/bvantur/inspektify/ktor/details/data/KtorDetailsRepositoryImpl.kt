package sp.bvantur.inspektify.ktor.details.data

import sp.bvantur.inspektify.ktor.core.di.AppComponents.json
import sp.bvantur.inspektify.ktor.details.data.mapper.DetailsNetworkTrafficMapper
import sp.bvantur.inspektify.ktor.details.data.mapper.OverviewNetworkTrafficMapper
import sp.bvantur.inspektify.ktor.details.data.mapper.PayloadNetworkTrafficMapper
import sp.bvantur.inspektify.ktor.details.di.KtorDetailsModule.ktorDetailsLocalDataSource
import sp.bvantur.inspektify.ktor.details.domain.KtorDetailsRepository
import sp.bvantur.inspektify.ktor.details.domain.model.KtorOverviewData
import sp.bvantur.inspektify.ktor.details.domain.model.KtorPayloadData

internal class KtorDetailsRepositoryImpl : KtorDetailsRepository {
    override suspend fun getCurlContent(id: Long): String {
        val details = ktorDetailsLocalDataSource.getTransactionDetails(id)
        return DetailsNetworkTrafficMapper.toCurlCommand(details)
    }

    override suspend fun getWholeNetworkTrafficContent(id: Long): String {
        val details = ktorDetailsLocalDataSource.getTransactionDetails(id)
        return DetailsNetworkTrafficMapper.toNetworkTrafficContent(details)
    }

    override suspend fun getTitle(id: Long): String {
        val details = ktorDetailsLocalDataSource.getTransactionDetails(id)
        return "${details.method} ${details.path}"
    }

    override suspend fun getTransactionOverviewDetails(id: Long): KtorOverviewData =
        OverviewNetworkTrafficMapper.toOverviewDomain(ktorDetailsLocalDataSource.getTransactionDetails(id))

    override suspend fun getTransactionRequestPayloadDetails(id: Long): KtorPayloadData =
        PayloadNetworkTrafficMapper.toPayloadDomain(
            data = ktorDetailsLocalDataSource.getTransactionDetails(id),
            isRequest = true,
            json = json
        )

    override suspend fun getTransactionResponsePayloadDetails(id: Long): KtorPayloadData =
        PayloadNetworkTrafficMapper.toPayloadDomain(
            data = ktorDetailsLocalDataSource.getTransactionDetails(id),
            isRequest = false,
            json = json
        )
}
