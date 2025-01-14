package sp.bvantur.inspektify.ktor.client.data.model

internal enum class TargetType {
    APPLE,
    ANDROID,
    DESKTOP,
    JS;

    fun isAndroid(): Boolean = this == ANDROID
    fun isApple(): Boolean = this == APPLE
    fun isDesktop(): Boolean = this == DESKTOP
    fun isJs(): Boolean = this == JS
}
