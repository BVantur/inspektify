package sp.bvantur.inspektify.ktor.ui.utils

import androidx.compose.material3.MaterialTheme
import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.Color
import sp.bvantur.inspektify.ktor.domain.model.StatusColor
import sp.bvantur.inspektify.ktor.ui.theme.success

internal object ColorUtils {
    @Composable
    fun statusColorToComposableColor(statusColor: StatusColor): Color = when (statusColor) {
        StatusColor.GREEN -> MaterialTheme.colorScheme.success
        StatusColor.RED -> MaterialTheme.colorScheme.error
        StatusColor.ORANGE -> MaterialTheme.colorScheme.secondary
    }
}
