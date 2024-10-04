package sp.bvantur.inspektify.ktor.core.ui.theme

import androidx.compose.material3.MaterialTheme
import androidx.compose.runtime.Composable

@Composable
internal fun InspektifyTheme(content: @Composable () -> Unit) {
    MaterialTheme(
        colorScheme = InspektifyColorPalette,
        typography = InspektifyTypography,
        shapes = InspektifyShapes,
        content = content
    )
}
