package sp.bvantur.inspektify.ktor.core.presentation.shared

import java.nio.charset.StandardCharsets
import java.nio.file.Files
import javax.swing.JFileChooser

internal actual class DownloadFileManager {
    actual fun downloadFile(fileContent: String, fileName: String) {
        try {
            val fileChooser = JFileChooser()

            fileChooser.dialogTitle = "Specify a file to save"
            fileChooser.selectedFile = java.io.File(fileName)

            val userSelection = fileChooser.showSaveDialog(null)

            if (userSelection == JFileChooser.APPROVE_OPTION) {
                val fileToSave = fileChooser.selectedFile

                Files.write(fileToSave.toPath(), fileContent.toByteArray(StandardCharsets.UTF_8))
                println("File saved successfully at ${fileToSave.absolutePath}")
            } else {
                println("Save command cancelled by user.")
            }
        } catch (e: Exception) {
            println("Error saving file: ${e.message}")
        }
    }
}
