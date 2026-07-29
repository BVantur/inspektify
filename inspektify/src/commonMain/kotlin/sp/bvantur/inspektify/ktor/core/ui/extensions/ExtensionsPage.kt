package sp.bvantur.inspektify.ktor.core.ui.extensions

import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.automirrored.rounded.ArrowBack
import androidx.compose.material3.ExperimentalMaterial3Api
import androidx.compose.material3.HorizontalDivider
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.material3.TopAppBar
import androidx.compose.material3.TopAppBarDefaults
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import org.jetbrains.compose.resources.painterResource
import sp.bvantur.inspektify.ktor.client.shared.Platform
import sp.bvantur.inspektify.ktor.core.extensions.InspektifyExtensionRegistry
import sp.bvantur.inspektify.ktor.extensions.InspektifyExtension
import sp.bvantur.inspektify.ktor.extensions.InspektifyIcon

@OptIn(ExperimentalMaterial3Api::class)
@Composable
internal fun ExtensionsPageTopBar() {
    val showBackAction = !Platform.getTargetType().isDesktop()
    TopAppBar(
        title = { Text("Extensions", color = MaterialTheme.colorScheme.onPrimary) },
        navigationIcon = {
            if (showBackAction) {
                IconButton(onClick = { Platform.closeInspektifyWindow() }) {
                    Icon(
                        imageVector = Icons.AutoMirrored.Rounded.ArrowBack,
                        contentDescription = "Close Inspektify",
                        tint = MaterialTheme.colorScheme.onPrimary
                    )
                }
            }
        },
        colors = TopAppBarDefaults.topAppBarColors(
            containerColor = MaterialTheme.colorScheme.primary
        )
    )
}

@Composable
internal fun ExtensionsPageContent(onNavigateToExtension: (String) -> Unit, modifier: Modifier = Modifier) {
    val extensions by InspektifyExtensionRegistry.extensions.collectAsStateWithLifecycle()
    val sorted = extensions.sortedBy { it.order }

    Box(modifier = modifier.fillMaxSize()) {
        if (sorted.isEmpty()) {
            Text(
                text = "No extensions registered",
                modifier = Modifier.align(Alignment.Center).padding(16.dp),
                color = MaterialTheme.colorScheme.onSurface
            )
        } else {
            LazyColumn(modifier = Modifier.fillMaxSize()) {
                items(sorted, key = { it.id }) { extension ->
                    ExtensionRow(
                        extension = extension,
                        onClick = { onNavigateToExtension(extension.id) }
                    )
                    HorizontalDivider(color = MaterialTheme.colorScheme.onSurface.copy(alpha = 0.1f))
                }
            }
        }
    }
}

@Composable
private fun ExtensionRow(extension: InspektifyExtension, onClick: () -> Unit) {
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .clickable(onClick = onClick)
            .padding(horizontal = 16.dp, vertical = 12.dp),
        verticalAlignment = Alignment.CenterVertically,
        horizontalArrangement = Arrangement.spacedBy(12.dp)
    ) {
        ExtensionAvatar(extension = extension)
        Text(
            text = extension.title,
            color = MaterialTheme.colorScheme.onSurface,
            fontWeight = FontWeight.Medium,
            modifier = Modifier.weight(1f)
        )
    }
}

@Composable
private fun ExtensionAvatar(extension: InspektifyExtension) {
    val size = 32.dp
    Box(
        modifier = Modifier
            .size(size)
            .clip(CircleShape)
            .background(MaterialTheme.colorScheme.primary),
        contentAlignment = Alignment.Center
    ) {
        when (val icon = extension.icon) {
            is InspektifyIcon.Vector -> Icon(
                imageVector = icon.imageVector,
                contentDescription = null,
                tint = MaterialTheme.colorScheme.onPrimary,
                modifier = Modifier.size(18.dp)
            )
            is InspektifyIcon.Painter -> Icon(
                painter = painterResource(icon.resource),
                contentDescription = null,
                tint = MaterialTheme.colorScheme.onPrimary,
                modifier = Modifier.size(18.dp)
            )
            null -> Text(
                text = extension.title.firstOrNull()?.uppercaseChar()?.toString() ?: "?",
                color = MaterialTheme.colorScheme.onPrimary,
                fontWeight = FontWeight.Bold
            )
        }
    }
}
