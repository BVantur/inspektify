import org.jetbrains.compose.desktop.application.dsl.TargetFormat
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
    val useKtorV3 = project.extra["inspektify.ktorVersion"] == "v3"

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
//        iosTarget.binaries.all {
//            linkerOpts("-lsqlite3")
//        }

        iosTarget.binaries.framework {
            baseName = "ComposeApp"
//            isStatic = false
            isStatic = true
            export(project(":inspektify"))
//            if (useKtorV3) {
//                export(libs.inspektify.ktor3)
//            } else {
//                export(libs.inspektify.ktor2)
//            }
        }
    }

    jvm()

    sourceSets {
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
            api(project(":inspektify"))
            if (useKtorV3) {
                implementation(libs.bundles.ktor3)
//                api(libs.inspektify.ktor3)
            } else {
                implementation(libs.bundles.ktor2)
//                api(libs.inspektify.ktor2)
            }
            implementation(compose.runtime)
            implementation(compose.foundation)
            implementation(compose.material3)
            implementation(compose.materialIconsExtended)
            implementation(compose.ui)
            implementation(compose.components.resources)
            implementation(compose.components.uiToolingPreview)
            implementation(libs.jetbrains.viewmodel.compose)
            implementation(libs.jetbrains.lifecycle.runtime.compose)
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

        jvmMain.dependencies {
            implementation(libs.jetbrains.coroutines.swing)
            implementation(compose.desktop.currentOs)
            if (useKtorV3) {
                implementation(libs.ktor3.client.java)
            } else {
                implementation(libs.ktor2.client.java)
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

compose.desktop {
    application {
        mainClass = "sp.bvantur.inspektify.sample.MainKt"

        nativeDistributions {
            modules("java.sql")
            includeAllModules = true
            targetFormats(TargetFormat.Dmg, TargetFormat.Msi, TargetFormat.Deb, TargetFormat.Exe)
            packageName = "sp.bvantur.inspektify.sample"
            packageVersion = "1.0.0"
        }
    }
}
