import com.lemonappdev.konsist.api.KoModifier
import com.lemonappdev.konsist.api.Konsist
import com.lemonappdev.konsist.api.declaration.KoFunctionDeclaration
import com.lemonappdev.konsist.api.declaration.KoPropertyDeclaration
import com.lemonappdev.konsist.api.ext.list.containingDeclarations
import com.lemonappdev.konsist.api.ext.list.indexOfFirstInstance
import com.lemonappdev.konsist.api.ext.list.indexOfLastInstance
import com.lemonappdev.konsist.api.ext.list.modifierprovider.withModifier
import com.lemonappdev.konsist.api.ext.list.properties
import com.lemonappdev.konsist.api.verify.assertFalse
import com.lemonappdev.konsist.api.verify.assertTrue
import org.junit.jupiter.api.Test

// Run tests with command ./gradlew :konsistTest:jvmTest

class GeneralKonsistTest {

    @Test
    fun `properties are declared before functions`() {
        Konsist
            .scopeFromProject()
            .classes()
            .assertTrue {
                val lastKoPropertyDeclarationIndex = it
                    .declarations(includeNested = false, includeLocal = false)
                    .indexOfLastInstance<KoPropertyDeclaration>()
                val firstKoFunctionDeclarationIndex = it
                    .declarations(includeNested = false, includeLocal = false)
                    .indexOfFirstInstance<KoFunctionDeclaration>()
                if (lastKoPropertyDeclarationIndex != -1 && firstKoFunctionDeclarationIndex != -1) {
                    lastKoPropertyDeclarationIndex < firstKoFunctionDeclarationIndex
                } else {
                    true
                }
            }
    }

    @Test
    fun `no empty files allowed`() {
        Konsist
            .scopeFromProject()
            .files
            .assertFalse { it.text.isEmpty() }
    }

    @Test
    fun `no field should have 'm' prefix`() {
        Konsist
            .scopeFromProject()
            .classes()
            .properties()
            .assertFalse {
                val secondCharacterIsUppercase = it.name.getOrNull(1)?.isUpperCase() ?: false
                it.name.startsWith('m') && secondCharacterIsUppercase
            }
    }

    @Test
    fun `package name must match file path`() {
        Konsist
            .scopeFromProject()
            .packages
            .assertTrue { it.hasMatchingPath }
    }

    @Test
    fun `no wildcard imports allowed`() {
        Konsist
            .scopeFromProject()
            .imports
            .assertFalse { it.isWildcard }
    }

    @Test
    fun `no data classes use mutable properties`() {
        Konsist.scopeFromProject()
            .classes()
            .withModifier(KoModifier.DATA)
            .assertTrue {
                it.primaryConstructor?.parameters?.all { parameter ->
                    parameter.hasValModifier
                }
            }
    }

    @Test
    fun `all data class properties are defined in constructor`() {
        Konsist
            .scopeFromProject()
            .classes()
            .withModifier(KoModifier.DATA)
            .properties()
            .assertTrue {
                it.isConstructorDefined
            }
    }

    @Test
    fun `companion object is first declaration in the class`() {
        Konsist
            .scopeFromProject()
            .classes()
            .assertTrue {
                val companionObject = it.objects(includeNested = false).firstOrNull { obj ->
                    obj.hasModifier(KoModifier.COMPANION)
                }

                if (companionObject != null) {
                    if (it.constructors.containingDeclarations.isNotEmpty()) {
                        it.declarations(includeNested = false, includeLocal = false)[it.constructors.containingDeclarations.size] == companionObject
                    } else {
                        it.declarations(includeNested = false, includeLocal = false).first() == companionObject
                    }
                } else {
                    true
                }
            }
    }
}
