package sp.bvantur.inspektify.ktor.list.di

import sp.bvantur.inspektify.ktor.list.data.KtorListRepositoryImpl
import sp.bvantur.inspektify.ktor.list.data.datasource.KtorListLocalDataSource
import sp.bvantur.inspektify.ktor.list.domain.KtorListRepository
import sp.bvantur.inspektify.ktor.list.domain.usecase.GetAllNetworkTrafficDataUseCase
import sp.bvantur.inspektify.ktor.list.domain.usecase.GetAllNetworkTrafficDataUseCaseImpl
import sp.bvantur.inspektify.ktor.list.domain.usecase.GetCurrentSessionRetentionPolicy
import sp.bvantur.inspektify.ktor.list.domain.usecase.GetCurrentSessionRetentionPolicyImpl

internal object KtorListModule {

    val getAllNetworkTrafficDataUseCase: GetAllNetworkTrafficDataUseCase by lazy {
        GetAllNetworkTrafficDataUseCaseImpl()
    }

    val getCurrentSessionRetentionPolicy: GetCurrentSessionRetentionPolicy by lazy {
        GetCurrentSessionRetentionPolicyImpl()
    }

    val ktorListLocalDataSource: KtorListLocalDataSource by lazy {
        KtorListLocalDataSource()
    }

    val ktorListRepository: KtorListRepository by lazy {
        KtorListRepositoryImpl()
    }
}
