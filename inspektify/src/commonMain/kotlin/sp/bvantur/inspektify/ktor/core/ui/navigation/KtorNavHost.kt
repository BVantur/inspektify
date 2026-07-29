package sp.bvantur.inspektify.ktor.core.ui.navigation

import androidx.compose.runtime.Composable
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.rememberNavController
import sp.bvantur.inspektify.ktor.core.ui.extensions.navigation.extensionDetailScreen
import sp.bvantur.inspektify.ktor.core.ui.extensions.navigation.navigateToExtensionDetail
import sp.bvantur.inspektify.ktor.core.ui.home.navigation.HOME_NAVIGATION_ROUTE
import sp.bvantur.inspektify.ktor.core.ui.home.navigation.homeScreen
import sp.bvantur.inspektify.ktor.details.ui.navigation.navigateToDeviceDetails
import sp.bvantur.inspektify.ktor.details.ui.navigation.networkTrafficDetailsScreen

internal typealias OnNavigateBackAction = () -> Unit

@Composable
internal fun KtorNavHost() {
    val navController = rememberNavController()
    NavHost(
        navController = navController,
        startDestination = HOME_NAVIGATION_ROUTE
    ) {
        homeScreen(
            onNavigateToNetworkDetails = navController::navigateToDeviceDetails,
            onNavigateToExtensionDetail = navController::navigateToExtensionDetail
        )
        networkTrafficDetailsScreen(navController::navigateUp)
        extensionDetailScreen(onNavigateBack = navController::navigateUp)
    }
}
