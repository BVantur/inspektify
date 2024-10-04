package sp.bvantur.inspektify.ktor.core.ui.navigation

import androidx.compose.runtime.Composable
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.rememberNavController
import sp.bvantur.inspektify.ktor.details.ui.navigation.navigateToDeviceDetails
import sp.bvantur.inspektify.ktor.details.ui.navigation.networkTrafficDetailsScreen
import sp.bvantur.inspektify.ktor.list.ui.navigation.NETWORK_TRAFFIC_LIST_NAVIGATION_ROUTE
import sp.bvantur.inspektify.ktor.list.ui.navigation.networkTrafficListScreen

typealias OnNavigateBackAction = () -> Unit

@Composable
internal fun KtorNavHost() {
    val navController = rememberNavController()
    NavHost(
        navController = navController,
        startDestination = NETWORK_TRAFFIC_LIST_NAVIGATION_ROUTE
    ) {
        networkTrafficListScreen(navController::navigateToDeviceDetails)
        networkTrafficDetailsScreen(navController::navigateUp)
    }
}
