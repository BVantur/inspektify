package sp.bvantur.inspektify.sample.di

import io.ktor.client.engine.js.JsClient
import org.koin.dsl.module

actual val platformModule = module {
    single {
        JsClient()
    }
}
