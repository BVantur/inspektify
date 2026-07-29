package sp.bvantur.inspektify.ktor.core.ui.home.navigation

import androidx.navigation.NavGraphBuilder
import androidx.navigation.compose.composable
import sp.bvantur.inspektify.ktor.core.ui.home.HomeScreen

internal const val HOME_NAVIGATION_ROUTE = "home_route"

internal fun NavGraphBuilder.homeScreen(
    onNavigateToNetworkDetails: (Long) -> Unit,
    onNavigateToExtensionDetail: (String) -> Unit
) {
    composable(route = HOME_NAVIGATION_ROUTE) {
        HomeScreen(
            onNavigateToNetworkDetails = onNavigateToNetworkDetails,
            onNavigateToExtensionDetail = onNavigateToExtensionDetail
        )
    }
}
