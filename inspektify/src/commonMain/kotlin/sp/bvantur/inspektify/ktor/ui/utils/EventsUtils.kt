package sp.bvantur.inspektify.ktor.ui.utils

import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.lifecycle.Lifecycle
import androidx.lifecycle.compose.LocalLifecycleOwner
import androidx.lifecycle.repeatOnLifecycle
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.withContext

@Composable
fun <T> CollectSingleEventsWithLifecycle(
    lifecycleState: Lifecycle.State = Lifecycle.State.STARTED,
    singleEventFlow: Flow<T>,
    handleSingleEvent: (T) -> Unit
) {
    val lifecycleOwner = LocalLifecycleOwner.current

    LaunchedEffect(singleEventFlow, lifecycleOwner.lifecycle) {
        lifecycleOwner.repeatOnLifecycle(lifecycleState) {
            withContext(Dispatchers.Main.immediate) {
                singleEventFlow.collect(handleSingleEvent)
            }
        }
    }
}
