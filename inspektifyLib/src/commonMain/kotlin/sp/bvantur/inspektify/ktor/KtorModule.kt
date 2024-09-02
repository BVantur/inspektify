package sp.bvantur.inspektify.ktor

import app.cash.sqldelight.ColumnAdapter
import sp.bvantur.inspektify.AppComponents
import sp.bvantur.inspektify.NetworkTrafficDataLocal
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.data.NetworkTrafficRepository
import sp.bvantur.inspektify.ktor.data.local.NetworkTrafficLocalDataSource
import sp.bvantur.inspektify.ktor.data.model.NetworkTrafficHeader
import sp.bvantur.inspektify.ktor.domain.usecase.GetAllNetworkTrafficDataUseCase
import sp.bvantur.inspektify.ktor.domain.usecase.GetAllNetworkTrafficDataUseCaseImpl
import sp.bvantur.inspektify.ktor.domain.usecase.RemoveAllNetworkTrafficDataUseCase
import sp.bvantur.inspektify.ktor.domain.usecase.RemoveAllNetworkTrafficDataUseCaseImpl
import sp.bvantur.inspektify.ktor.shared.DatabaseDriverProvider

internal interface KtorModule {
    val networkTrafficRepository: NetworkTrafficRepository
    val getNetworkTrafficUseCase: GetAllNetworkTrafficDataUseCase
    val removeAllNetworkTrafficDataUseCase: RemoveAllNetworkTrafficDataUseCase
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

    private val listOfNetworkTrafficHeaderAdapter = object : ColumnAdapter<List<NetworkTrafficHeader>, String> {
        override fun decode(databaseValue: String): List<NetworkTrafficHeader> = databaseValue.split(
            ";"
        ).map { headerString ->
            val items = headerString.split(":")
            NetworkTrafficHeader(
                name = items.first(),
                value = items.last()
            )
        }

        override fun encode(value: List<NetworkTrafficHeader>) = value.joinToString(separator = ";") { restHeader ->
            "${restHeader.name}:${restHeader.value}"
        }
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
