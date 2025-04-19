package sp.bvantur.inspektify.ktor

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import sp.bvantur.inspektify.ktor.core.ui.App

internal class InspektifyActivity : ComponentActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        enableEdgeToEdge()
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

    companion object {
        var inspektifyActivityInstance: ComponentActivity? = null
    }
}
