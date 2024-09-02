package sp.bvantur.inspektify

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import sp.bvantur.inspektify.ktor.ui.networktrafficlist.NetworkTrafficListRoute

internal class InspektifyActivity : ComponentActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContent {
            NetworkTrafficListRoute()
        }
    }
}
