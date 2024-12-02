package sp.bvantur.inspektify.ktor.details.domain

import sp.bvantur.inspektify.ktor.details.domain.model.KtorOverviewData
import sp.bvantur.inspektify.ktor.details.domain.model.KtorPayloadData

internal interface KtorDetailsRepository {
    suspend fun getCurlContent(id: Long): String
    suspend fun getWholeNetworkTrafficContent(id: Long): String
    suspend fun getTitle(id: Long): String
    suspend fun getTransactionOverviewDetails(id: Long): KtorOverviewData
    suspend fun getTransactionRequestPayloadDetails(id: Long): KtorPayloadData
    suspend fun getTransactionResponsePayloadDetails(id: Long): KtorPayloadData
    suspend fun getHtmlContent(id: Long): Pair<String, String>
    suspend fun getTxtContent(id: Long): Pair<String, String>
}
