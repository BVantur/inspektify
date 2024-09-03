package sp.bvantur.inspektify.ktor.ui.navigation.list

import androidx.navigation.NavGraphBuilder
import androidx.navigation.compose.composable
import sp.bvantur.inspektify.ktor.data.model.NetworkTrafficId
import sp.bvantur.inspektify.ktor.ui.list.NetworkTrafficListRoute

internal typealias OnNavigateToDetailsAction = (NetworkTrafficId) -> Unit

const val NETWORK_TRAFFIC_LIST_NAVIGATION_ROUTE = "network_traffic_list_route"

fun NavGraphBuilder.networkTrafficListScreen(onNavigateToDetailsAction: OnNavigateToDetailsAction) {
    composable(
        route = NETWORK_TRAFFIC_LIST_NAVIGATION_ROUTE
    ) {
        NetworkTrafficListRoute(onNavigateToDetailsAction)
    }
}
