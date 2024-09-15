package sp.bvantur.inspektify.shared

import kotlinx.cinterop.ExperimentalForeignApi
import sp.bvantur.inspektify.InspektifyViewController
import sp.bvantur.inspektify.shakedetektor.ShakeDetektorIOS

@OptIn(ExperimentalForeignApi::class)
actual fun enableShakeGesture(enable: Boolean) {
    ShakeDetektorIOS().enableShakeDetektorWithCallback { presenter ->
        println("shake")
        val inspektifyViewController = InspektifyViewController()
//        inspektifyViewController.modalPresentationStyle = UIModalPresentationPageSheet
//        inspektifyViewController.setModalInPresentation(false)
        presenter?.presentViewController(inspektifyViewController, true, null)
    }
}
