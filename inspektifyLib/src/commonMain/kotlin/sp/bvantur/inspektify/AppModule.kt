package sp.bvantur.inspektify

import sp.bvantur.inspektify.ktor.KtorModule
import sp.bvantur.inspektify.ktor.KtorModuleImpl
import sp.bvantur.inspektify.utils.DispatcherProvider
import sp.bvantur.inspektify.utils.SampleDispatcherProvider

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
}

internal class AppModuleImpl : AppModule {

    override val dispatcherProvider: DispatcherProvider by lazy {
        SampleDispatcherProvider()
    }
}
