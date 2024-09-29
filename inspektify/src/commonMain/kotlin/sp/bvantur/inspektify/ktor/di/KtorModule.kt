package sp.bvantur.inspektify.ktor.di

import app.cash.sqldelight.ColumnAdapter
import kotlinx.serialization.encodeToString
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.data.NetworkTrafficRepository
import sp.bvantur.inspektify.ktor.data.local.NetworkTrafficLocalDataSource
import sp.bvantur.inspektify.ktor.domain.usecase.GetAllNetworkTrafficDataUseCase
import sp.bvantur.inspektify.ktor.domain.usecase.GetAllNetworkTrafficDataUseCaseImpl
import sp.bvantur.inspektify.ktor.domain.usecase.GetCurrentSessionRetentionPolicy
import sp.bvantur.inspektify.ktor.domain.usecase.GetCurrentSessionRetentionPolicyImpl
import sp.bvantur.inspektify.ktor.domain.usecase.GetNetworkTrafficDataByIdUseCase
import sp.bvantur.inspektify.ktor.domain.usecase.GetNetworkTrafficDataByIdUseCaseImpl
import sp.bvantur.inspektify.ktor.domain.usecase.RemoveAllNetworkTrafficDataUseCase
import sp.bvantur.inspektify.ktor.domain.usecase.RemoveAllNetworkTrafficDataUseCaseImpl
import sp.bvantur.inspektify.ktor.shared.DatabaseDriverProvider

internal interface KtorModule {
    val networkTrafficRepository: NetworkTrafficRepository
    val getNetworkTrafficUseCase: GetAllNetworkTrafficDataUseCase
    val removeAllNetworkTrafficDataUseCase: RemoveAllNetworkTrafficDataUseCase
    val getNetworkTrafficDataByIdUseCase: GetNetworkTrafficDataByIdUseCase
    val getCurrentSessionRetentionPolicy: GetCurrentSessionRetentionPolicy
}

internal class KtorModuleImpl : KtorModule {
    override val networkTrafficRepository: NetworkTrafficRepository by lazy {
        NetworkTrafficRepository(
            localDataSource = NetworkTrafficLocalDataSource(
                database = database,
                dispatcherProvider = AppComponents.getAppModule().dispatcherProvider
            )
        )
    }

    override val getNetworkTrafficUseCase: GetAllNetworkTrafficDataUseCase by lazy {
        GetAllNetworkTrafficDataUseCaseImpl(networkTrafficRepository)
    }

    override val removeAllNetworkTrafficDataUseCase: RemoveAllNetworkTrafficDataUseCase by lazy {
        RemoveAllNetworkTrafficDataUseCaseImpl(networkTrafficRepository)
    }
    override val getNetworkTrafficDataByIdUseCase: GetNetworkTrafficDataByIdUseCase by lazy {
        GetNetworkTrafficDataByIdUseCaseImpl(networkTrafficRepository)
    }
    override val getCurrentSessionRetentionPolicy: GetCurrentSessionRetentionPolicy by lazy {
        GetCurrentSessionRetentionPolicyImpl(networkTrafficRepository)
    }

    private val listOfNetworkTrafficHeaderAdapter =
        object : ColumnAdapter<Set<Map.Entry<String, List<String>>>, String> {
            override fun decode(databaseValue: String): Set<Map.Entry<String, List<String>>> =
                AppComponents.getAppModule().json.decodeFromString<Set<Map.Entry<String, List<String>>>>(
                    databaseValue
                )

            override fun encode(value: Set<Map.Entry<String, List<String>>>): String =
                AppComponents.getAppModule().json.encodeToString(value)
        }

    private val database: InspektifyDB by lazy {
        InspektifyDB(
            driver = DatabaseDriverProvider.createDriver(),
            NetworkTrafficDataLocalAdapter = NetworkTrafficDataLocal.Adapter(
                responseHeadersAdapter = listOfNetworkTrafficHeaderAdapter,
                requestHeadersAdapter = listOfNetworkTrafficHeaderAdapter
            )
        )
    }
}
