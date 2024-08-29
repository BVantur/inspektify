package sp.bvantur.inspektify.sample.di

import org.koin.core.KoinApplication
import org.koin.core.context.startKoin
import org.koin.core.module.Module

fun initKoin(): KoinApplication = startKoin {
    modules(
        platformModule,
        dispatchersModule,
        dataSourceModule,
        domainModule,
        repositoryModule,
        networkModule,
        viewModelModule
    )
}

expect val platformModule: Module
