package sp.bvantur.inspektify.sample.di

import org.koin.core.module.dsl.singleOf
import org.koin.dsl.module
import sp.bvantur.inspektify.sample.data.user.UserRemoteDataSource

val dataSourceModule = module {
    singleOf(::UserRemoteDataSource)
}
