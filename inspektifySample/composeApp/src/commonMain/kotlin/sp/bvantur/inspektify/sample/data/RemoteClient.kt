package sp.bvantur.inspektify.sample.data

import io.ktor.client.HttpClient
import io.ktor.client.call.body
import io.ktor.client.request.request
import io.ktor.http.HttpMethod
import io.ktor.http.path
import kotlinx.coroutines.withContext
import sp.bvantur.inspektify.sample.data.catfact.CatFactRemote
import sp.bvantur.inspektify.sample.data.utils.DispatcherProvider
import sp.bvantur.inspektify.sample.data.utils.NetworkUtils

class RemoteClient(
    private val httpClient: HttpClient,
    private val dispatcherProvider: DispatcherProvider
) {

    suspend fun getCatFact(): Result<CatFactRemote> = withContext(dispatcherProvider.io) {
        NetworkUtils.safeApiCall {
            httpClient.request {
                url {
                    method = HttpMethod.Get
                    path("fact")
                }
            }.body<CatFactRemote>()
        }
    }
}
