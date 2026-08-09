package sp.bvantur.inspektify.ktor.core.data

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.MainCoroutineDispatcher
import sp.bvantur.inspektify.ktor.core.domain.DispatcherProvider

internal expect class InspektifyDispatcherProvider() : DispatcherProvider
