package sp.bvantur.inspektify.ktor.client.di

import sp.bvantur.inspektify.ktor.client.data.datasource.NetworkTrafficLocalDataSource
import sp.bvantur.inspektify.ktor.core.data.NetworkTrafficRepositoryImpl
import sp.bvantur.inspektify.ktor.core.domain.NetworkTrafficRepository

internal object KtorModule {
    var networkTrafficLocalDataSource: NetworkTrafficLocalDataSource = NetworkTrafficLocalDataSource()

    var networkTrafficRepository: NetworkTrafficRepository = NetworkTrafficRepositoryImpl(networkTrafficLocalDataSource)
}
