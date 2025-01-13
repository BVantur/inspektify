package sp.bvantur.inspektify.ktor.core.data.shared

import sp.bvantur.inspektify.ktor.client.data.DataStorageHandler
import sp.bvantur.inspektify.ktor.core.data.DataStorageHandlerImpl
import sp.bvantur.inspektify.ktor.core.di.AppComponents

internal actual object DataStorageProvider {
    private var dataStorageHandler: DataStorageHandler? = null

    actual fun provideDataStorageHandler(): DataStorageHandler {
        if (dataStorageHandler == null) {
            dataStorageHandler = DataStorageHandlerImpl(AppComponents.getDispatcherProvider())
        }
        return dataStorageHandler!!
    }
}
