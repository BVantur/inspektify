package sp.bvantur.inspektify.ktor.di

import sp.bvantur.inspektify.ktor.core.di.AppComponents
import sp.bvantur.inspektify.ktor.core.di.AppComponents.getDatabaseInstance
import sp.bvantur.inspektify.ktor.data.NetworkTrafficRepository
import sp.bvantur.inspektify.ktor.data.local.NetworkTrafficLocalDataSource
import sp.bvantur.inspektify.ktor.details.domain.usecase.GetNetworkTrafficDataByIdUseCase
import sp.bvantur.inspektify.ktor.details.domain.usecase.GetNetworkTrafficDataByIdUseCaseImpl

internal interface KtorModule {
    val networkTrafficRepository: NetworkTrafficRepository
    val getNetworkTrafficDataByIdUseCase: GetNetworkTrafficDataByIdUseCase
}

internal class KtorModuleImpl : KtorModule {
    override val networkTrafficRepository: NetworkTrafficRepository by lazy {
        NetworkTrafficRepository(
            localDataSource = NetworkTrafficLocalDataSource(
                database = getDatabaseInstance(),
                dispatcherProvider = AppComponents.getDispatcherProvider()
            )
        )
    }

    override val getNetworkTrafficDataByIdUseCase: GetNetworkTrafficDataByIdUseCase by lazy {
        GetNetworkTrafficDataByIdUseCaseImpl(networkTrafficRepository)
    }
}
