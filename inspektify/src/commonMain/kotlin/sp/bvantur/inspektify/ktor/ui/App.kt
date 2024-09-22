package sp.bvantur.inspektify.ktor.ui

import androidx.compose.runtime.Composable
import androidx.compose.runtime.DisposableEffect
import sp.bvantur.inspektify.ktor.shared.disposeInspektifyWindow
import sp.bvantur.inspektify.ktor.ui.navigation.KtorNavHost
import sp.bvantur.inspektify.ktor.ui.theme.InspektifyTheme

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
