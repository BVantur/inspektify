<p align="center">
  <td><img src="inspektify/screenshots/inspektify_logo.png" width=320></td>
</p>

Inspektify is Kotlin Multiplatform Library for mobile platforms iOS and Android. It allows you to
observe the network of your application in real-time directly on your mobile device.

<p align="center">
  <a href="https://central.sonatype.com/artifact/io.github.bvantur/inspektify-ktor3">
    <img alt="Maven" src="https://img.shields.io/maven-metadata/v.svg?label=mavenVersion&logo=apachemaven&metadataUrl=https%3A%2F%2Frepo1.maven.org%2Fmaven2%2Fio%2Fgithub%2Fbvantur%2Finspektify-ktor3%2Fmaven-metadata.xml"/>
  </a>
</p>
<p align="center">
  <img alt="Android" src="https://img.shields.io/badge/Platform-Android-Blue?style=for-the-badge"/>
  <img alt="Ios" src="https://img.shields.io/badge/Platform-Ios-Blue?style=for-the-badge"/>
</p>

# Screenshots

### Android

<table align="center">
  <tr>
    <td>List</td>
    <td>Details</td>
  </tr>
  <tr>
    <td><img src="inspektify/screenshots/android_list_items.png" width=320></td>
    <td><img src="inspektify/screenshots/android_details.png" width=320></td>
  </tr>
</table>

### iOS

<table align="center">
  <tr>
    <td>List</td>
    <td>Details</td>
  </tr>
  <tr>
    <td><img src="inspektify/screenshots/ios_list_items.png" width=320></td>
    <td><img src="inspektify/screenshots/ios_details.png" width=320></td>
  </tr>
</table>

# Getting started

This library can be used only on projects that are using Ktor for network communication. If there is
a need to support a different library besides Ktor open an issue for it. Inspektify is supported
only for projects that are using the Ktor library equal to or greater than 2.3.1.

### 1. Gradle

This library is available on mavenCentral. To use it in your project add the following repository if
you don't have it yet.

```
repositories { 
    ...
    mavenCentral()
}
```

#### Ktor 3.x.x

If your project is using Ktor version in the 3.x.x family add Inspektify with this line:

```
commonMain.dependencies {
    ...
    implementation("io.github.bvantur:inspektify-ktor3:{mavenVersion}")
}
```

#### Ktor 2.3.1 - 3.0.0

If your project is using Ktor version between 2.3.1 and 3.0.0 add Inspektify with this line:

```
commonMain.dependencies {
    ...
    implementation("io.github.bvantur:inspektify-ktor2:{mavenVersion}")
}
```

### 2. Kotlin

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

# Configuration

This library was built with flexibility in mind. We don't want to force the behavior of the library
upon the developer who uses this library, so we implemented a couple of configurations for the
library to make it more flexible. The library also tracks which network transactions are from
current active app sessions and highlights them in the list with a different background color.
Network transactions from previous sessions have a background in light gray color.

### 1. Presentation type

By default, the library detects the shake gesture of the device and shows the list of network
transactions that happened within the app. But we want to enable developers to override this
behavior if that suits them better. That is why we introduced `presentationType` configuration to
our Inspektify configuration.

You can choose between

**PresentationType.AutoShake** // selected by default

or

**PresentationType.Custom**

You can change that behavior when installing our plugin to the Ktor client like this:

```
install(InspektifyKtor) {
    presentationType = PresentationType.Custom
}
```

If you choose `PresentationType.Custom` you also need to provide a way to show Inspektify debug tool
in some other way. For that purpose, there is a way to start the Inspektify tool debug window with
the next code:

```
InspektifyKtor.startInspektify()
```

### 2. Log level

By default, logging of network communication in-app output is not enabled. But if you want you can
enable it in the same way as we do it for the presentation type. The settings property that we can
change for the logging is `logLevel`

You can choose between

**LogLevel.None** // selected by default

or

**LogLevel.Info**

or

**LogLevel.Headers**

or

**LogLevel.Body**

or

**LogLevel.All**

You can change it when installing our plugin to the Ktor client like this:

```
install(InspektifyKtor) {
    logLevel = LogLevel.All
}
```

Here you can see what each LogLevel does when configured for your client:

- **LogLevel.None** -> doesn't log anything
- **LogLevel.Info** -> logs only base information of network transaction like url, method and
  response
  code.
- **LogLevel.Headers** -> prints everything that **LogLevel.Info** prints plus all the headers of
  request and response.
- **LogLevel.Body** -> prints everything that **LogLevel.Info** prints plus all the payload sent
  with
  request and response.
- **LogLevel.All** -> prints everything for a network transaction.

# Exclude library

Since this is a debug tool and we wouldn't want our production users to have the possibility to
access this tool we need to exclude the library from the release build. This can be easily done with
if statement before installing the plugin for a Ktor client like this:

```
HttpClient() {
    ...
    if (isDebug()) {
      install(InspektifyKtor)
    }
}
```

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

# Licence

```
MIT License

Copyright (c) 2024 Blaž Vantur

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

https://img.shields.io/maven-metadata/v.svg?label=Version&logo=apachemaven&metadataUrl=https%3A%2F%2Frepo1.maven.org%2Fmaven2%2Fio%2Fgithub%2Fbvantur%2Finspektify-ktor3%2Fmaven-metadata.xml