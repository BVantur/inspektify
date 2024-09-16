package sp.bvantur.inspektify.shared

import android.content.Intent
import android.widget.Toast
import sp.bvantur.inspektify.InspektifyActivity
import sp.bvantur.inspektify.applicationContext

internal actual fun startInspektifyWindow() {
    applicationContext.startActivity(
        Intent(applicationContext, InspektifyActivity::class.java).also { intent ->
            intent.flags = Intent.FLAG_ACTIVITY_NEW_TASK
        }
    )
    Toast.makeText(applicationContext, "Inspektify tool launched", Toast.LENGTH_SHORT).show()
}
