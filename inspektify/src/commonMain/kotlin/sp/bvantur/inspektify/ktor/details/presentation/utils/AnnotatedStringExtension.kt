package sp.bvantur.inspektify.ktor.details.presentation.utils

import androidx.compose.ui.text.AnnotatedString
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.withStyle

internal fun AnnotatedString.Builder.onAppendToAnnotatedString(key: String, value: String?) {
    value ?: return

    withStyle(style = SpanStyle(fontWeight = FontWeight.Bold)) {
        append(key)
        append(": ")
    }
    append("$value\n")
}
