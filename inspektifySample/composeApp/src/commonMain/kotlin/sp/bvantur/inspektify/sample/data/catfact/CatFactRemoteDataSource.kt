package sp.bvantur.inspektify.sample.data.catfact

import sp.bvantur.inspektify.sample.data.RemoteClient

class CatFactRemoteDataSource(
    private val client: RemoteClient
) {
    suspend fun getCatFact(): Result<CatFactRemote> = client.getCatFact()
}
