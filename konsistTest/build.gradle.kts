plugins {
    alias(libs.plugins.kotlinMultiplatform)
}

kotlin {
    targetHierarchy.default()
    jvm {
        compilations.all {
            kotlinOptions {
                jvmTarget = "17"
            }
        }
        testRuns.named("test") {
            executionTask.configure {
                useJUnitPlatform()
            }
        }
    }
    listOf(
        iosX64(),
        iosArm64(),
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
