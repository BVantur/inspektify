package sp.bvantur.inspektify

import kotlinx.cinterop.ExperimentalForeignApi
import sp.bvantur.inspektify.shakedetector.ShakeDetectorIOS
//import sp.bvantur.inspektify.shakedetektor.ShakeDetektorIOS

// import sp.bvantur.inspektify.shakedetector.ShakeDetectorIOS
@OptIn(ExperimentalForeignApi::class)
actual fun sendSms(number: String, message: String) {
    ShakeDetectorIOS()
//    ShakeDetektorIOS()
//    ShakeDetectorIOS.new()
//    ShakeDetectorIOS.new()?.enableShakeDetector(true)
}
