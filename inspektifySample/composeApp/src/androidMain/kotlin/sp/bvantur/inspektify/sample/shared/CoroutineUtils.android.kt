package sp.bvantur.inspektify.sample.shared

import androidx.compose.runtime.Composable
import androidx.compose.runtime.State
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import kotlinx.coroutines.flow.StateFlow

@Composable
internal actual fun <T> StateFlow<T>.collectWithLifecycle(): State<T> = this.collectAsStateWithLifecycle()
