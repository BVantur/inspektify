package sp.bvantur.inspektify.ktor.core.ui.theme

import androidx.compose.material3.ColorScheme
import androidx.compose.material3.lightColorScheme
import androidx.compose.ui.graphics.Color

internal val Mercury = Color(0xFFE9E9E9)
internal val SeaGreen = Color(0xFF2E8B57)
internal val Ferra = Color(0XFFb3251e)

internal val ColorScheme.success: Color
    get() = SeaGreen
internal val ColorScheme.disabled: Color
    get() = Mercury

internal val InspektifyColorPalette = lightColorScheme()
