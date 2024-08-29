package sp.bvantur.inspektify.sample.di

import org.koin.dsl.module
import sp.bvantur.inspektify.sample.data.user.UserRepository

val repositoryModule =
    module {
        single {
            UserRepository(
                get()
            )
        }
    }
