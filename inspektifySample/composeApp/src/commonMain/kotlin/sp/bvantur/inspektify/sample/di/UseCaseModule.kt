package sp.bvantur.inspektify.sample.di

import org.koin.dsl.module
import sp.bvantur.inspektify.sample.domain.usecase.GetCatFactUseCase
import sp.bvantur.inspektify.sample.domain.usecase.GetCatFactUseCaseImpl

val domainModule = module {
    single<GetCatFactUseCase> { GetCatFactUseCaseImpl(get()) }
}
