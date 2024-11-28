package sp.bvantur.inspektify.ktor.client.shared

import androidx.compose.ui.awt.ComposePanel
import sp.bvantur.inspektify.ktor.AutoDetectTarget
import sp.bvantur.inspektify.ktor.MainKey
import sp.bvantur.inspektify.ktor.MainModifier
import sp.bvantur.inspektify.ktor.ShortcutCombination
import sp.bvantur.inspektify.ktor.core.ui.App
import java.awt.Dimension
import java.awt.KeyboardFocusManager
import java.awt.Toolkit
import java.awt.event.KeyEvent
import javax.swing.JFrame

private var frameWindow: JFrame? = null

internal actual fun configurePresentation(autoDetectEnabledFor: Set<AutoDetectTarget>, shortcutEnabled: Boolean) {
    val target = autoDetectEnabledFor.find { it is AutoDetectTarget.Desktop } as? AutoDetectTarget.Desktop
    if (target != null) {
        KeyboardFocusManager.getCurrentKeyboardFocusManager().addKeyEventDispatcher { event ->
            if (event.id == KeyEvent.KEY_PRESSED) {
                if (isInspektifyShortcutPressed(target.shortcutCombination, event)) {
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
}

private fun isInspektifyShortcutPressed(shortcutCombination: ShortcutCombination, event: KeyEvent): Boolean {
    val requiredModifiersPressed = shortcutCombination.mainModifier.fold(0) { acc, control ->
        acc or when (control) {
            MainModifier.CONTROL -> KeyEvent.CTRL_DOWN_MASK
            MainModifier.SHIFT -> KeyEvent.SHIFT_DOWN_MASK
            else -> 0
        }
    }

    val areExactModifiersPressed = event.modifiersEx == requiredModifiersPressed
    val isMainKeyPressed = event.keyCode == shortcutCombination.mainKey.asKeyEventKeyCode()

    return areExactModifiersPressed && isMainKeyPressed
}

private fun MainKey.asKeyEventKeyCode(): Int = when (this) {
    MainKey.D -> KeyEvent.VK_D
    MainKey.I -> KeyEvent.VK_I
    MainKey.N -> KeyEvent.VK_N
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
