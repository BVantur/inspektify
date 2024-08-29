package sp.bvantur.inspektify.sample.di

import org.koin.dsl.module
import sp.bvantur.inspektify.sample.data.catfact.CatFactRemoteDataSource

val dataSourceModule = module {
    single {
        CatFactRemoteDataSource(get())
    }
}
