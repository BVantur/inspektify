package sp.bvantur.inspektify.ktor.details.ui

import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.text.selection.SelectionContainer
import androidx.compose.material3.LocalTextStyle
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.text.AnnotatedString
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp

@Composable
internal fun NetworkTrafficDetailsOverviewScreen(overviewData: AnnotatedString, modifier: Modifier = Modifier) {
    Box(modifier = modifier.fillMaxWidth()) {
        SelectionContainer(modifier = Modifier.fillMaxWidth().padding(8.dp)) {
            Column {
                Text(
                    text = overviewData,
                    style = LocalTextStyle.current.copy(
                        lineHeight = 28.sp
                    )
                )
            }
        }
    }
}
