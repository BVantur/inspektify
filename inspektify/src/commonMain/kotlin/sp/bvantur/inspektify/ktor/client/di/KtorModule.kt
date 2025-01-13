package sp.bvantur.inspektify.ktor.client.di

import sp.bvantur.inspektify.ktor.client.data.datasource.NetworkTrafficLocalDataSource
import sp.bvantur.inspektify.ktor.core.data.NetworkTrafficRepositoryImpl
import sp.bvantur.inspektify.ktor.core.di.AppComponents
import sp.bvantur.inspektify.ktor.core.domain.NetworkTrafficRepository

internal interface KtorModule {
    val networkTrafficRepository: NetworkTrafficRepository
}

internal class KtorModuleImpl : KtorModule {
    override val networkTrafficRepository: NetworkTrafficRepository by lazy {
        NetworkTrafficRepositoryImpl(
            localDataSource = NetworkTrafficLocalDataSource(
                dataStorageHandler = AppComponents.getDataStorageHandler()
            )
        )
    }
}
