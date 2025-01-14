package sp.bvantur.inspektify.ktor.core.data.shared

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.IO

internal actual val dispatcherIO: CoroutineDispatcher
    get() = Dispatchers.IO
