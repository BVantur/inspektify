package sp.bvantur.inspektify.ktor.client.shared

import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.driver.jdbc.sqlite.JdbcSqliteDriver
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.core.data.Constants

internal actual object DatabaseDriverProvider {
    internal actual fun createDriver(): SqlDriver =
        JdbcSqliteDriver("jdbc:sqlite:${Constants.DATABASE_NAME}", schema = InspektifyDB.Schema)
}
