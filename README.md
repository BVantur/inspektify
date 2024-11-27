<p align="center">
  <td><img src="inspektify/screenshots/inspektify_logo.png" width=560></td>
</p>

<p align="center">
  <a href="https://central.sonatype.com/artifact/io.github.bvantur/inspektify-ktor3">
    <img alt="Maven" src="https://img.shields.io/maven-metadata/v.svg?label=mavenVersion&logo=apachemaven&metadataUrl=https%3A%2F%2Frepo1.maven.org%2Fmaven2%2Fio%2Fgithub%2Fbvantur%2Finspektify-ktor3%2Fmaven-metadata.xml" height=30 />
  </a>
</p>
<p align="center">
  <img alt="Android" src="https://img.shields.io/badge/Platform-Android-Blue?style=for-the-badge"/>
  <img alt="Ios" src="https://img.shields.io/badge/Platform-Ios-Blue?style=for-the-badge"/>
  <img alt="Ios" src="https://img.shields.io/badge/Platform-Desktop-Blue?style=for-the-badge"/>
</p>

Inspektify is Kotlin Multiplatform Library for iOS, Android and Desktop platforms. It allows you to
observe the network of your application in real-time directly on your device.

<p align="center">
  <img src="inspektify/screenshots/inspektify.gif" width=320>
</p>

# Getting started

This library can be used only on projects that are using Ktor for network communication. If there is
a need to support a different networking library besides Ktor open an issue for it. Inspektify is
supported only for projects that are using the Ktor library equal to or greater than 2.3.1.

## 1. Gradle

This library is available on mavenCentral. To use it in your project add the following repository if
you don't have it yet.

```
repositories { 
    ...
    mavenCentral()
}
```

### Ktor 3.x.x

If your project is using Ktor version in the 3.x.x family add Inspektify with this line:

```
commonMain.dependencies {
    ...
    implementation("io.github.bvantur:inspektify-ktor3:{mavenVersion}")
}
```

### Ktor 2.3.1 - 3.0.0

If your project is using Ktor version between 2.3.1 and 3.0.0 add Inspektify with this line:

```
commonMain.dependencies {
    ...
    implementation("io.github.bvantur:inspektify-ktor2:{mavenVersion}")
}
```

### iOS target

Depending on your project setting there are 2 different ways that need to be done to make it work on
iOS target.

#### Static Framework (`isStatic = true`)

If your iOS targets are set as static you need to follow the next steps:

1. Open your iOS project in Xcode
2. Select your root element in your iOS project directory tree(usually named with iosApp by default)
3. Select your TARGET
4. Go to Build Settings
5. Search for **Other Linker Flags**
6. Add `-lsqlite3` to it

#### Dynamic Framework (`isStatic = false`)

If your iOS targets are set to be dynamic, then it is necessary to add this additional gradle
configuration to your project:

```
iosTarget.binaries.all {
  linkerOpts("-lsqlite3")
}
```

The sample project is currently configured as dynamic, so you can see how this approach can be
implemented there.

## 2. Kotlin

You need to configure the library wherever you are creating a Ktor client in your project.
Configuration follows the defined design of the Ktor library by installing a plugin directly to the
Ktor client.
The minimum code for including the Inspektify library in the project is:

```
HttpClient() {
    ...
    install(InspektifyKtor)
}
```

# Additional configuration

This library was built with flexibility in mind. We don't want to force the behavior of the library
upon the developer who uses this library, so we implemented a couple of configurations for the
library to make it more flexible. The library also tracks which network transactions are from
current active app sessions and highlights them in the list with a different background color.
Network transactions from previous sessions have a background in light gray color.

1. [Presentation type](docs/PRESENTATION_TYPE.md)
2. [Log level](docs/LOG_LEVEL.md)
3. [Data retention policy](docs/DATA_RETENTION_POLICY.md)
4. [Shortcut for mobile clients](docs/SHORTCUT_FOR_MOBILE_CLIENTS.md)
5. [Excluding Inspektify from Release Builds](docs/EXCLUDING_INSPEKTIFY_FROM_RELEASE_BUILDS.md)
5. [Redact data from Inspektify](docs/EXCLUDING_INSPEKTIFY_FROM_RELEASE_BUILDS.md)

## Sample project

A sample project is included where you can test the behavior of the Inspektify library. By default,
the sample is configured to use Ktor from the 3.x.x family, but if you want to test with Ktor from
2.3.1 to 3.0.0 versions you need to change the next line in gradle.properties:

`inspektify.ktorVersion=v2`

## Contact me

<a href="https://github.com/BVantur">
    <img src="https://skillicons.dev/icons?i=github" alt="Github Profile" width="40" height="40">
</a>
<a href="https://www.linkedin.com/in/bla%C5%BE-vantur-9aa466a0/">
    <img src="https://skillicons.dev/icons?i=linkedin" alt="LinkedIn" width="40" height="40">
</a>
<a href="https://medium.com/@bvantur">
    <img src="https://miro.medium.com/v2/resize:fit:1400/1*psYl0y9DUzZWtHzFJLIvTw.png" alt="Medium" width="40" height="40">
</a>