package sp.bvantur.inspektify.ktor.client.shared

import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.driver.native.NativeSqliteDriver
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.core.data.Constants

internal actual object DatabaseDriverProvider {
    internal actual fun createDriver(): SqlDriver = NativeSqliteDriver(InspektifyDB.Schema, Constants.DATABASE_NAME)
}
