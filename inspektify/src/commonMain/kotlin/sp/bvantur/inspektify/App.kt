package sp.bvantur.inspektify

import androidx.compose.runtime.Composable
import androidx.compose.runtime.DisposableEffect
import sp.bvantur.inspektify.ktor.ui.navigation.KtorNavHost
import sp.bvantur.inspektify.shared.disposeInspektifyWindow
import sp.bvantur.inspektify.ui.theme.InspektifyTheme

@Composable
internal fun App() {
    DisposableEffect(Unit) {
        onDispose {
            disposeInspektifyWindow()
        }
    }
    InspektifyTheme {
        KtorNavHost()
    }
}
