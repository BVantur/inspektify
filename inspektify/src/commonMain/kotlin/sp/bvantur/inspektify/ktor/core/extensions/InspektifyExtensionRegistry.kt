package sp.bvantur.inspektify.ktor.core.extensions

import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import sp.bvantur.inspektify.ktor.client.data.SystemLogger
import sp.bvantur.inspektify.ktor.client.data.SystemLoggerImpl
import sp.bvantur.inspektify.ktor.extensions.InspektifyExtension

internal object InspektifyExtensionRegistry {

    internal var logger: SystemLogger = SystemLoggerImpl()

    private val _extensions = MutableStateFlow<List<InspektifyExtension>>(emptyList())
    val extensions: StateFlow<List<InspektifyExtension>> = _extensions.asStateFlow()

    fun add(extension: InspektifyExtension) {
        _extensions.update { current ->
            val existingIndex = current.indexOfFirst { it.id == extension.id }
            if (existingIndex >= 0) {
                logger.log(
                    "Inspektify: extension with id \"${extension.id}\" was already registered. Overwriting."
                )
                current.toMutableList().apply { set(existingIndex, extension) }
            } else {
                current + extension
            }
        }
    }

    fun remove(id: String) {
        _extensions.update { current -> current.filterNot { it.id == id } }
    }

    fun clear() {
        _extensions.value = emptyList()
    }

    fun findById(id: String): InspektifyExtension? = _extensions.value.firstOrNull { it.id == id }

    fun sorted(): List<InspektifyExtension> = _extensions.value.sortedBy { it.order }
}
