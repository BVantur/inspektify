package sp.bvantur.inspektify.ktor.di

import kotlinx.serialization.json.Json
import sp.bvantur.inspektify.ktor.utils.DispatcherProvider
import sp.bvantur.inspektify.ktor.utils.SampleDispatcherProvider

internal object AppComponents {
    private var appModule: AppModule? = null
    private var ktorModule: KtorModule? = null

    fun getAppModule(): AppModule {
        if (appModule == null) {
            appModule = AppModuleImpl()
        }
        return appModule!!
    }

    fun getKtorModule(): KtorModule {
        if (ktorModule == null) {
            ktorModule = KtorModuleImpl()
        }
        return ktorModule!!
    }
}

internal interface AppModule {
    val dispatcherProvider: DispatcherProvider
    val json: Json
}

internal class AppModuleImpl : AppModule {

    override val dispatcherProvider: DispatcherProvider by lazy {
        SampleDispatcherProvider()
    }

    override val json: Json by lazy {
        Json {
            ignoreUnknownKeys = true
            prettyPrint = true
        }
    }
}
