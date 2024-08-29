import io.gitlab.arturbosch.detekt.Detekt
import io.gitlab.arturbosch.detekt.DetektCreateBaselineTask
import org.jlleitschuh.gradle.ktlint.KtlintExtension
import org.jetbrains.kotlin.gradle.dsl.JvmTarget

plugins {
    // this is necessary to avoid the plugins to be loaded multiple times
    // in each subproject's classloader
    alias(libs.plugins.androidApplication) apply false
    alias(libs.plugins.androidLibrary) apply false
    alias(libs.plugins.jetbrainsCompose) apply false
    alias(libs.plugins.compose.compiler) apply false
    alias(libs.plugins.kotlinMultiplatform) apply false
    alias(libs.plugins.ktlint) apply false
    alias(libs.plugins.detekt) apply true
    alias(libs.plugins.kotlin.serialization) apply true
}

subprojects {
    ktlintSetup()
    detektSetup()
}

fun Project.ktlintSetup() {
    apply(plugin = rootProject.libs.plugins.ktlint.get().pluginId)
    configure<KtlintExtension> {
        version.set("1.3.0")
        enableExperimentalRules.set(true)
        verbose.set(true)
        filter {
            exclude { it.file.path.contains("build/") }
        }
    }
}

fun Project.detektSetup() {
    apply(plugin = rootProject.libs.plugins.detekt.get().pluginId)

    dependencies {
        detektPlugins(rootProject.libs.detekt.formatting)
    }

    detekt {
        buildUponDefaultConfig = true
        allRules = false
        source.from(
            "src/androidMain/kotlin",
            "src/commonMain/kotlin",
            "src/iosMain/kotlin"
        )
        config.setFrom("${rootProject.projectDir}/code-analysis-config/detekt/detekt.yml")
        baseline = file("${rootProject.projectDir}/code-analysis-config/detekt/baseline.xml")
    }

    tasks.withType<Detekt>().configureEach {
        exclude("**/build/**", "**/generated/**", "**/resources/**")
        autoCorrect = true

        reports {
            xml.required.set(false)
            txt.required.set(false)
            md.required.set(false)

            html {
                required.set(true)
                outputLocation.set(
                    layout.buildDirectory.file("reports/detekt.html")
                )
            }

            sarif.required.set(true)
        }
    }

    tasks.withType<Detekt>().configureEach {
        jvmTarget = JvmTarget.JVM_1_8.target
    }
    tasks.withType<DetektCreateBaselineTask>().configureEach {
        jvmTarget = JvmTarget.JVM_1_8.target
    }
}
