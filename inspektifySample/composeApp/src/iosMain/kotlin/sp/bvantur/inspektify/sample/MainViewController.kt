package sp.bvantur.inspektify.sample

import androidx.compose.ui.window.ComposeUIViewController
import sp.bvantur.inspektify.sample.inspektify.registerIosInspektifyExtensions
import sp.bvantur.inspektify.sample.ui.App

@Suppress("FunctionName")
fun MainViewController() = ComposeUIViewController {
    registerIosInspektifyExtensions()
    App()
}
