package sp.bvantur.inspektify.ktor.client.di

import sp.bvantur.inspektify.ktor.client.data.datasource.NetworkTrafficLocalDataSource
import sp.bvantur.inspektify.ktor.core.data.NetworkTrafficRepository
import sp.bvantur.inspektify.ktor.core.di.AppComponents
import sp.bvantur.inspektify.ktor.core.di.AppComponents.getDatabaseInstance

internal interface KtorModule {
    val networkTrafficRepository: NetworkTrafficRepository
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
}
