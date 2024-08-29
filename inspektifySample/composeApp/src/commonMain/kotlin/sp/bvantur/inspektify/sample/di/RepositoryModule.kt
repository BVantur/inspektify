package sp.bvantur.inspektify.sample.di

import org.koin.dsl.module
import sp.bvantur.inspektify.sample.data.catfact.CatFactRepository

val repositoryModule =
    module {
        single {
            CatFactRepository(
                get()
            )
        }
    }
