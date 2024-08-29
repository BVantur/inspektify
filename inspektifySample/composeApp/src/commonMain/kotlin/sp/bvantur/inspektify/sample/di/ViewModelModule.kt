package sp.bvantur.inspektify.sample.di

import org.koin.compose.viewmodel.dsl.viewModelOf
import org.koin.dsl.module
import sp.bvantur.inspektify.sample.presentation.fact.CatFactViewModel

val viewModelModule = module {
    viewModelOf(::CatFactViewModel)
}
