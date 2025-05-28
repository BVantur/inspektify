package sp.bvantur.inspektify.ktor.client.di

import sp.bvantur.inspektify.ktor.client.data.datasource.NetworkTrafficLocalDataSource
import sp.bvantur.inspektify.ktor.core.data.NetworkTrafficRepositoryImpl
import sp.bvantur.inspektify.ktor.core.domain.NetworkTrafficRepository

internal object KtorModule {

    val networkTrafficLocalDataSource: NetworkTrafficLocalDataSource by lazy {
        NetworkTrafficLocalDataSource()
    }

    val networkTrafficRepository: NetworkTrafficRepository by lazy {
        NetworkTrafficRepositoryImpl(networkTrafficLocalDataSource)
    }
}
