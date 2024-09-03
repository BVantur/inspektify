package sp.bvantur.inspektify.ktor.ui.navigation.details

import androidx.navigation.NavController
import androidx.navigation.NavGraphBuilder
import androidx.navigation.NavType
import androidx.navigation.compose.composable
import androidx.navigation.navArgument
import sp.bvantur.inspektify.ktor.data.model.NetworkTrafficId
import sp.bvantur.inspektify.ktor.ui.details.NetworkTrafficDetailsRoute
import sp.bvantur.inspektify.ktor.ui.navigation.OnNavigateBackAction

const val NETWORK_TRAFFIC_DETAILS_NAVIGATION_ROUTE = "network_traffic_details_route"
const val NETWORK_TRAFFIC_ID = "networkTrafficId"

fun NavController.navigateToDeviceDetails(networkTrafficId: NetworkTrafficId) {
    this.navigate("$NETWORK_TRAFFIC_DETAILS_NAVIGATION_ROUTE/$networkTrafficId")
}

internal fun NavGraphBuilder.networkTrafficDetailsScreen(onNavigateBackAction: OnNavigateBackAction) {
    composable(
        route = "$NETWORK_TRAFFIC_DETAILS_NAVIGATION_ROUTE/{$NETWORK_TRAFFIC_ID}",
        arguments = listOf(navArgument(NETWORK_TRAFFIC_ID) { type = NavType.LongType })
    ) { backStackEntry ->
        NetworkTrafficDetailsRoute(
            networkTrafficId = backStackEntry.arguments?.getLong(NETWORK_TRAFFIC_ID),
            onNavigateBackAction = onNavigateBackAction
        )
    }
}
