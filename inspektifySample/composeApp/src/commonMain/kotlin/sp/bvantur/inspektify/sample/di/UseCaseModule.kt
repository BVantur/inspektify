package sp.bvantur.inspektify.sample.di

import org.koin.dsl.module
import sp.bvantur.inspektify.sample.domain.usecase.CreateUserUseCase
import sp.bvantur.inspektify.sample.domain.usecase.CreateUserUseCaseImpl
import sp.bvantur.inspektify.sample.domain.usecase.GetUserUseCase
import sp.bvantur.inspektify.sample.domain.usecase.GetUserUseCaseImpl

val domainModule = module {
    single<GetUserUseCase> { GetUserUseCaseImpl(get()) }
    single<CreateUserUseCase> { CreateUserUseCaseImpl(get()) }
}
