package inspektify

import com.lemonappdev.konsist.api.KoModifier
import com.lemonappdev.konsist.api.Konsist
import com.lemonappdev.konsist.api.architecture.KoArchitectureCreator.assertArchitecture
import com.lemonappdev.konsist.api.architecture.Layer
import com.lemonappdev.konsist.api.provider.modifier.KoModifierProvider
import kotlin.test.Test
import kotlin.test.assertTrue

class LibKonsistTest {

    @Test
    fun `clean architecture layers have correct dependencies`() {
        Konsist
            .scopeFromProduction("inspektify")
            .assertArchitecture {
                // Define layers
                val domain = Layer("Domain", "..domain..")
                val presentation = Layer("Presentation", "..presentation..")
                val data = Layer("Data", "..data..")

                // Define architecture assertions
                domain.dependsOnNothing()
                presentation.dependsOn(domain)
                data.dependsOn(domain)
            }
    }

    @Test
    fun `only specific classes should be publicly available`() {
        val allowedPublicComponents = listOf(
            "InspektifyKtor",
            "InspektifyKtorConfig",
            "NetworkTrafficHeader"
        )

        Konsist.scopeFromModule("inspektify")
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

        Konsist.scopeFromModule("inspektify")
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
            "InspektifyKtorConfig:presentationType",
            "InspektifyKtorConfig:logLevel",
            "InspektifyKtorConfig:dataRetentionPolicy",
            "InspektifyKtorConfig:autoDetectEnabled",
            "InspektifyKtorConfig:shortcutEnabled",
            "InspektifyKtorConfig:redactHeaders",
            "InspektifyKtorConfig:redactBodyProperties"
        )

        val publicComponents = mutableListOf<String>()

        Konsist.scopeFromModule("inspektify")
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
