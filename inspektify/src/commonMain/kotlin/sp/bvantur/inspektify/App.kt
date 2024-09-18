package sp.bvantur.inspektify

import androidx.compose.runtime.Composable
import androidx.compose.runtime.DisposableEffect
import org.jetbrains.compose.ui.tooling.preview.Preview
import sp.bvantur.inspektify.ktor.ui.navigation.KtorNavHost
import sp.bvantur.inspektify.shared.disposeInspektifyWindow
import sp.bvantur.inspektify.ui.theme.InspektifyTheme

@Composable
@Preview
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
