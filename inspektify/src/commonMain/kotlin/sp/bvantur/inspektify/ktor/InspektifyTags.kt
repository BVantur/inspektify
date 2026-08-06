package sp.bvantur.inspektify.ktor

import io.ktor.client.request.HttpRequestBuilder
import io.ktor.util.AttributeKey

internal val InspektifyTagsAttributeKey: AttributeKey<List<String>> = AttributeKey("InspektifyTags")

/**
 * Tags this request with one or more short names, shown alongside it in the Inspektify list.
 *
 * Useful whenever the URL alone doesn't say much about a request — a GraphQL endpoint that serves
 * every operation, a generic RPC path, or a batching endpoint:
 *
 * ```
 * client.post("https://example.com/graphql") {
 *     inspektifyTags("SearchProducts", "query")
 *     setBody(query)
 * }
 * ```
 *
 * Tags are shown under the request on the list row, are matched by the list search, are offered as
 * search suggestions, and are listed in the transaction overview. Requests without tags are
 * unchanged.
 *
 * Calls accumulate, so a client can tag everything it sends and a call site can add to that:
 *
 * ```
 * defaultRequest { inspektifyTags("api-v2") }
 * // ...
 * client.get("products") { inspektifyTags("SearchProducts") } // tagged "api-v2" and "SearchProducts"
 * ```
 *
 * Blank tags are dropped and duplicates collapsed, keeping the order they were added in.
 */
public fun HttpRequestBuilder.inspektifyTags(vararg tags: String) {
    val combined = (attributes.getOrNull(InspektifyTagsAttributeKey).orEmpty() + tags)
        .filter { it.isNotBlank() }
        .distinct()

    if (combined.isNotEmpty()) {
        attributes.put(InspektifyTagsAttributeKey, combined)
    }
}
