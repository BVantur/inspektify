package sp.bvantur.inspektify.ktor.core.presentation

import kotlinx.coroutines.channels.Channel
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.receiveAsFlow
import kotlinx.coroutines.withContext
import sp.bvantur.inspektify.ktor.core.di.AppComponents
import sp.bvantur.inspektify.ktor.core.domain.DispatcherProvider

internal interface SingleEventHandler<SingleEvent : sp.bvantur.inspektify.ktor.core.presentation.SingleEvent> {
    val singleEventFlow: Flow<SingleEvent>

    suspend fun emitSingleEvent(singleEvent: SingleEvent)
}

internal class SingleEventHandlerImpl<SingleEvent : sp.bvantur.inspektify.ktor.core.presentation.SingleEvent>(
    private val dispatcherProvider: DispatcherProvider = AppComponents.getDispatcherProvider()
) : SingleEventHandler<SingleEvent> {
    private val mutableSingleEventChannel = Channel<SingleEvent>(capacity = Channel.BUFFERED)
    override val singleEventFlow = mutableSingleEventChannel.receiveAsFlow()

    override suspend fun emitSingleEvent(singleEvent: SingleEvent) {
        withContext(dispatcherProvider.main.immediate) {
            mutableSingleEventChannel.send(singleEvent)
        }
    }
}
