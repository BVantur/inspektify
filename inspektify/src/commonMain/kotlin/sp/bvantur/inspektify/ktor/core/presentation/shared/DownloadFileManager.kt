package sp.bvantur.inspektify.ktor.core.presentation.shared

internal expect class DownloadFileManager() {
    fun downloadFile(fileContent: String, fileName: String)
}
