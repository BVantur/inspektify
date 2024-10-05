package sp.bvantur.inspektify.ktor.client.data.utils

import io.ktor.utils.io.ByteReadChannel
import io.ktor.utils.io.charsets.Charset
import io.ktor.utils.io.core.readText
import io.ktor.utils.io.readRemaining

internal suspend inline fun ByteReadChannel.tryReadText(charset: Charset): String? = try {
    val content = readRemaining().readText(charset = charset)
    content
} catch (ignore: Throwable) {
    println(ignore)
    null
}
