package sp.bvantur.inspektify.ktor.details.di

import kotlinx.serialization.json.Json
import sp.bvantur.inspektify.ktor.core.di.AppComponents
import sp.bvantur.inspektify.ktor.details.data.KtorDetailsRepositoryImpl
import sp.bvantur.inspektify.ktor.details.data.datasource.KtorDetailsLocalDataSource
import sp.bvantur.inspektify.ktor.details.domain.KtorDetailsRepository

internal object KtorDetailsModule {
    private var repository: KtorDetailsRepository? = null
    private var localDataSource: KtorDetailsLocalDataSource? = null

    fun getRepository(
        localDataSource: KtorDetailsLocalDataSource = getLocalDataSource(),
        json: Json = AppComponents.getAppModule().json
    ): KtorDetailsRepository {
        if (repository == null) {
            repository = KtorDetailsRepositoryImpl(json, localDataSource)
        }
        return repository!!
    }

    private fun getLocalDataSource(): KtorDetailsLocalDataSource {
        if (localDataSource == null) {
            localDataSource = KtorDetailsLocalDataSource(
                database = AppComponents.getDatabaseInstance(),
                dispatcherProvider = AppComponents.getDispatcherProvider()
            )
        }
        return localDataSource!!
    }
}
