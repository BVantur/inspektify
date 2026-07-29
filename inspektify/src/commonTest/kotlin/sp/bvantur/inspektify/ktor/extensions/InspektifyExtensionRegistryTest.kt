package sp.bvantur.inspektify.ktor.extensions

import androidx.compose.runtime.Composable
import sp.bvantur.inspektify.ktor.core.extensions.InspektifyExtensionRegistry
import testutils.mocks.TestSystemLogger
import kotlin.test.AfterTest
import kotlin.test.BeforeTest
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertNotNull
import kotlin.test.assertNull
import kotlin.test.assertTrue

class InspektifyExtensionRegistryTest {

    private lateinit var logger: TestSystemLogger

    @BeforeTest
    fun setup() {
        InspektifyExtensionRegistry.clear()
        logger = TestSystemLogger()
        InspektifyExtensionRegistry.logger = logger
    }

    @AfterTest
    fun teardown() {
        InspektifyExtensionRegistry.clear()
    }

    @Test
    fun `add stores extension`() {
        InspektifyExtensionRegistry.add(extension("a", "A"))
        assertEquals(1, InspektifyExtensionRegistry.extensions.value.size)
        assertEquals("a", InspektifyExtensionRegistry.extensions.value.first().id)
    }

    @Test
    fun `duplicate id overwrites and logs warning`() {
        InspektifyExtensionRegistry.add(extension("a", "First"))
        InspektifyExtensionRegistry.add(extension("a", "Second"))

        assertEquals(1, InspektifyExtensionRegistry.extensions.value.size)
        assertEquals("Second", InspektifyExtensionRegistry.extensions.value.first().title)
        assertTrue(logger.loggedMessages.any { it.contains("\"a\"") && it.contains("Overwriting") })
    }

    @Test
    fun `remove drops matching id`() {
        InspektifyExtensionRegistry.add(extension("a", "A"))
        InspektifyExtensionRegistry.add(extension("b", "B"))

        InspektifyExtensionRegistry.remove("a")

        assertEquals(1, InspektifyExtensionRegistry.extensions.value.size)
        assertEquals("b", InspektifyExtensionRegistry.extensions.value.first().id)
    }

    @Test
    fun `clear removes all entries`() {
        InspektifyExtensionRegistry.add(extension("a", "A"))
        InspektifyExtensionRegistry.add(extension("b", "B"))

        InspektifyExtensionRegistry.clear()

        assertTrue(InspektifyExtensionRegistry.extensions.value.isEmpty())
    }

    @Test
    fun `sorted orders by order ascending with stable insertion tiebreak`() {
        InspektifyExtensionRegistry.add(extension("a", "A", order = 10))
        InspektifyExtensionRegistry.add(extension("b", "B", order = 0))
        InspektifyExtensionRegistry.add(extension("c", "C", order = 0))
        InspektifyExtensionRegistry.add(extension("d", "D", order = -5))

        val sorted = InspektifyExtensionRegistry.sorted().map { it.id }
        assertEquals(listOf("d", "b", "c", "a"), sorted)
    }

    @Test
    fun `findById returns matching extension or null`() {
        InspektifyExtensionRegistry.add(extension("a", "A"))
        assertNotNull(InspektifyExtensionRegistry.findById("a"))
        assertNull(InspektifyExtensionRegistry.findById("missing"))
    }

    private fun extension(id: String, title: String, order: Int = 0) = InspektifyExtension(
        id = id,
        title = title,
        order = order,
        content = EmptyContent
    )

    private companion object {
        val EmptyContent: @Composable () -> Unit = {}
    }
}
