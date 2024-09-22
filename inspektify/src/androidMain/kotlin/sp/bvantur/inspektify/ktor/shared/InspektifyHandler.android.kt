package sp.bvantur.inspektify.ktor.shared

import android.content.Intent
import android.widget.Toast
import sp.bvantur.inspektify.ktor.InspektifyActivity
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
