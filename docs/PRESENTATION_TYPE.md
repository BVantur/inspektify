# Presentation type

By default, the library detects the shake gesture on mobile clients or listens for a
shortcut `SHIFT + CONTROL + D` on desktop to show the list of network transactions that happened
within the app. But we want to enable developers to override this behavior if that suits them
better. That is why we introduced `autoDetectEnabled` configuration flag to our Inspektify
configuration.

This is a boolean flag which can be changed, but by default is turned on.
You can change that behavior when installing our plugin to the Ktor client like this:

```
install(InspektifyKtor) {
    autoDetectEnabled = false
}
```

If you turn off `autoDetectEnabled` the library provides you with possibility to start the
Inspektify tool debug window with the next code:

```
InspektifyKtor.startInspektify()
```