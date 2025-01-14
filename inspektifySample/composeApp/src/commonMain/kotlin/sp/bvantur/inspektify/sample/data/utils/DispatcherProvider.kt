package sp.bvantur.inspektify.sample.data.utils

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.MainCoroutineDispatcher
import sp.bvantur.inspektify.sample.data.shared.dispatcherIO

interface DispatcherProvider {
    val main: MainCoroutineDispatcher
    val io: CoroutineDispatcher
    val default: CoroutineDispatcher
    val unconfined: CoroutineDispatcher
}

class SampleDispatcherProvider(
    override val main: MainCoroutineDispatcher = Dispatchers.Main,
    override val io: CoroutineDispatcher = dispatcherIO,
    override val default: CoroutineDispatcher = Dispatchers.Default,
    override val unconfined: CoroutineDispatcher = Dispatchers.Unconfined
) : DispatcherProvider
