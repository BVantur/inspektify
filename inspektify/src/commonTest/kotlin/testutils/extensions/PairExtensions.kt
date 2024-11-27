package testutils.extensions

fun <K, V> Pair<K, V>.toEntry(): Map.Entry<K, V> = object : Map.Entry<K, V> {
    override val key: K = this@toEntry.first
    override val value: V = this@toEntry.second
}
