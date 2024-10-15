package sp.bvantur.inspektify.ktor.payload.data

import kotlinx.serialization.json.Json
import sp.bvantur.inspektify.ktor.payload.data.datasource.KtorPayloadLocalDataSource
import sp.bvantur.inspektify.ktor.payload.data.mapper.KtorPayloadDataMapper
import sp.bvantur.inspektify.ktor.payload.domain.KtorPayloadRepository
import sp.bvantur.inspektify.ktor.payload.domain.model.KtorPayloadData

internal class KtorPayloadRepositoryImpl(
    private val localDataSource: KtorPayloadLocalDataSource,
    private val json: Json
) : KtorPayloadRepository {
    override suspend fun getTransactionPayloadDetails(id: Long, isRequest: Boolean): KtorPayloadData =
        KtorPayloadDataMapper.toDomain(
            data = localDataSource.getTransactionOverviewDetails(id),
            isRequest = isRequest,
            json = json
        )
}
