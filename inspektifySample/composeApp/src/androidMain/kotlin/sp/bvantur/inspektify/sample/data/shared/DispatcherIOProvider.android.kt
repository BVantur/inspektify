package sp.bvantur.inspektify.sample.data.shared

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers

internal actual val dispatcherIO: CoroutineDispatcher
    get() = Dispatchers.IO
