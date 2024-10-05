package sp.bvantur.inspektify.ktor.core.data.utils.extensions

internal fun String?.nullOrEmpty(): String? {
    if (this.isNullOrEmpty()) return null

    return this
}

internal fun String?.convertNullToEmpty(): String {
    if (this.isNullOrEmpty()) return ""

    return this
}
