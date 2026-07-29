package sp.bvantur.inspektify.ktor.extensions

import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.vector.ImageVector
import org.jetbrains.compose.resources.DrawableResource

/**
 * A client-registered tab inside Inspektify.
 *
 * Registered extensions appear in the "Extensions" page of Inspektify. Selecting one opens a detail
 * screen whose body is rendered by [content]. The detail screen shows its own top bar with [title]
 * and a back action to the extension list.
 *
 * ### Building the extension body
 *
 * [content] is an ordinary `@Composable` slot, so on Compose Multiplatform / Android Compose you can
 * put anything inside it — a single screen, a list, forms, or a full navigation graph with multiple
 * screens and subscreens. Typical patterns:
 *
 * - **Single screen:** just render composables directly.
 * - **Own navigation:** host your own `NavHost` (androidx.navigation), Voyager, Decompose, or any
 *   other navigator inside [content]. Inspektify does not restrict what you compose here.
 * - **Own state/DI:** hoist state or inject dependencies as you would anywhere else in your app.
 *
 * Note: Inspektify currently owns the detail screen's top bar and the system back action bubbles to
 * Inspektify's outer navigation. Coordinating back-handling with an inner navigator and customizing
 * the top bar per subscreen are not yet supported.
 *
 * @property id Stable, unique identifier. Re-registering with the same [id] overwrites the previous entry.
 * @property title Human-readable label shown in the extensions list and in the detail top bar.
 * @property icon Optional avatar icon; when null, the first letter of [title] is used.
 * @property order Sort order in the extensions list. Lower values come first.
 * @property content Composable body of the detail screen. Free-form — host your own navigation if needed.
 */
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
