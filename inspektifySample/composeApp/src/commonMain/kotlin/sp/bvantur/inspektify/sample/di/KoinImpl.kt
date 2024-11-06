package sp.bvantur.inspektify.sample.di

import io.ktor.client.HttpClient
import io.ktor.client.call.body
import io.ktor.client.request.request
import io.ktor.http.HttpMethod
import io.ktor.http.path
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import org.koin.core.KoinApplication
import org.koin.core.component.KoinComponent
import org.koin.core.component.get
import org.koin.core.component.inject
import org.koin.core.context.startKoin
import org.koin.core.module.Module
import sp.bvantur.inspektify.sample.data.user.UserRemote
import kotlin.experimental.ExperimentalObjCName
import kotlin.native.ObjCName

@OptIn(ExperimentalObjCName::class)
@ObjCName("ComposeAppKoinImplKt")
object KoinImpl {
    @ObjCName("doInitKoin")
    fun initKoin(): KoinApplication = startKoin {
        println("START KOIN")
        println("!!!!!!!!!!!!!!!!!!!!!!!!")
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

    private val httpClient by lazy {
        object : KoinComponent {
            val im: HttpClient by inject()
        }.im
    }
    fun makeApiCall() {
        GlobalScope.launch {
            val response = httpClient.request {
                url {
                    method = HttpMethod.Get
                    path("users/1")
                }
            }.body<UserRemote?>()
            println(response)
            println("EOF response")
        }
    }
}

expect val platformModule: Module
