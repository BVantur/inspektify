package sp.bvantur.inspektify.sample.di

import org.koin.dsl.module
import sp.bvantur.inspektify.sample.data.utils.DispatcherProvider
import sp.bvantur.inspektify.sample.data.utils.SampleDispatcherProvider

val dispatchersModule = module {
    single<DispatcherProvider> {
        SampleDispatcherProvider()
    }
}
