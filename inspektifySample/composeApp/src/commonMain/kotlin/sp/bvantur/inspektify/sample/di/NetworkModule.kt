package sp.bvantur.inspektify.sample.di

import io.ktor.client.HttpClient
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.client.plugins.defaultRequest
import io.ktor.client.plugins.logging.DEFAULT
import io.ktor.client.plugins.logging.LogLevel
import io.ktor.client.plugins.logging.Logger
import io.ktor.client.plugins.logging.Logging
import io.ktor.serialization.kotlinx.json.json
import kotlinx.serialization.ExperimentalSerializationApi
import kotlinx.serialization.json.Json
import org.koin.dsl.module
import sp.bvantur.inspektify.ktor.InspektifyKtor
import sp.bvantur.inspektify.sample.data.RemoteClient

private const val BASE_URL = "https://catfact.ninja/"

val networkModule = module {
    single {
        @OptIn(ExperimentalSerializationApi::class)
        Json {
            ignoreUnknownKeys = true
            explicitNulls = false
        }
    }

    single<HttpClient> {
        HttpClient(engine = get()) {
            install(ContentNegotiation) {
                json(get())
            }
            defaultRequest {
                url(BASE_URL)
            }
            install(Logging) {
                logger = Logger.DEFAULT
                level = LogLevel.ALL
            }
            install(InspektifyKtor)
        }
    }

    single<RemoteClient> {
        RemoteClient(get(), get())
    }
}
