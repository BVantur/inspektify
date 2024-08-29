package sp.bvantur.inspektify.sample.di

import org.koin.core.module.dsl.viewModelOf
import org.koin.dsl.module
import sp.bvantur.inspektify.sample.presentation.user.UserViewModel

val viewModelModule = module {
    viewModelOf(::UserViewModel)
}
