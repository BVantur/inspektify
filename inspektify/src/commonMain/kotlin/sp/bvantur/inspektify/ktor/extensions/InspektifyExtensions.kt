package sp.bvantur.inspektify.ktor.extensions

import sp.bvantur.inspektify.ktor.core.extensions.InspektifyExtensionRegistry

public object InspektifyExtensions {

    public fun register(extension: InspektifyExtension) {
        InspektifyExtensionRegistry.add(extension)
    }

    public fun unregister(id: String) {
        InspektifyExtensionRegistry.remove(id)
    }

    public fun clear() {
        InspektifyExtensionRegistry.clear()
    }
}
