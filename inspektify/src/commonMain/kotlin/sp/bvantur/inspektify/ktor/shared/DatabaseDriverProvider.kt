package sp.bvantur.inspektify.ktor.shared

import app.cash.sqldelight.db.SqlDriver

internal expect object DatabaseDriverProvider {

    internal fun createDriver(): SqlDriver
}
