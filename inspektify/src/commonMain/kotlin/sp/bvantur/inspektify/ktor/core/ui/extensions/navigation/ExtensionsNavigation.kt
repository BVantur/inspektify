package sp.bvantur.inspektify.ktor.core.ui.extensions.navigation

import androidx.navigation.NavController
import androidx.navigation.NavGraphBuilder
import androidx.navigation.NavType
import androidx.navigation.compose.composable
import androidx.navigation.navArgument
import sp.bvantur.inspektify.ktor.core.ui.extensions.ExtensionDetailScreen
import sp.bvantur.inspektify.ktor.core.ui.navigation.OnNavigateBackAction

internal const val EXTENSION_DETAIL_NAVIGATION_ROUTE = "extension_detail_route"
internal const val EXTENSION_ID_ARG = "extensionId"

internal fun NavController.navigateToExtensionDetail(extensionId: String) {
    navigate("$EXTENSION_DETAIL_NAVIGATION_ROUTE/$extensionId")
}

internal fun NavGraphBuilder.extensionDetailScreen(onNavigateBack: OnNavigateBackAction) {
    composable(
        route = "$EXTENSION_DETAIL_NAVIGATION_ROUTE/{$EXTENSION_ID_ARG}",
        arguments = listOf(navArgument(EXTENSION_ID_ARG) { type = NavType.StringType })
    ) { backStackEntry ->
        val extensionId = backStackEntry.savedStateHandle.get<String>(EXTENSION_ID_ARG).orEmpty()
        ExtensionDetailScreen(extensionId = extensionId, onNavigateBack = onNavigateBack)
    }
}
