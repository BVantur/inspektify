package sp.bvantur.inspektify

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform
