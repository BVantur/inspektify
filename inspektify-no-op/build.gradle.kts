@file:OptIn(ExperimentalKotlinGradlePluginApi::class)

import org.jetbrains.kotlin.gradle.ExperimentalKotlinGradlePluginApi
import org.jetbrains.kotlin.gradle.dsl.KotlinVersion

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
    alias(libs.plugins.jetbrainsCompose)
    alias(libs.plugins.compose.compiler)
    alias(libs.plugins.ktlint)
    alias(libs.plugins.mavenPublish)
}

val useKtorV3 = project.extra["inspektify.ktorVersion"] == "v3"

mavenPublishing {
    val inspektifyName = if (useKtorV3) {
        "inspektify-ktor3-no-op"
    } else {
        "inspektify-ktor2-no-op"
    }
    coordinates(
        groupId = "io.github.bvantur",
        artifactId = inspektifyName,
        version = libs.versions.inspektify.version.get()
    )

    pom {
        name.set("Inspektify No-Op")
        description.set(
            "No-op variant of Inspektify. Install in release builds to keep the API surface without any network interception overhead."
        )
        inceptionYear.set("2024")
        url.set("https://github.com/BVantur/inspektify")

        licenses {
            license {
                name.set("MIT")
                url.set("https://opensource.org/licenses/MIT")
            }
        }

        developers {
            developer {
                id.set("BVantur")
                name.set("Blaž Vantur")
                email.set("blaz.vantur@gmail.com")
            }
        }

        scm {
            url.set("https://github.com/BVantur/inspektify")
        }
    }

    publishToMavenCentral()
    signAllPublications()
}

kotlin {
    explicitApi()

    androidTarget {
        publishLibraryVariants("release")
    }

    compilerOptions {
        apiVersion.set(KotlinVersion.KOTLIN_2_1)
        languageVersion.set(KotlinVersion.KOTLIN_2_1)
    }

    iosX64()
    iosArm64()
    iosSimulatorArm64()

    jvm()

    sourceSets {
        commonMain.dependencies {
            if (useKtorV3) {
                implementation(libs.ktor3.client.core)
            } else {
                implementation(libs.ktor2.client.core)
            }
            implementation(compose.ui)
            implementation(compose.components.resources)
        }
    }
}

android {
    namespace = "sp.bvantur.inspektify.noop"
    compileSdk = libs.versions.android.compileSdk.get().toInt()

    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")

    defaultConfig {
        minSdk = libs.versions.android.minSdk.get().toInt()
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
    buildFeatures {
        compose = true
    }
}
