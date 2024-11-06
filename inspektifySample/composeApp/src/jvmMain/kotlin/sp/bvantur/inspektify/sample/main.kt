package sp.bvantur.inspektify.sample

import androidx.compose.ui.window.Window
import androidx.compose.ui.window.application
import sp.bvantur.inspektify.sample.di.KoinImpl
import sp.bvantur.inspektify.sample.ui.App

fun main() = application {
    KoinImpl.initKoin()
    Window(onCloseRequest = ::exitApplication, title = "Inspektify Sample") {
        App()
    }
}
