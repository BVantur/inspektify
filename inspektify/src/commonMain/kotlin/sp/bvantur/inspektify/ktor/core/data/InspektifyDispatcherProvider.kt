package sp.bvantur.inspektify.ktor.core.data

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.MainCoroutineDispatcher
import sp.bvantur.inspektify.ktor.core.data.shared.dispatcherIO
import sp.bvantur.inspektify.ktor.core.domain.DispatcherProvider

internal class InspektifyDispatcherProvider(
    override val main: MainCoroutineDispatcher = Dispatchers.Main,
    override val io: CoroutineDispatcher = dispatcherIO,
    override val default: CoroutineDispatcher = Dispatchers.Default,
    override val unconfined: CoroutineDispatcher = Dispatchers.Unconfined
) : DispatcherProvider
