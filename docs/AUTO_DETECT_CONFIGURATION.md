# Auto detect configuration

By default, the library detects the shake gesture on mobile clients or listens for a
shortcut `SHIFT + CONTROL + D` on desktop to show the list of network transactions that happened
within the app. But we want to enable developers to override this behavior if needed for every
supported target. That is why we introduced `autoDetectEnabledFor` configuration property to our
Inspektify configuration.

This is a property that accepts set of `AutoDetectTarget` items with which we are dictating which
targets will implement default auto detection. By default all targets are enabled for auto
detection, but you can easily override this like it is shown in below example:

```
install(InspektifyKtor) {
    autoDetectEnabledFor = setOf(AutoDetectTarget.Android, AutoDetectTarget.Apple)
}
```

## AutoDetectTarget configuration

`AutoDetectTarget` defines the available platforms for auto-detection. You can choose from the next
targets:

- `Android`
  The Android target applies to Android platforms. No additional configuration is required.

- `Apple`
  The Apple target applies to iOS platform. No additional configuration is required.

- `Desktop`
  The Desktop target is used for desktop platforms (e.g., Windows, macOS, Linux). It allows you to
  configure shortcut combinations for triggering specific functionality.

**ShortcutCombination:**

- `mainModifier`: A set of modifier keys to be pressed together. You can choose either Control
  button, Shift button or you can select both of them. `CONTROL` and `SHIFT` are both set in the
  default configuration.
- `mainKey`: The primary key to be pressed along with `mainModifier`. Currently you can choose
  between `D`, `I` and `N` buttons and you can only choose one. By default we are assigning `D`
  button for main key.

Example configuration for a custom desktop shortcut:

```
AutoDetectTarget.Desktop(
    shortcutCombination = ShortcutCombination(
        mainModifier = setOf(MainModifier.SHIFT),
        mainKey = MainKey.I
    )
)
```

This setup enables `SHIFT + I` as the shortcut.

## How to disable auto detection

If you want to disable auto detection for all targets you just assign empty set
to `autoDetectEnabledFor` and that is it.
Note that then if you disable auto detection that it is your responsibility to present Inspektify
tool window with the next line of code:

```
InspektifyKtor.startInspektify()
```