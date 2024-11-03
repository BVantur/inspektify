# Shortcut for mobile clients

By default Inspektify listens for shake gesture and after shaking is detected the debug tool window
is presented. But this doesn't work for all projects, especially if you are using some other third
party libraries that are using the same shake detection. That is why we introduced shortcut
capability for our mobile targets(Android, iOS).

<p align="center">
  <img src="../inspektify/screenshots/shortcut_android.gif" width=320>
  <img src="../inspektify/screenshots/shortcut_ios.gif" width=320>
</p>

By default shortcut configuration is disabled, because it require some additional setup on iOS side,
but you can easily enable it by changing `shortcutEnabled` configuration flag
within `InspektifyKtorConfig`class like this:

```
install(InspektifyKtor) {
    shortcutEnabled = true
}
```

When you do that, Android client is working as expected, but on iOS there is some additional steps
need it to make it work.

## iOS shortcut

### 1. Gradle

First thing we need to do si to change inclusion of the library from `implementation` to `api` like
this:

```
commonMain.dependencies {
    ...
    api("io.github.bvantur:inspektify-ktor3:{mavenVersion}")
}
```

Add the `export("io.github.bvantur:inspektify-ktor3:{mavenVersion}")` lins where you define your
iosTargets like this:

```
listOf(
        iosArm64(),
        iosX64(),
        iosSimulatorArm64()
    ).forEach { iosTarget ->
        iosTarget.binaries.framework {
            ...
            export("io.github.bvantur:inspektify-ktor3:{mavenVersion}")
        }
    }
```

### 2. iOS native project

Now depends on if you are already using AppDelegate class in you project or not. If you already have
AppDelegate class in your project go directly to `You already have AppDelegate in your project `
section below.

#### No AppDelegate in your project

I you don't have AppDelegate class in your iOS native project, you need to
create `AppDelegate.swift` file in your root folder and add the next content to it:

```
import UIKit

class AppDelegate: NSObject, UIApplicationDelegate {
}
```

Continue with instructions from `You already have AppDelegate in your project` section.

#### You already have AppDelegate in your project

If you already have AppDelegate.swift class in your project, you just need to add next two things.

1. Import shared module to your file like this:

`import ComposeApp`

2. Override next application method with creating `UISceneConfiguration` instance from Inspektify
   library:

```
func application(
        _ application: UIApplication,
        configurationForConnecting connectingSceneSession: UISceneSession,
        options: UIScene.ConnectionOptions
    ) -> UISceneConfiguration {
        return InspektifyShortcutHandlerKt.getInspektifyUISceneConfiguration(configurationForConnectingSceneSession: connectingSceneSession)
    }
```

Now shortcuts should work on iOS as well. In a case when you want to have your own
`UISceneConfiguration` implementation in your iOS project, the library makes shortcut type available
for usage under `InspektifyShortcutHandlerKt.getInspektifyShortcutType()` method, but pay attention
that you do everything in above `1. Gradle` section and to import shared module wherever you want to
use it.


