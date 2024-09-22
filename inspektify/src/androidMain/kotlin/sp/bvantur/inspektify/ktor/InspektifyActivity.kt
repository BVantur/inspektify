package sp.bvantur.inspektify.ktor

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import sp.bvantur.inspektify.ktor.ui.App

internal class InspektifyActivity : ComponentActivity() {
    companion object {
        var inspektifyActivityInstance: ComponentActivity? = null
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        inspektifyActivityInstance = this

        setContent {
            App()
        }
    }

    override fun onDestroy() {
        super.onDestroy()
        inspektifyActivityInstance = null
    }
}
