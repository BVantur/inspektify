package sp.bvantur.inspektify.ktor.overview.di

import sp.bvantur.inspektify.ktor.core.di.AppComponents
import sp.bvantur.inspektify.ktor.overview.data.KtorOverviewRepositoryImpl
import sp.bvantur.inspektify.ktor.overview.data.datasource.KtorOverviewLocalDataSource
import sp.bvantur.inspektify.ktor.overview.domain.KtorOverviewRepository

internal object KtorOverviewModule {
    private var repository: KtorOverviewRepository? = null
    private var localDataSource: KtorOverviewLocalDataSource? = null

    fun getKtorOverviewRepository(
        localDataSource: KtorOverviewLocalDataSource = getKtorOverviewLocalDataSource()
    ): KtorOverviewRepository {
        if (repository == null) {
            repository = KtorOverviewRepositoryImpl(localDataSource)
        }
        return repository!!
    }

    private fun getKtorOverviewLocalDataSource(): KtorOverviewLocalDataSource {
        if (localDataSource == null) {
            localDataSource = KtorOverviewLocalDataSource(
                database = AppComponents.getDatabaseInstance(),
                dispatcherProvider = AppComponents.getDispatcherProvider()
            )
        }
        return localDataSource!!
    }
}
