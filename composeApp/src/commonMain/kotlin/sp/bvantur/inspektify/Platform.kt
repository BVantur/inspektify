package sp.bvantur.inspektify

internal interface Platform {
    val name: String
}

internal expect fun getPlatform(): Platform
