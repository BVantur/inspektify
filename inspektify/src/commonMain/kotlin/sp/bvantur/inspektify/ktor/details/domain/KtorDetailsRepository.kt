package sp.bvantur.inspektify.ktor.details.domain

internal interface KtorDetailsRepository {
    suspend fun getCurlContent(id: Long): String
    suspend fun getWholeNetworkTrafficContent(id: Long): String
    suspend fun getTitle(id: Long): String
}
