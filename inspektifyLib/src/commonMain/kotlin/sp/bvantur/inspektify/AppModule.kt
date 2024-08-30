package sp.bvantur.inspektify

import sp.bvantur.inspektify.utils.DispatcherProvider
import sp.bvantur.inspektify.utils.SampleDispatcherProvider

internal object AppComponents {
    private var appModule: AppModule? = null

    fun getAppModule(): AppModule {
        if (appModule == null) {
            appModule = AppModuleImpl()
        }
        return appModule!!
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
