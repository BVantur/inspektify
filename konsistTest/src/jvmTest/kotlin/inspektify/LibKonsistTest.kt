package inspektify

import com.lemonappdev.konsist.api.KoModifier
import com.lemonappdev.konsist.api.Konsist
import kotlin.test.Test
import kotlin.test.assertTrue

class LibKonsistTest {

    @Test
    fun `only specific components should be publicly available`() {
        val allowedPublicComponents = listOf(
            "InspektifyKtor",
            "InspektifyKtorConfig",
            "NetworkTrafficHeader"
        )

        val allFiles = Konsist.scopeFromModule("inspektifyLib").files
        val publicComponents = mutableListOf<String>()

        allFiles.forEach { file ->
            file.classes().forEach classForEach@{ clazz ->
                if (!clazz.hasModifier(KoModifier.INTERNAL) &&
                    !clazz.hasModifier(KoModifier.PRIVATE) &&
                    !clazz.hasModifier(KoModifier.PROTECTED)
                ) {
                    if (publicComponents.none { it == clazz.name }) {
                        publicComponents.add(clazz.name)
                    }
                } else {
                    return@classForEach
                }

                clazz.functions().forEach { function ->
                    if (!function.hasModifier(KoModifier.INTERNAL) &&
                        !function.hasModifier(KoModifier.PRIVATE) &&
                        !function.hasModifier(KoModifier.PROTECTED)
                    ) {
                        if (publicComponents.none { it == clazz.name }) {
                            publicComponents.add("${clazz.name}.${function.name}")
                        }
                    }
                }

                clazz.properties().forEach { property ->
                    if (!property.hasModifier(KoModifier.INTERNAL) &&
                        !property.hasModifier(KoModifier.PRIVATE) &&
                        !property.hasModifier(KoModifier.PROTECTED)
                    ) {
                        if (publicComponents.none { it == clazz.name }) {
                            publicComponents.add("${clazz.name}.${property.name}")
                        }
                    }
                }
            }
        }

        val nonAllowedPublicComponents = publicComponents.filter { it !in allowedPublicComponents }

        assertTrue(
            nonAllowedPublicComponents.isEmpty(),
            "Found non-allowed public components: $nonAllowedPublicComponents"
        )
    }
}
