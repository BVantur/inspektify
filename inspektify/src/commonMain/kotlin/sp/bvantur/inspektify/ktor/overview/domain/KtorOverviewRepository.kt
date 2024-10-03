package sp.bvantur.inspektify.ktor.overview.domain

import sp.bvantur.inspektify.ktor.data.model.NetworkTrafficId
import sp.bvantur.inspektify.ktor.overview.domain.model.KtorOverviewData

internal interface KtorOverviewRepository {
    suspend fun getTransactionOverviewDetails(id: NetworkTrafficId): KtorOverviewData
}
