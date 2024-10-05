package sp.bvantur.inspektify.ktor.core.data

import sp.bvantur.inspektify.ktor.DataRetentionPolicy

internal class KtorPluginCachedConfig(
    var currentSessionTimeStamp: Long = 0,
    var retentionPolicy: DataRetentionPolicy? = null
)
