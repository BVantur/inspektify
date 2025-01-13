package sp.bvantur.inspektify.ktor.list.domain

import kotlinx.coroutines.flow.Flow
import sp.bvantur.inspektify.ktor.DataRetentionPolicy
import sp.bvantur.inspektify.ktor.list.domain.model.NetworkTrafficListItem

internal interface KtorListRepository {

    suspend fun getNetworkTrafficItems(): Flow<List<NetworkTrafficListItem>>

    suspend fun removeAllNetworkTrafficData()

    fun getRetentionPolicy(): DataRetentionPolicy?
}
