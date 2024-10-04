package sp.bvantur.inspektify.ktor.client.shared

import app.cash.sqldelight.db.SqlDriver

internal expect object DatabaseDriverProvider {

    internal fun createDriver(): SqlDriver
}
