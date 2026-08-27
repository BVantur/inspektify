# Excluding Inspektify from Release Builds

Inspektify is a debug tool and should not be accessible to production users. Choose the approach
that fits your project setup.

---

<details>
<summary><strong>Option 1 — No-op dependency (Android projects)</strong></summary>

Each Inspektify artifact has a matching no-op variant that exposes the exact same API but does
nothing at runtime — no network interception, no database, no UI. Swap the dependency per build
type so your `install(InspektifyKtor)` call requires no conditional code.

```kotlin
// Ktor 3.x.x
dependencies {
    debugImplementation("io.github.bvantur:inspektify-ktor3:{mavenVersion}")
    releaseImplementation("io.github.bvantur:inspektify-ktor3-no-op:{mavenVersion}")
}

// Ktor 2.3.1 - 3.0.0
dependencies {
    debugImplementation("io.github.bvantur:inspektify-ktor2:{mavenVersion}")
    releaseImplementation("io.github.bvantur:inspektify-ktor2-no-op:{mavenVersion}")
}
```

Your Ktor client setup and any extension registrations stay completely unchanged across both builds:

```kotlin
HttpClient {
    install(InspektifyKtor)
}

InspektifyExtensions.register(
    InspektifyExtension(
        id = "my-extension",
        title = "My Extension",
        content = { MyExtensionScreen() }
    )
)
```

</details>

---

<details>
<summary><strong>Option 2 — Runtime check (KMP projects)</strong></summary>

For KMP projects where a single `commonMain` dependency is shared across all platforms, wrap the
`install` call with a platform-provided debug flag:

```kotlin
HttpClient {
    if (isDebug()) {
        install(InspektifyKtor)
    }
}
```

`isDebug()` must be provided by your own platform-specific code (e.g. `BuildConfig.DEBUG` on
Android, a build-time constant on iOS).

</details>
