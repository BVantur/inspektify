@file:OptIn(ExperimentalKotlinGradlePluginApi::class)

import org.jetbrains.kotlin.gradle.ExperimentalKotlinGradlePluginApi
import org.jetbrains.kotlin.gradle.dsl.KotlinVersion

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
    alias(libs.plugins.jetbrainsCompose)
    alias(libs.plugins.compose.compiler)
    alias(libs.plugins.ktlint)
    alias(libs.plugins.sqlDelight)
    alias(libs.plugins.mavenPublish)
    alias(libs.plugins.mokkery)
}

val useKtorV3 = project.extra["inspektify.ktorVersion"] == "v3"

mavenPublishing {
    val inspektifyName = if (useKtorV3) {
        "inspektify-ktor3"
    } else {
        "inspektify-ktor2"
    }
    coordinates(
        groupId = "io.github.bvantur",
        artifactId = inspektifyName,
        version = libs.versions.inspektify.version.get()
    )

    pom {
        name.set("Inspektify")
        description.set("KMP library for Android and iOS clients for observing real-time network traffic of the app.")
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

    tasks.register("testClasses")
    androidTarget {
        publishLibraryVariants("release")
    }

    compilerOptions {
        apiVersion.set(KotlinVersion.KOTLIN_2_1)
        languageVersion.set(KotlinVersion.KOTLIN_2_1)
    }

    listOf(
        Triple(iosX64(), "iphonesimulator", "x86_64"),
        Triple(iosArm64(), "iphoneos", "arm64"),
        Triple(iosSimulatorArm64(), "iphonesimulator", "arm64")
    ).forEach { (iosTarget, sdk, arch) ->
        val shakeBuildDir = layout.buildDirectory.dir("shakeDetektor/${iosTarget.name}").get().asFile

        val compileShakeTask = tasks.register("compileShakeDetektor_${iosTarget.name}", Exec::class) {
            inputs.files(
                rootProject.file("ShakeDetektorIOS/ShakeDetektorIOS.m"),
                rootProject.file("ShakeDetektorIOS/ShakeDetektorIOS.h")
            )
            outputs.file("${shakeBuildDir}/libShakeDetektor.a")
            doFirst { shakeBuildDir.mkdirs() }
            commandLine(
                "sh", "-c",
                "SDK=\$(xcrun --sdk $sdk --show-sdk-path) && " +
                "clang -arch $arch -isysroot \$SDK -fobjc-arc -x objective-c " +
                "-c ${rootProject.file("ShakeDetektorIOS/ShakeDetektorIOS.m")} " +
                "-o ${shakeBuildDir}/ShakeDetektorIOS.o && " +
                "ar rcs ${shakeBuildDir}/libShakeDetektor.a ${shakeBuildDir}/ShakeDetektorIOS.o"
            )
        }

        iosTarget.compilations {
            val main by getting {
                cinterops {
                    create("ShakeDetektorIOS") {
                        includeDirs(rootProject.file("ShakeDetektorIOS"))
                        extraOpts(
                            "-libraryPath", shakeBuildDir.absolutePath,
                            "-staticLibrary", "libShakeDetektor.a"
                        )
                    }
                }
            }
        }

        afterEvaluate {
            val cinteropTaskName = "cinteropShakeDetektorIOS${
                iosTarget.name.replaceFirstChar { it.uppercase() }
            }"
            tasks.named(cinteropTaskName).configure {
                dependsOn(compileShakeTask)
            }
        }
    }

    jvm()

    sourceSets {
        androidMain.dependencies {
            implementation(compose.preview)
            implementation(libs.androidx.activity.compose)
            implementation(libs.androidx.startup.runtime)
            implementation(libs.cash.sqldelight.android.driver)
            implementation(libs.androidx.lifecycle.process)
        }
        commonMain {
            if (useKtorV3) {
                kotlin.srcDir(file("src/ktorv3/kotlin"))
            } else {
                kotlin.srcDir(file("src/ktorv2/kotlin"))
            }
            dependencies {
                if (useKtorV3) {
                    implementation(libs.ktor3.client.core)
                } else {
                    implementation(libs.ktor2.client.core)
                }
                implementation(compose.runtime)
                implementation(compose.foundation)
                implementation(compose.material3)
                implementation(compose.ui)
                implementation(compose.materialIconsExtended)
                implementation(compose.components.resources)
                implementation(compose.components.uiToolingPreview)
                implementation(libs.jetbrains.viewmodel.compose)
                implementation(libs.jetbrains.serialization.json)
                implementation(libs.jetbrains.lifecycle.runtime.compose)
                implementation(libs.jetbrains.navigation.compose)
                implementation(libs.cash.sqldelight.primitive.adapters)
                implementation(libs.cash.sqldelight.coroutines.extensions)
                implementation(libs.kotlinx.datetime)
            }
        }
        iosMain.dependencies {
            implementation(libs.cash.sqldelight.native.driver)
        }

        jvmMain.dependencies {
            implementation(compose.desktop.currentOs)
            implementation(libs.cash.sqldelight.sql.driver)
        }

        commonTest.dependencies {
            implementation(libs.kotlin.test)
            implementation(libs.jetbrain.coroutines.test)
        }
    }
}

android {
    namespace = "sp.bvantur.inspektify"
    compileSdk = libs.versions.android.compileSdk.get().toInt()

    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
    sourceSets["main"].res.srcDirs("src/androidMain/res")
    sourceSets["main"].resources.srcDirs("src/commonMain/resources")

    defaultConfig {
        minSdk = libs.versions.android.minSdk.get().toInt()
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
}

val codeAnalysisGitHook by tasks.registering(Copy::class) {
    from("../code-analysis-config/code-analysis-pre-commit")
    into("../.git/hooks")
    rename { "pre-commit" }
    fileMode = 0b111101101
}

tasks.named("preBuild").configure {
    dependsOn(codeAnalysisGitHook)
}

sqldelight {
    databases {
        create("InspektifyDB") {
            packageName.set("sp.bvantur.inspektify.db")
        }
    }
}

