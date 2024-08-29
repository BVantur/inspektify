package sp.bvantur.inspektify.sample.data.catfact

class CatFactRepository(
    private val remoteDataSource: CatFactRemoteDataSource
) {
    suspend fun getCatFact(): Result<CatFactRemote> = remoteDataSource.getCatFact()
}
