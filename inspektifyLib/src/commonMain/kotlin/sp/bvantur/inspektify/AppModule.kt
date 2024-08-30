package sp.bvantur.inspektify

import app.cash.sqldelight.ColumnAdapter
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.data.NetworkTrafficRepository
import sp.bvantur.inspektify.ktor.data.local.NetworkTrafficLocalDataSource
import sp.bvantur.inspektify.ktor.data.model.NetworkTrafficHeader
import sp.bvantur.inspektify.ktor.shared.DatabaseDriverProvider
import sp.bvantur.inspektify.utils.DispatcherProvider
import sp.bvantur.inspektify.utils.SampleDispatcherProvider

internal object AppComponents {
    private var appModule: AppModule? = null

    fun getAppModule(): AppModule {
        if (appModule == null) {
            appModule = AppModuleImpl()
        }
        return appModule!!
    }
}

internal interface AppModule {
    val dispatcherProvider: DispatcherProvider
    val networkTrafficRepository: NetworkTrafficRepository
}

internal class AppModuleImpl : AppModule {
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
            NetworkTrafficDataAdapter = NetworkTrafficData.Adapter(
                responseHeadersAdapter = listOfNetworkTrafficHeaderAdapter,
                requestHeadersAdapter = listOfNetworkTrafficHeaderAdapter
            )
        )
    }
    override val dispatcherProvider: DispatcherProvider by lazy {
        SampleDispatcherProvider()
    }
    override val networkTrafficRepository: NetworkTrafficRepository by lazy {
        NetworkTrafficRepository(
            localDataSource = NetworkTrafficLocalDataSource(
                database = database,
                dispatcherProvider = dispatcherProvider
            )
        )
    }
}
