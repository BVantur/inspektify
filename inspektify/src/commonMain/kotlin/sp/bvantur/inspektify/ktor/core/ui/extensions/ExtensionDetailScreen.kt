package sp.bvantur.inspektify.ktor.core.ui.extensions

import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.automirrored.rounded.ArrowBack
import androidx.compose.material3.ExperimentalMaterial3Api
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.material3.TopAppBar
import androidx.compose.material3.TopAppBarDefaults
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.remember
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import sp.bvantur.inspektify.ktor.core.extensions.InspektifyExtensionRegistry
import sp.bvantur.inspektify.ktor.core.ui.navigation.OnNavigateBackAction

@OptIn(ExperimentalMaterial3Api::class)
@Composable
internal fun ExtensionDetailScreen(extensionId: String, onNavigateBack: OnNavigateBackAction) {
    val extensions by InspektifyExtensionRegistry.extensions.collectAsStateWithLifecycle()
    val extension = remember(extensions, extensionId) { extensions.firstOrNull { it.id == extensionId } }

    Scaffold(
        topBar = {
            TopAppBar(
                title = {
                    Text(
                        text = extension?.title ?: "Extension",
                        color = MaterialTheme.colorScheme.onPrimary
                    )
                },
                navigationIcon = {
                    IconButton(onClick = onNavigateBack) {
                        Icon(
                            imageVector = Icons.AutoMirrored.Rounded.ArrowBack,
                            contentDescription = "Back",
                            tint = MaterialTheme.colorScheme.onPrimary
                        )
                    }
                },
                colors = TopAppBarDefaults.topAppBarColors(
                    containerColor = MaterialTheme.colorScheme.primary
                )
            )
        }
    ) { innerPadding ->
        Box(modifier = Modifier.fillMaxSize().padding(innerPadding)) {
            if (extension == null) {
                Text(
                    text = "This extension is no longer available.",
                    modifier = Modifier.align(Alignment.Center).padding(16.dp),
                    color = MaterialTheme.colorScheme.onSurface
                )
            } else {
                extension.content()
            }
        }
    }
}
