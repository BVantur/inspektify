package sp.bvantur.inspektify.ktor.details.di

import sp.bvantur.inspektify.ktor.core.di.AppComponents
import sp.bvantur.inspektify.ktor.details.data.KtorDetailsRepositoryImpl
import sp.bvantur.inspektify.ktor.details.data.datasource.KtorDetailsLocalDataSource
import sp.bvantur.inspektify.ktor.details.domain.KtorDetailsRepository

internal object KtorDetailsModule {
    private var repository: KtorDetailsRepository? = null
    private var localDataSource: KtorDetailsLocalDataSource? = null

    fun getRepository(localDataSource: KtorDetailsLocalDataSource = getLocalDataSource()): KtorDetailsRepository {
        if (repository == null) {
            repository = KtorDetailsRepositoryImpl(localDataSource)
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
