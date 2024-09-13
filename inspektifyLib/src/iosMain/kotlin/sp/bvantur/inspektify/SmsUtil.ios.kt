package sp.bvantur.inspektify

import kotlinx.cinterop.ExperimentalForeignApi
import sp.bvantur.inspektify.shakedetektor.ShakeDetektorIOS

@OptIn(ExperimentalForeignApi::class)
actual fun sendSms(number: String, message: String) {
    ShakeDetektorIOS().someMethod()
}
