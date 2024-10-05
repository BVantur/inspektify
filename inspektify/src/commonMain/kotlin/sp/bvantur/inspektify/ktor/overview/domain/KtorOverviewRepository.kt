package sp.bvantur.inspektify.ktor.overview.domain

import sp.bvantur.inspektify.ktor.overview.domain.model.KtorOverviewData

internal interface KtorOverviewRepository {
    suspend fun getTransactionOverviewDetails(id: Long): KtorOverviewData
}
