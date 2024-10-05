package sp.bvantur.inspektify.ktor.payload.domain

import sp.bvantur.inspektify.ktor.payload.domain.model.KtorPayloadData

internal interface KtorPayloadRepository {
    suspend fun getTransactionPayloadDetails(id: Long, isRequest: Boolean): KtorPayloadData
}
