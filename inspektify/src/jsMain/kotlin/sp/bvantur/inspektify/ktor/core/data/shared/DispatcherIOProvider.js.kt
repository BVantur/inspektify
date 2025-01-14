package sp.bvantur.inspektify.ktor.core.data.shared

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers

internal actual val dispatcherIO: CoroutineDispatcher
    get() = Dispatchers.Default
