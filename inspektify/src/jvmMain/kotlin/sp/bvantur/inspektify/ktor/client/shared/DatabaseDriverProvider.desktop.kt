package sp.bvantur.inspektify.ktor.client.shared

import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.driver.jdbc.sqlite.JdbcSqliteDriver
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.core.data.Constants
import java.io.File

internal actual object DatabaseDriverProvider {
    internal actual fun createDriver(): SqlDriver {
        val databaseFolder = File("build/generated/inspektify")
        if (!databaseFolder.exists()) {
            databaseFolder.mkdirs()
        }

        return JdbcSqliteDriver(
            "jdbc:sqlite:build/generated/inspektify/${Constants.DATABASE_NAME}",
            schema = InspektifyDB.Schema
        )
    }
}
