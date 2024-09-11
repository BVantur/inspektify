plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
    alias(libs.plugins.jetbrainsCompose)
    alias(libs.plugins.compose.compiler)
    alias(libs.plugins.ktlint)
    alias(libs.plugins.sqlDelight)
}

kotlin {
    task("testClasses")
    androidTarget()

    listOf(
        iosArm64(),
        iosX64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {
            baseName = "InspektifyLib"
            isStatic = true
        }
        it.compilations.getByName("main") {
            cinterops.create("ShakeDetectorIOS") {
                defFile = file("src/nativeInterop/cinterop/ShakeDetectorIOS.def")
                packageName = "sp.bvantur.inspektify.shakedetector"
                includeDirs.allHeaders("src/nativeInterop/cinterop/")
                extraOpts("-libraryPath", "$projectDir/src/nativeInterop/cinterop/")
//                compilerOpts("-include-binary", "src/nativeInterop/cinterop/libShakeDetectorIOS.a")
//                includeDirs.allHeaders("$projectDir/../ShakeDetectorIOS/ShakeDetectorIOS")
            }
        }

//        it.compilations["main"].kotlinOptions.freeCompilerArgs = mutableListOf(
//            "-include-binary", "src/nativeInterop/cinterop/libShakeDetectorIOS.a"
//                    )
    }

//    targets.withType<KotlinNativeTarget> {
//        compilations["main"].cinterops {
//            val ShakeDetectorIOS by creating {
//                defFile = file("src/nativeInterop/cinterop/ShakeDetectorIOS.def")
//                packageName = "sp.bvantur.inspektify.shakedetector"
//                includeDirs.allHeaders("src/nativeInterop/cinterop/")
//
//            }
//        }
//    }

    sourceSets {
        androidMain.dependencies {
            implementation(compose.preview)
            implementation(libs.androidx.activity.compose)
            implementation(libs.androidx.startup.runtime)
            implementation(libs.cash.sqldelight.android.driver)
            implementation(libs.androidx.lifecycle.process)
        }
        commonMain.dependencies {
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
            implementation(libs.ktor.client.core)
            implementation(libs.cash.sqldelight.primitive.adapters)
            implementation(libs.cash.sqldelight.coroutines.extensions)
            implementation(libs.kotlinx.datetime)
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
    dependencies {
        debugImplementation(compose.uiTooling)
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
