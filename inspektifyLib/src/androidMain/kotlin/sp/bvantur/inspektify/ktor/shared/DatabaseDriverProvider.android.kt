package sp.bvantur.inspektify.ktor.shared

import app.cash.sqldelight.db.SqlDriver
import app.cash.sqldelight.driver.android.AndroidSqliteDriver
import sp.bvantur.inspektify.applicationContext
import sp.bvantur.inspektify.db.InspektifyDB
import sp.bvantur.inspektify.ktor.utils.Constants

internal actual object DatabaseDriverProvider {
    internal actual fun createDriver(): SqlDriver = AndroidSqliteDriver(
        InspektifyDB.Schema,
        applicationContext,
        Constants.DATABASE_NAME
    )
}
