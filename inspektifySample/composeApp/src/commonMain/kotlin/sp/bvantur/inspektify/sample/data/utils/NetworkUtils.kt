package sp.bvantur.inspektify.sample.data.utils

import io.ktor.client.plugins.ClientRequestException

object NetworkUtils {
    inline fun <T> safeApiCall(apiCall: () -> T): Result<T> = try {
        Result.success(value = apiCall())
    } catch (e: ClientRequestException) {
        Result.failure(exception = e)
    }
}
