package sp.bvantur.inspektify.sample.di

import org.koin.dsl.module
import sp.bvantur.inspektify.sample.data.user.UserRemoteDataSource

val dataSourceModule = module {
    single {
        UserRemoteDataSource(get(), get())
    }
}
