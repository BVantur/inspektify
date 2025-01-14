package sp.bvantur.inspektify.sample.data.shared

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.IO

internal actual val dispatcherIO: CoroutineDispatcher
    get() = Dispatchers.IO
