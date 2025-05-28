package sp.bvantur.inspektify.sample.di

import io.ktor.client.HttpClient
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.client.plugins.defaultRequest
import io.ktor.client.request.header
import io.ktor.serialization.kotlinx.json.json
import kotlinx.serialization.json.Json
import org.koin.dsl.module
import sp.bvantur.inspektify.ktor.AutoDetectTarget
import sp.bvantur.inspektify.ktor.DataRetentionPolicy
import sp.bvantur.inspektify.ktor.InspektifyKtor
import sp.bvantur.inspektify.ktor.LogLevel

private const val BASE_URL = "https://reqres.in/api/"

val networkModule = module {
    single {
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
                header("x-api-key", "reqres-free-v1")
            }
            install(InspektifyKtor) {
                autoDetectEnabledFor =
                    setOf(AutoDetectTarget.Desktop(), AutoDetectTarget.Apple, AutoDetectTarget.Android)
                logLevel = LogLevel.All
                dataRetentionPolicy = DataRetentionPolicy.SessionCount(4)
//                ignoreEndpoints = listOf(
//                    IgnorePathData(
//                        method = MethodType.ALL,
//                        matchingStrategy = EndpointMatchingStrategy.Regex("https://reqres\\.in/.*"),
//                    )
//                )
            }
        }
    }
}
