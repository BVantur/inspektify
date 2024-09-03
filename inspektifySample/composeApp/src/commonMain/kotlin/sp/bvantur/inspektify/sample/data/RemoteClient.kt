package sp.bvantur.inspektify.sample.data

import io.ktor.client.HttpClient

class RemoteClient(private val httpClient: HttpClient) {

    fun getClient(): HttpClient = httpClient
}
