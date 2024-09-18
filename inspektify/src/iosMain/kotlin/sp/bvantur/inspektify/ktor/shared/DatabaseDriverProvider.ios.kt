package sp.bvantur.inspektify.ktor.shared

import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.driver.native.NativeSqliteDriver
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.utils.Constants

internal actual object DatabaseDriverProvider {
    internal actual fun createDriver(): SqlDriver = NativeSqliteDriver(InspektifyDB.Schema, Constants.DATABASE_NAME)
}
