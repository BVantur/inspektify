@file:OptIn(ExperimentalForeignApi::class)

package sp.bvantur.inspektify.ktor.core.presentation.shared

import kotlinx.cinterop.ExperimentalForeignApi
import kotlinx.cinterop.addressOf
import kotlinx.cinterop.usePinned
import platform.Foundation.NSData
import platform.Foundation.NSFileManager
import platform.Foundation.NSTemporaryDirectory
import platform.Foundation.NSURL
import platform.Foundation.create
import platform.Foundation.writeToFile
import platform.UIKit.UIDocumentPickerDelegateProtocol
import platform.UIKit.UIDocumentPickerViewController
import platform.darwin.NSObject
import sp.bvantur.inspektify.ktor.inspektifyViewControllerInstance

internal actual class DownloadFileManager {
    @OptIn(ExperimentalForeignApi::class)
    actual fun downloadFile(fileContent: String, fileName: String) {
        val rootViewController = inspektifyViewControllerInstance

        val tempDir = NSTemporaryDirectory()
        val tempFilePath = "$tempDir$fileName"
        val fileUrl = NSURL.fileURLWithPath(tempFilePath)

        val data = fileContent.encodeToByteArray().toNSData()
        data.writeToFile(tempFilePath, atomically = true)

        val documentPicker = UIDocumentPickerViewController(
            forExportingURLs = listOf(fileUrl)
        )

        val delegate = DocumentPickerDelegate {
            NSFileManager.defaultManager.removeItemAtURL(fileUrl, null)
        }
        documentPicker.delegate = delegate

        rootViewController?.presentViewController(documentPicker, animated = true, completion = null)
    }

    private fun ByteArray.toNSData(): NSData = usePinned { pinned ->
        NSData.create(bytes = pinned.addressOf(0), length = size.toULong())
    }

    private class DocumentPickerDelegate(val completion: () -> Unit) :
        NSObject(),
        UIDocumentPickerDelegateProtocol {
        override fun documentPicker(controller: UIDocumentPickerViewController, didPickDocumentsAtURLs: List<*>) {
            val urls = didPickDocumentsAtURLs.filterIsInstance<NSURL>()
            if (urls.isNotEmpty()) {
                println("File saved successfully at ${urls[0].path}")
            } else {
                println("No file URL returned.")
            }
            completion()
        }

        override fun documentPickerWasCancelled(controller: UIDocumentPickerViewController) {
            println("Save command cancelled by user.")
            completion()
        }
    }
}
