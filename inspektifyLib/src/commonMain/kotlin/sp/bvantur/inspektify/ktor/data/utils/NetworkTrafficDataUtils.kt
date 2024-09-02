package sp.bvantur.inspektify.ktor.data.utils

import io.ktor.http.Headers
import io.ktor.util.toMap
import io.ktor.utils.io.core.toByteArray
import sp.bvantur.inspektify.ktor.data.model.NetworkTrafficHeader

internal object NetworkTrafficDataUtils {

    fun calculateHeadersSize(headers: Headers): Int = headers.toMap().map { (name, header) ->
        name.toByteArray().size + header.sumOf { value ->
            value.toByteArray().size
        }
    }.sum()

    fun mapHeaders(headers: Headers?): List<NetworkTrafficHeader> = headers?.toMap()?.map { header ->
        NetworkTrafficHeader(header.key, header.value.toString())
    } ?: emptyList()
}
