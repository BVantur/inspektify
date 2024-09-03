package sp.bvantur.inspektify.ktor.ui.navigation

import androidx.compose.runtime.Composable
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.rememberNavController
import sp.bvantur.inspektify.ktor.ui.navigation.details.navigateToDeviceDetails
import sp.bvantur.inspektify.ktor.ui.navigation.details.networkTrafficDetailsScreen
import sp.bvantur.inspektify.ktor.ui.navigation.list.NETWORK_TRAFFIC_LIST_NAVIGATION_ROUTE
import sp.bvantur.inspektify.ktor.ui.navigation.list.networkTrafficListScreen

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
