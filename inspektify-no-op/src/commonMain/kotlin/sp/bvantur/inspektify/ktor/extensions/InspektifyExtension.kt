package sp.bvantur.inspektify.ktor.extensions

import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.vector.ImageVector
import org.jetbrains.compose.resources.DrawableResource

public class InspektifyExtension(
    public val id: String,
    public val title: String,
    public val icon: InspektifyIcon? = null,
    public val order: Int = 0,
    public val content: @Composable () -> Unit
)

public sealed interface InspektifyIcon {
    public class Vector(public val imageVector: ImageVector) : InspektifyIcon
    public class Painter(public val resource: DrawableResource) : InspektifyIcon
}
