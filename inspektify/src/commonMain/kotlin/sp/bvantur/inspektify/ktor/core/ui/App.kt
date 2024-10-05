package sp.bvantur.inspektify.ktor.core.ui

import androidx.compose.runtime.Composable
import androidx.compose.runtime.DisposableEffect
import sp.bvantur.inspektify.ktor.client.shared.disposeInspektifyWindow
import sp.bvantur.inspektify.ktor.core.ui.navigation.KtorNavHost
import sp.bvantur.inspektify.ktor.core.ui.theme.InspektifyTheme

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
