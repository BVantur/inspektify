package sp.bvantur.inspektify.ktor.core.data.utils

import io.ktor.http.Headers
import io.ktor.util.toMap
import io.ktor.utils.io.core.toByteArray

internal object NetworkTrafficDataUtils {

    fun calculateHeadersSize(headers: Headers): Int = headers.toMap().map { (name, header) ->
        name.toByteArray().size + header.sumOf { value ->
            value.toByteArray().size
        }
    }.sum()
}
