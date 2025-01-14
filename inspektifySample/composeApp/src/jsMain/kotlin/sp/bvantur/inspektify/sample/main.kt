package sp.bvantur.inspektify.sample

import kotlinx.browser.document
import sp.bvantur.inspektify.sample.di.initKoin

fun main() {
    initKoin()
    val element = document.createElement("div")
    element.textContent = "Hello, Kotlin/JS!"
    document.body?.appendChild(element)
}
