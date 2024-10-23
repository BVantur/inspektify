package sp.bvantur.inspektify.ktor.client.shared

import androidx.compose.ui.awt.ComposePanel
import sp.bvantur.inspektify.ktor.PresentationConfig
import sp.bvantur.inspektify.ktor.core.ui.App
import java.awt.Dimension
import java.awt.KeyboardFocusManager
import java.awt.Toolkit
import java.awt.event.KeyEvent
import javax.swing.JFrame

private var frameWindow: JFrame? = null

internal actual fun configurePresentationType(presentationConfig: PresentationConfig) {
    if (presentationConfig.isCustom()) return

    KeyboardFocusManager.getCurrentKeyboardFocusManager().addKeyEventDispatcher { event ->
        if (event.id == KeyEvent.KEY_PRESSED) {
            if (event.isControlDown && event.isShiftDown && event.keyCode == KeyEvent.VK_D) {
                startInspektifyWindow()
                true
            } else {
                false
            }
        } else {
            false
        }
    }
}

internal actual fun startInspektifyWindow() {
    if (frameWindow != null) return

    val composePanel = ComposePanel().also { panel ->
        panel.setContent {
            App()
        }
    }
    frameWindow = JFrame().apply {
        defaultCloseOperation = JFrame.DISPOSE_ON_CLOSE
        title = "Inspektify"
    }.apply {
        val screenSize: Dimension = Toolkit.getDefaultToolkit().screenSize
        contentPane.add(composePanel)
        val frameHeight = (screenSize.height * 0.8).toInt()
        val frameWidth = (frameHeight * (500.0 / 1000.0)).toInt()
        setSize(frameWidth, frameHeight)

        val xPosition = screenSize.width - frameWidth
        val yPosition = (screenSize.height - frameHeight) / 2

        setLocation(xPosition, yPosition)
        isVisible = true
    }
}

internal actual fun disposeInspektifyWindow() {
    frameWindow = null
}
