package sp.bvantur.inspektify.ktor.core.ui.utils

import androidx.compose.material3.MaterialTheme
import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.Color
import sp.bvantur.inspektify.ktor.core.ui.theme.success
import sp.bvantur.inspektify.ktor.list.domain.model.StatusColor

internal object ColorUtils {
    @Composable
    fun statusColorToComposableColor(statusColor: StatusColor): Color = when (statusColor) {
        StatusColor.GREEN -> MaterialTheme.colorScheme.success
        StatusColor.RED -> MaterialTheme.colorScheme.error
        StatusColor.ORANGE -> MaterialTheme.colorScheme.secondary
    }
}
