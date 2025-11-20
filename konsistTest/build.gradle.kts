@file:OptIn(ExperimentalKotlinGradlePluginApi::class)

import org.jetbrains.kotlin.gradle.ExperimentalKotlinGradlePluginApi
import org.jetbrains.kotlin.gradle.dsl.JvmTarget

plugins {
    alias(libs.plugins.kotlinMultiplatform)
}

kotlin {
    tasks.register("testClasses")
    applyDefaultHierarchyTemplate()

    jvm {
        // Replace compilations.all with target-level compilerOptions
        compilerOptions {
            jvmTarget.set(JvmTarget.JVM_17)
        }

        testRuns.named("test") {
            executionTask.configure {
                useJUnitPlatform()
            }
        }
    }

    listOf(
        iosArm64(),
        iosX64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {
            baseName = "konsistTest"
        }
    }

    sourceSets {
        jvmTest.dependencies {
            implementation(libs.konsist.test)
            implementation(libs.kotlin.test)
        }
    }
}
