import com.vanniktech.maven.publish.SonatypeHost

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
    alias(libs.plugins.jetbrainsCompose)
    alias(libs.plugins.compose.compiler)
    alias(libs.plugins.ktlint)
    alias(libs.plugins.sqlDelight)
    alias(libs.plugins.swiftklib)
    alias(libs.plugins.mavenPublish)
}

val useKtorV3 = project.extra["inspektify.ktorVersion"] == "v3"
val inspektifyName = if (useKtorV3) {
    "inspektify-ktor3"
} else {
    "inspektify-ktor2"
}

mavenPublishing {
    coordinates(
        groupId = "io.github.bvantur",
        artifactId = inspektifyName,
        version = "1.0.0-alpha04"
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

    publishToMavenCentral(SonatypeHost.CENTRAL_PORTAL)
    signAllPublications()
}

kotlin {
    task("testClasses")
    androidTarget {
        publishLibraryVariants("release")
    }

    listOf(
        iosX64(),
        iosArm64(),
        iosSimulatorArm64()
    ).forEach { iosTarget ->
        iosTarget.compilations {
            val main by getting {
                cinterops {
                    create("ShakeDetektorIOS")
                }
            }
        }
    }

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
                kotlin.srcDir(project(":inspektify-ktor3").file("src/commonMain/kotlin"))
            } else {
                kotlin.srcDir(project(":inspektify-ktor2").file("src/commonMain/kotlin"))
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

swiftklib {
    create("ShakeDetektorIOS") {
        path = file("../ShakeDetektorIOS")
        packageName("sp.bvantur.inspektify.shakedetektor")
    }
}
