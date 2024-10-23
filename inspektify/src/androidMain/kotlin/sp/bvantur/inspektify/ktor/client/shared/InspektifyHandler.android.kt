package sp.bvantur.inspektify.ktor.client.shared

import android.content.Intent
import android.widget.Toast
import androidx.core.content.pm.ShortcutInfoCompat
import androidx.core.content.pm.ShortcutManagerCompat
import androidx.core.graphics.drawable.IconCompat
import androidx.lifecycle.ProcessLifecycleOwner
import sp.bvantur.inspektify.ktor.InspektifyActivity
import sp.bvantur.inspektify.ktor.PresentationConfig
import sp.bvantur.inspektify.ktor.ShakeGestureListener
import sp.bvantur.inspektify.ktor.applicationContext

internal actual fun startInspektifyWindow() {
    applicationContext.startActivity(
        Intent(applicationContext, InspektifyActivity::class.java).also { intent ->
            intent.flags = Intent.FLAG_ACTIVITY_NEW_TASK
        }
    )
    Toast.makeText(applicationContext, "Inspektify tool launched", Toast.LENGTH_SHORT).show()
}

internal actual fun disposeInspektifyWindow() {
    InspektifyActivity.inspektifyActivityInstance = null
}

internal actual fun configurePresentationType(presentationConfig: PresentationConfig) {
    if (presentationConfig.isCustom()) return

    if (presentationConfig.isShortcutEnabled()) {
        setupShortcut()
    } else {
        ShortcutManagerCompat.removeDynamicShortcuts(applicationContext, listOf("id1"))
    }

    ProcessLifecycleOwner.get().lifecycle.addObserver(
        ShakeGestureListener()
    )
}

private fun setupShortcut() {
    val icon = IconCompat.createWithResource(applicationContext, android.R.drawable.ic_menu_search)
    val shortcut = ShortcutInfoCompat.Builder(applicationContext, "id1")
        .setShortLabel("Inspektify")
        .setLongLabel("Open Inspektify window")
        .setIcon(icon)
        .setIntent(
            Intent(applicationContext, InspektifyActivity::class.java).also { intent ->
                intent.flags = Intent.FLAG_ACTIVITY_NEW_TASK
                intent.action = Intent.ACTION_VIEW
            }
        ).build()

    ShortcutManagerCompat.pushDynamicShortcut(applicationContext, shortcut)
}
