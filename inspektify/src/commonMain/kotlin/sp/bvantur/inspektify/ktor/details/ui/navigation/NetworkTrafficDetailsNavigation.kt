package sp.bvantur.inspektify.ktor.details.ui.navigation

import androidx.navigation.NavController
import androidx.navigation.NavGraphBuilder
import androidx.navigation.NavType
import androidx.navigation.compose.composable
import androidx.navigation.navArgument
import sp.bvantur.inspektify.ktor.core.ui.navigation.OnNavigateBackAction
import sp.bvantur.inspektify.ktor.details.ui.NetworkTrafficDetailsRoute

internal const val NETWORK_TRAFFIC_DETAILS_NAVIGATION_ROUTE = "network_traffic_details_route"
internal const val NETWORK_TRAFFIC_ID = "networkTrafficId"

internal fun NavController.navigateToDeviceDetails(networkTrafficId: Long) {
    this.navigate("$NETWORK_TRAFFIC_DETAILS_NAVIGATION_ROUTE/$networkTrafficId")
}

internal fun NavGraphBuilder.networkTrafficDetailsScreen(onNavigateBackAction: OnNavigateBackAction) {
    composable(
        route = "$NETWORK_TRAFFIC_DETAILS_NAVIGATION_ROUTE/{$NETWORK_TRAFFIC_ID}",
        arguments = listOf(navArgument(NETWORK_TRAFFIC_ID) { type = NavType.LongType })
    ) { backStackEntry ->
        NetworkTrafficDetailsRoute(
            onNavigateBackAction = onNavigateBackAction
        )
    }
}
