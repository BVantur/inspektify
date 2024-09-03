package sp.bvantur.inspektify

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent

internal class InspektifyActivity : ComponentActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContent {
            App()
        }
    }
}
