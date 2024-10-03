package sp.bvantur.inspektify.ktor.overview.domain.model

internal data class KtorOverviewData(
    val url: String?,
    val method: String?,
    val protocol: String?,
    val status: String?,
    val response: String?,
    val ssl: String?,
    val requestTime: String?,
    val responseTime: String?,
    val duration: String?,
    val requestSize: String?,
    val responseSize: String?,
    val totalSize: String?
)
