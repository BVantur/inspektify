package sp.bvantur.inspektify.sample.data.user

import io.ktor.client.HttpClient
import io.ktor.client.call.body
import io.ktor.client.request.request
import io.ktor.client.request.setBody
import io.ktor.http.ContentType
import io.ktor.http.HttpMethod
import io.ktor.http.contentType
import io.ktor.http.path
import kotlinx.coroutines.withContext
import sp.bvantur.inspektify.sample.data.utils.DispatcherProvider
import sp.bvantur.inspektify.sample.data.utils.NetworkUtils

class UserRemoteDataSource(private val httpClient: HttpClient, private val dispatcherProvider: DispatcherProvider) {
    suspend fun getUser(userId: UserId): Result<UserRemote?> = withContext(dispatcherProvider.io) {
        NetworkUtils.safeApiCall {
            httpClient.request {
                url {
                    method = HttpMethod.Get
                    path("users/$userId")
                }
            }.body<UserRemote?>()
        }
    }

    suspend fun createUser(user: CreateUserRemote): Result<CreateUserRemote> = withContext(dispatcherProvider.io) {
        NetworkUtils.safeApiCall {
            httpClient.request {
                url {
                    method = HttpMethod.Post
                    path("users")
                    contentType(ContentType.Application.Json)
                    setBody(user)
                }
            }.body<CreateUserRemote>()
        }
    }
}
