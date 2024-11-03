package sp.bvantur.inspektify.ktor.details.presentation.utils

import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.AnnotatedString
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.buildAnnotatedString
import sp.bvantur.inspektify.ktor.core.ui.theme.Ferra
import sp.bvantur.inspektify.ktor.details.domain.model.KtorOverviewData

internal object DetailsNetworkTrafficTextUtils {
    fun searchAndAnnotatedText(
        text: AnnotatedString?,
        searchQuery: String,
        highlightColor: Color = Ferra.copy(alpha = 0.8f)
    ): Pair<AnnotatedString, Int> {
        text ?: return buildAnnotatedString { } to 0
        if (searchQuery.isEmpty()) return text to 0

        val indices = searchIndices(searchQuery = searchQuery, textForSearch = text.toString())
        if (indices.isEmpty()) return text to 0

        val ranges = indices.map { index ->
            val end = (index + searchQuery.length).coerceAtMost(text.length)
            index to end
        }

        return buildAnnotatedString {
            append(text)

            var lastIndex = 0

            for ((start, end) in ranges) {
                if (start > lastIndex) {
                    addStyle(style = SpanStyle(background = Color.White, color = Color.Black), start = start, end = end)
                }
                addStyle(style = SpanStyle(background = highlightColor, color = Color.White), start = start, end = end)
                lastIndex = end
            }
            if (lastIndex < text.length) {
                addStyle(
                    style = SpanStyle(background = Color.White, color = Color.Black),
                    start = lastIndex,
                    end = text.length
                )
            }
        } to indices.size
    }

    fun toOverviewAnnotatedString(data: KtorOverviewData): AnnotatedString = buildAnnotatedString {
        onAppendToAnnotatedString("URL", data.url)
        onAppendToAnnotatedString("Method", data.method)
        onAppendToAnnotatedString("Protocol", data.protocol)
        onAppendToAnnotatedString("Status", data.status)
        onAppendToAnnotatedString("Response", data.response)
        onAppendToAnnotatedString("SSL", data.ssl)
        onAppendToAnnotatedString("Request time", data.requestTime)
        onAppendToAnnotatedString("Response time", data.responseTime)
        onAppendToAnnotatedString("Duration", data.duration)
        onAppendToAnnotatedString("Request size", data.requestSize)
        onAppendToAnnotatedString("Response size", data.responseSize)
        onAppendToAnnotatedString("Total size", data.totalSize)
    }

    private fun searchIndices(searchQuery: String, textForSearch: String?): List<Int> {
        if (searchQuery.isEmpty()) return emptyList()

        val indices = mutableListOf<Int>()
        val pattern = Regex(Regex.escape(searchQuery), RegexOption.IGNORE_CASE)
        pattern.findAll(textForSearch ?: "").forEach { matchResult ->
            indices.add(matchResult.range.first)
        }

        return indices
    }
}
