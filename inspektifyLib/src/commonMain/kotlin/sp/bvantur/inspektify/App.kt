package sp.bvantur.inspektify

import androidx.compose.runtime.Composable
import org.jetbrains.compose.ui.tooling.preview.Preview
import sp.bvantur.inspektify.ktor.ui.networktrafficlist.NetworkTrafficListRoute
import sp.bvantur.inspektify.ui.theme.InspektifyTheme

@Composable
@Preview
internal fun App() {
    InspektifyTheme {
        NetworkTrafficListRoute()
    }
}
