package sp.bvantur.inspektify.ktor.client.shared

import app.cash.sqldelight.db.SqlDriver

internal actual object DatabaseDriverProvider {
    internal actual fun createDriver(): SqlDriver {
        // No-op implementation for web
        // This is a minimal stub that throws UnsupportedOperationException
        // In a real web implementation, you would use IndexedDB or similar
        throw UnsupportedOperationException("Database operations not supported in web target")
    }
}