import org.jetbrains.kotlin.gradle.ExperimentalKotlinGradlePluginApi
import org.jetbrains.kotlin.gradle.dsl.JvmTarget

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidApplication)
    alias(libs.plugins.jetbrainsCompose)
    alias(libs.plugins.compose.compiler)
    alias(libs.plugins.kotlin.serialization)
}

kotlin {
    task("testClasses")

    androidTarget {
        @OptIn(ExperimentalKotlinGradlePluginApi::class)
        compilerOptions {
            jvmTarget.set(JvmTarget.JVM_17)
        }
    }

    listOf(
        iosArm64(),
        iosX64(),
        iosSimulatorArm64()
    ).forEach { iosTarget ->
        iosTarget.binaries.all {
            linkerOpts("-lsqlite3")
        }

        iosTarget.binaries.framework {
            baseName = "ComposeApp"
            isStatic = false
        }
    }

    sourceSets {
        val useKtorV3 = project.extra["inspektify.ktorVersion"] == "v3"
        androidMain.dependencies {
            implementation(compose.preview)
            implementation(libs.androidx.activity.compose)
            if (useKtorV3) {
                implementation(libs.ktor3.client.okHttp)
            } else {
                implementation(libs.ktor2.client.okHttp)
            }
        }

        commonMain.dependencies {
            implementation(project(":inspektify"))
            if (useKtorV3) {
                implementation(libs.bundles.ktor3)
//                implementation(libs.inspektify.ktor3)
            } else {
                implementation(libs.bundles.ktor2)
//                implementation(libs.inspektify.ktor2)
            }
            implementation(compose.runtime)
            implementation(compose.foundation)
            implementation(compose.material)
            implementation(compose.ui)
            implementation(compose.components.resources)
            implementation(compose.components.uiToolingPreview)
            implementation(libs.jetbrains.viewmodel.compose)
            implementation(libs.koin.core)
            implementation(libs.koin.compose.viewmodel)
        }

        iosMain.dependencies {
            if (useKtorV3) {
                implementation(libs.ktor3.client.ios)
            } else {
                implementation(libs.ktor2.client.ios)
            }
        }
    }
}

android {
    namespace = "sp.bvantur.inspektify.sample"
    compileSdk = libs.versions.android.compileSdk.get().toInt()

    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
    sourceSets["main"].res.srcDirs("src/androidMain/res")
    sourceSets["main"].resources.srcDirs("src/commonMain/resources")

    defaultConfig {
        applicationId = "sp.bvantur.inspektify.sample"
        minSdk = libs.versions.android.minSdk.get().toInt()
        targetSdk = libs.versions.android.targetSdk.get().toInt()
        versionCode = 1
        versionName = "1.0"
    }
    packaging {
        resources {
            excludes += "/META-INF/{AL2.0,LGPL2.1}"
        }
    }
    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
        }
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
    buildFeatures {
        compose = true
    }
    dependencies {
        debugImplementation(compose.uiTooling)
    }
}
