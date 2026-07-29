package sp.bvantur.inspektify.sample.inspektify

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.BugReport
import androidx.compose.material.icons.filled.Palette
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Switch
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import sp.bvantur.inspektify.ktor.extensions.InspektifyExtension
import sp.bvantur.inspektify.ktor.extensions.InspektifyExtensions
import sp.bvantur.inspektify.ktor.extensions.InspektifyIcon

fun registerSampleInspektifyExtensions() {
    InspektifyExtensions.register(
        InspektifyExtension(
            id = "design-system",
            title = "Design System",
            icon = InspektifyIcon.Vector(Icons.Filled.Palette),
            order = 0,
            content = { DesignSystemShowcase() }
        )
    )

    InspektifyExtensions.register(
        InspektifyExtension(
            id = "debug-flags",
            title = "Debug Flags",
            icon = InspektifyIcon.Vector(Icons.Filled.BugReport),
            order = 1,
            content = { DebugFlagsScreen() }
        )
    )
}

@Composable
private fun DesignSystemShowcase() {
    Column(
        modifier = Modifier.fillMaxSize().padding(16.dp).verticalScroll(rememberScrollState()),
        verticalArrangement = Arrangement.spacedBy(8.dp)
    ) {
        Text("Typography", style = MaterialTheme.typography.titleMedium)
        Text("Display Large", style = MaterialTheme.typography.displayLarge)
        Text("Headline Medium", style = MaterialTheme.typography.headlineMedium)
        Text("Title Medium", style = MaterialTheme.typography.titleMedium)
        Text("Body Large", style = MaterialTheme.typography.bodyLarge)
        Text("Label Small", style = MaterialTheme.typography.labelSmall)
    }
}

@Composable
private fun DebugFlagsScreen() {
    var experimentalMode by remember { mutableStateOf(false) }
    var verboseLogging by remember { mutableStateOf(true) }

    Column(
        modifier = Modifier.fillMaxSize().padding(16.dp),
        verticalArrangement = Arrangement.spacedBy(16.dp)
    ) {
        FlagRow(label = "Experimental mode", checked = experimentalMode) { experimentalMode = it }
        FlagRow(label = "Verbose logging", checked = verboseLogging) { verboseLogging = it }
    }
}

@Composable
private fun FlagRow(label: String, checked: Boolean, onCheckedChange: (Boolean) -> Unit) {
    androidx.compose.foundation.layout.Row(
        modifier = Modifier.padding(vertical = 4.dp),
        verticalAlignment = androidx.compose.ui.Alignment.CenterVertically
    ) {
        Text(label, modifier = Modifier.weight(1f))
        Switch(checked = checked, onCheckedChange = onCheckedChange)
    }
}
