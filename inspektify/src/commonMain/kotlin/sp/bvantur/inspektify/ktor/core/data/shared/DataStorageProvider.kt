package sp.bvantur.inspektify.ktor.core.data.shared

import sp.bvantur.inspektify.ktor.client.data.DataStorageHandler

internal expect object DataStorageProvider {
    fun provideDataStorageHandler(): DataStorageHandler
}
