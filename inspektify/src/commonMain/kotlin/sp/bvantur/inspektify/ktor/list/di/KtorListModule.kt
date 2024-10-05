package sp.bvantur.inspektify.ktor.list.di

import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.core.data.KtorPluginCachedConfig
import sp.bvantur.inspektify.ktor.core.di.AppComponents
import sp.bvantur.inspektify.ktor.core.domain.DispatcherProvider
import sp.bvantur.inspektify.ktor.list.data.KtorListRepositoryImpl
import sp.bvantur.inspektify.ktor.list.data.datasource.KtorListLocalDataSource
import sp.bvantur.inspektify.ktor.list.domain.KtorListRepository
import sp.bvantur.inspektify.ktor.list.domain.usecase.GetAllNetworkTrafficDataUseCase
import sp.bvantur.inspektify.ktor.list.domain.usecase.GetAllNetworkTrafficDataUseCaseImpl
import sp.bvantur.inspektify.ktor.list.domain.usecase.GetCurrentSessionRetentionPolicy
import sp.bvantur.inspektify.ktor.list.domain.usecase.GetCurrentSessionRetentionPolicyImpl

internal object KtorListModule {
    private var ktorListRepository: KtorListRepository? = null
    private var ktorListLocalDataSource: KtorListLocalDataSource? = null
    private var getNetworkTrafficUseCase: GetAllNetworkTrafficDataUseCase? = null
    private var getCurrentSessionRetentionPolicy: GetCurrentSessionRetentionPolicy? = null

    fun getAllNetworkTrafficDataUseCase(
        repository: KtorListRepository = getKtorListRepository()
    ): GetAllNetworkTrafficDataUseCase {
        if (getNetworkTrafficUseCase == null) {
            getNetworkTrafficUseCase = GetAllNetworkTrafficDataUseCaseImpl(repository)
        }
        return getNetworkTrafficUseCase!!
    }

    fun getCurrentSessionRetentionPolicy(
        repository: KtorListRepository = getKtorListRepository()
    ): GetCurrentSessionRetentionPolicy {
        if (getCurrentSessionRetentionPolicy == null) {
            getCurrentSessionRetentionPolicy = GetCurrentSessionRetentionPolicyImpl(repository)
        }
        return getCurrentSessionRetentionPolicy!!
    }

    fun getKtorListRepository(
        localDataSource: KtorListLocalDataSource = getKtorListLocalDataSource()
    ): KtorListRepository {
        if (ktorListRepository == null) {
            ktorListRepository = KtorListRepositoryImpl(localDataSource)
        }
        return ktorListRepository!!
    }

    private fun getKtorListLocalDataSource(
        database: InspektifyDB = AppComponents.getDatabaseInstance(),
        dispatcherProvider: DispatcherProvider = AppComponents.getDispatcherProvider(),
        ktorPluginCachedConfig: KtorPluginCachedConfig = AppComponents.getKtorPluginCachedConfig()
    ): KtorListLocalDataSource {
        if (ktorListLocalDataSource == null) {
            ktorListLocalDataSource = KtorListLocalDataSource(
                database = database,
                dispatcherProvider = dispatcherProvider,
                ktorPluginCachedConfig = ktorPluginCachedConfig

            )
        }
        return ktorListLocalDataSource!!
    }
}
