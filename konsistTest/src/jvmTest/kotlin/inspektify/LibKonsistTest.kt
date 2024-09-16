package inspektify

import com.lemonappdev.konsist.api.KoModifier
import com.lemonappdev.konsist.api.Konsist
import com.lemonappdev.konsist.api.provider.modifier.KoModifierProvider
import kotlin.test.Test
import kotlin.test.assertTrue

class LibKonsistTest {

    @Test
    fun `only specific classes should be publicly available`() {
        val allowedPublicComponents = listOf(
            "InspektifyKtor",
            "InspektifyKtorConfig",
            "NetworkTrafficHeader"
        )

        Konsist.scopeFromModule("inspektifyLib")
            .classes()
            .filter { clazz ->
                isPublicComponent(clazz) && !clazz.hasParentInterfaces() && !clazz.hasParentClass()
            }.forEach {
                assertTrue { it.name in allowedPublicComponents }
            }
    }

    @Test
    fun `only specific functions should be publicly available`() {
        val allowedPublicComponents = listOf(
            "InspektifyKtor:prepare",
            "InspektifyKtor:install",
            "InspektifyKtor:startInspektify"
        )

        val publicComponents = mutableListOf<String>()

        Konsist.scopeFromModule("inspektifyLib")
            .classes()
            .filter { clazz ->
                isPublicComponent(clazz) && !clazz.hasParentInterfaces() && !clazz.hasParentClass()
            }.forEach { clazz ->
                clazz.functions().filter { function ->
                    isPublicComponent(function)
                }.forEach { function ->
                    publicComponents.add("${clazz.name}:${function.name}")
                }
            }

        val nonAllowedPublicComponents = publicComponents.filter { it !in allowedPublicComponents }

        assertTrue(
            nonAllowedPublicComponents.isEmpty(),
            "Found non-allowed public components: $nonAllowedPublicComponents"
        )
    }

    @Test
    fun `only specific properties should be publicly available`() {
        val allowedPublicComponents = listOf(
            "InspektifyKtor:config",
            "InspektifyKtor:key",
            "NetworkTrafficHeader:name",
            "NetworkTrafficHeader:value",
            "InspektifyKtorConfig:presentationType"
        )

        val publicComponents = mutableListOf<String>()

        Konsist.scopeFromModule("inspektifyLib")
            .classes()
            .filter { clazz ->
                isPublicComponent(clazz) && !clazz.hasParentInterfaces() && !clazz.hasParentClass()
            }.forEach { clazz ->
                clazz.properties().filter { property ->
                    isPublicComponent(property)
                }.forEach { property ->
                    publicComponents.add("${clazz.name}:${property.name}")
                }
            }

        val nonAllowedPublicComponents = publicComponents.filter { it !in allowedPublicComponents }

        assertTrue(
            nonAllowedPublicComponents.isEmpty(),
            "Found non-allowed public components: $nonAllowedPublicComponents"
        )
    }

    private fun isPublicComponent(modifierProvider: KoModifierProvider?): Boolean {
        modifierProvider ?: return true

        return !modifierProvider.hasModifier(KoModifier.INTERNAL) &&
            !modifierProvider.hasModifier(KoModifier.PRIVATE) &&
            !modifierProvider.hasModifier(KoModifier.PROTECTED)
    }
}
