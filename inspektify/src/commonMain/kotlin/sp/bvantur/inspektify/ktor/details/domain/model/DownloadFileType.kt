package sp.bvantur.inspektify.ktor.details.domain.model

internal enum class DownloadFileType(val text: String) {
    TEXT("TEXT file(.txt)"),
    HTML("HTML file(.html)");

    fun isHtml(): Boolean = this == HTML
}
