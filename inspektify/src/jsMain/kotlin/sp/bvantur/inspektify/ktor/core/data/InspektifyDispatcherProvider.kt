package sp.bvantur.inspektify.ktor.core.data

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.MainCoroutineDispatcher
import sp.bvantur.inspektify.ktor.core.domain.DispatcherProvider

internal actual class InspektifyDispatcherProvider actual constructor() : DispatcherProvider {
    override val main: MainCoroutineDispatcher = Dispatchers.Main
    override val io: CoroutineDispatcher = Dispatchers.Default // Use Default instead of IO for JS
    override val default: CoroutineDispatcher = Dispatchers.Default
    override val unconfined: CoroutineDispatcher = Dispatchers.Unconfined
}