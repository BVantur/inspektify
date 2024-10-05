package sp.bvantur.inspektify.ktor.core.domain.utils

internal object ByteSizeUtils {

    fun toTextWithByteUnit(size: Long?): String {
        size ?: return KtorPresentationConstants.MISSING_DATA

        val bytesInKilobyte = 1024
        val maxBitsLong = 63
        val bitsPerUnit = 10
        val roundingMultiplier = 10
        if (size < bytesInKilobyte) return "$size B"

        val z = (maxBitsLong - size.countLeadingZeroBits()) / bitsPerUnit
        val unitPrefixes = arrayOf("B", "kB", "MB", "GB", "TB", "PB", "EB")
        val unit = unitPrefixes.getOrElse(z) { KtorPresentationConstants.MISSING_DATA }
        var scaledSize = size.toDouble() / (1L shl z * bitsPerUnit)

        scaledSize = kotlin.math.round(scaledSize * roundingMultiplier) / roundingMultiplier
        val formattedSize = if (scaledSize % 1.0 == 0.0) {
            scaledSize.toInt().toString()
        } else {
            scaledSize.toString()
        }

        return "$formattedSize $unit"
    }
}
