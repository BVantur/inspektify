package sp.bvantur.inspektify.ktor.core.ui.navigation

import androidx.compose.foundation.layout.size
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Extension
import androidx.compose.material.icons.filled.Language
import androidx.compose.material3.Icon
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.NavigationBar
import androidx.compose.material3.NavigationBarItem
import androidx.compose.material3.NavigationBarItemDefaults
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import sp.bvantur.inspektify.ktor.core.extensions.InspektifyExtensionRegistry

internal const val NETWORK_PAGE_INDEX = 0
internal const val EXTENSIONS_PAGE_INDEX = 1

@Composable
internal fun InspektifyBottomBar(selectedPage: Int, onSelectPage: (Int) -> Unit) {
    val extensions by InspektifyExtensionRegistry.extensions.collectAsStateWithLifecycle()
    if (extensions.isEmpty()) return

    NavigationBar(
        containerColor = MaterialTheme.colorScheme.primary,
        contentColor = MaterialTheme.colorScheme.onPrimary
    ) {
        NavigationBarItem(
            selected = selectedPage == NETWORK_PAGE_INDEX,
            onClick = {
                if (selectedPage != NETWORK_PAGE_INDEX) onSelectPage(NETWORK_PAGE_INDEX)
            },
            icon = {
                Icon(
                    imageVector = Icons.Filled.Language,
                    contentDescription = null,
                    modifier = Modifier.size(20.dp)
                )
            },
            label = { Text("Network") },
            colors = tabColors()
        )
        NavigationBarItem(
            selected = selectedPage == EXTENSIONS_PAGE_INDEX,
            onClick = {
                if (selectedPage != EXTENSIONS_PAGE_INDEX) onSelectPage(EXTENSIONS_PAGE_INDEX)
            },
            icon = {
                Icon(
                    imageVector = Icons.Filled.Extension,
                    contentDescription = null,
                    modifier = Modifier.size(20.dp)
                )
            },
            label = { Text("Extensions") },
            colors = tabColors()
        )
    }
}

@Composable
private fun tabColors() = NavigationBarItemDefaults.colors(
    selectedIconColor = MaterialTheme.colorScheme.onPrimary,
    selectedTextColor = MaterialTheme.colorScheme.onPrimary,
    unselectedIconColor = MaterialTheme.colorScheme.onPrimary.copy(alpha = 0.6f),
    unselectedTextColor = MaterialTheme.colorScheme.onPrimary.copy(alpha = 0.6f),
    indicatorColor = MaterialTheme.colorScheme.secondary
)
