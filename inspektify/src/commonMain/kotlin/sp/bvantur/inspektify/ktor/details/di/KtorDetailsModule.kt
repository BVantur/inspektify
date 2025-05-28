package sp.bvantur.inspektify.ktor.details.di

import sp.bvantur.inspektify.ktor.details.data.KtorDetailsRepositoryImpl
import sp.bvantur.inspektify.ktor.details.data.datasource.KtorDetailsLocalDataSource
import sp.bvantur.inspektify.ktor.details.domain.KtorDetailsRepository

internal object KtorDetailsModule {

    val ktorDetailsRepository: KtorDetailsRepository by lazy {
        KtorDetailsRepositoryImpl()
    }

    val ktorDetailsLocalDataSource: KtorDetailsLocalDataSource by lazy {
        KtorDetailsLocalDataSource()
    }
}
