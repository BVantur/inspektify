package sp.bvantur.inspektify.sample.di

import io.ktor.client.engine.java.Java
import org.koin.dsl.module

actual val platformModule = module {
    single {
        Java.create()
    }
}
