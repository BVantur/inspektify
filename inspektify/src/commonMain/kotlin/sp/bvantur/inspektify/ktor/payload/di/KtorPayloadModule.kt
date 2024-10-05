package sp.bvantur.inspektify.ktor.payload.di

import sp.bvantur.inspektify.ktor.core.di.AppComponents
import sp.bvantur.inspektify.ktor.payload.data.KtorPayloadRepositoryImpl
import sp.bvantur.inspektify.ktor.payload.data.datasource.KtorPayloadLocalDataSource
import sp.bvantur.inspektify.ktor.payload.domain.KtorPayloadRepository

internal object KtorPayloadModule {
    private var repository: KtorPayloadRepository? = null
    private var localDataSource: KtorPayloadLocalDataSource? = null

    fun getKtorPayloadRepository(
        localDataSource: KtorPayloadLocalDataSource = getKtorPayloadLocalDataSource()
    ): KtorPayloadRepository {
        if (repository == null) {
            repository = KtorPayloadRepositoryImpl(localDataSource)
        }
        return repository!!
    }

    private fun getKtorPayloadLocalDataSource(): KtorPayloadLocalDataSource {
        if (localDataSource == null) {
            localDataSource = KtorPayloadLocalDataSource(
                database = AppComponents.getDatabaseInstance(),
                dispatcherProvider = AppComponents.getDispatcherProvider()
            )
        }
        return localDataSource!!
    }
}
