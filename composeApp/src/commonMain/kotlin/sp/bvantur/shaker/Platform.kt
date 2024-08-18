package sp.bvantur.shaker

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform
