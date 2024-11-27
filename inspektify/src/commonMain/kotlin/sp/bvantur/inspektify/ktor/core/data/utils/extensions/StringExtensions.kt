package sp.bvantur.inspektify.ktor.core.data.utils.extensions

internal fun String?.nullIfEmpty(): String? {
    if (this.isNullOrEmpty()) return null

    return this
}

internal fun String?.nullToEmpty(): String {
    if (this == null) return ""

    return this
}
