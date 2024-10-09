package sp.bvantur.inspektify.ktor.client.data.model

internal enum class TargetType {
    APPLE,
    ANDROID,
    DESKTOP;

    fun isAndroid(): Boolean = this == ANDROID
    fun isApple(): Boolean = this == APPLE
    fun isDesktop(): Boolean = this == DESKTOP
}
