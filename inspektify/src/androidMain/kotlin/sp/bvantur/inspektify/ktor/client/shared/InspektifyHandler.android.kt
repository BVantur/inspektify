package sp.bvantur.inspektify.ktor.client.shared

import android.content.Intent
import android.widget.Toast
import androidx.lifecycle.ProcessLifecycleOwner
import sp.bvantur.inspektify.ktor.InspektifyActivity
import sp.bvantur.inspektify.ktor.PresentationType
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

internal actual fun configurePresentationType(presentationType: PresentationType) {
    if (presentationType.isCustom()) return

    ProcessLifecycleOwner.get().lifecycle.addObserver(
        ShakeGestureListener()
    )
}
