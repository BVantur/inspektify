package sp.bvantur.inspektify.ktor.core.data.utils

import io.ktor.http.Headers
import io.ktor.util.toMap
import io.ktor.utils.io.core.toByteArray
import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonArray
import kotlinx.serialization.json.JsonElement
import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.json.JsonPrimitive
import sp.bvantur.inspektify.ktor.core.domain.utils.KtorPresentationConstants.REDACTED_DATA

internal object NetworkTrafficDataUtils {

    fun calculateHeadersSize(headers: Headers): Int = headers.toMap().map { (name, header) ->
        name.toByteArray().size + header.sumOf { value ->
            value.toByteArray().size
        }
    }.sum()

    fun String.redactJsonProperties(propertiesToRedact: List<String>): String {
        if (this.isEmpty()) return ""

        try {
            val jsonElement = Json.parseToJsonElement(this)
            val redactedElement = redactProperties(jsonElement, propertiesToRedact)
            return Json.encodeToString(redactedElement)
        } catch (_: Exception) {
            return this
        }
    }

    private fun redactProperties(element: JsonElement, propertiesToRedact: List<String>): JsonElement = when (element) {
        is JsonObject -> {
            JsonObject(
                element.mapValues { (key, value) ->
                    if (key in propertiesToRedact) {
                        JsonPrimitive(REDACTED_DATA)
                    } else {
                        redactProperties(value, propertiesToRedact)
                    }
                }
            )
        }

        is JsonArray -> {
            JsonArray(
                element.map { item ->
                    redactProperties(item, propertiesToRedact)
                }
            )
        }

        else -> element
    }

    fun Set<Map.Entry<String, List<String>>>.redactHeaders(
        redactHeaders: List<String>
    ): Set<Map.Entry<String, List<String>>> = this.associate { (key, value) ->
        if (redactHeaders.contains(key)) {
            key to value.map {
                REDACTED_DATA
            }
        } else {
            key to value
        }
    }.entries
}
