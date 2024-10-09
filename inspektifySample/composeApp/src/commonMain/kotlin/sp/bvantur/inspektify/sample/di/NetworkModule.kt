package sp.bvantur.inspektify.sample.di

import io.ktor.client.HttpClient
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.client.plugins.defaultRequest
import io.ktor.serialization.kotlinx.json.json
import kotlinx.serialization.ExperimentalSerializationApi
import kotlinx.serialization.json.Json
import org.koin.dsl.module
import sp.bvantur.inspektify.ktor.DataRetentionPolicy
import sp.bvantur.inspektify.ktor.InspektifyKtor
import sp.bvantur.inspektify.ktor.LogLevel
import sp.bvantur.inspektify.ktor.PresentationType

private const val BASE_URL = "https://reqres.in/api/"

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
            install(InspektifyKtor) {
                presentationType = PresentationType.AutoDetect
                logLevel = LogLevel.All
                dataRetentionPolicy = DataRetentionPolicy.SessionCount(4)
            }
        }
    }
}
