package sp.bvantur.inspektify.sample.shared

import androidx.compose.runtime.Composable
import androidx.compose.runtime.State
import kotlinx.coroutines.flow.StateFlow

@Composable
internal expect fun <T> StateFlow<T>.collectWithLifecycle(): State<T>
