# Extensions

Inspektify ships with a network inspector out of the box, but you can add your own tools next to it
through the **Extensions** page. Each registered extension shows up as a row in the Extensions tab
of the Inspektify tool window; tapping the row opens a detail screen whose body is a composable you
provide. This lets you keep debug utilities (design system previews, feature flags, environment
switchers, cache inspectors, etc.) inside the same overlay you already use for network debugging.

Extensions are only rendered when at least one is registered. If you do not register any, the
Extensions tab is hidden and Inspektify continues to show just the network list as before.

## Register an extension

Extensions are meant to be registered from the UI layer, right before your app UI gets composed for
the first time. A convenient place to do that is inside your top-level `App()` composable, wrapped
in a `remember { ... }` block so the registration runs exactly once for the lifetime of the
composition:

```
@Composable
fun App() {
    remember {
        InspektifyExtensions.register(
            InspektifyExtension(
                id = "design-system",
                title = "Design System",
                icon = InspektifyIcon.Vector(Icons.Filled.Palette),
                order = 0,
                content = { DesignSystemShowcase() }
            )
        )
    }

    // ... rest of your app UI
}
```

Registering from the UI layer (rather than from your DI graph) keeps the extension's `content`
composable close to the rest of your Compose code, so it can freely reference the same theme,
resources, and dependencies your app UI already has access to.

You can register multiple extensions and they will appear in the list sorted by their `order` value.

## InspektifyExtension configuration

`InspektifyExtension` accepts the following properties:

- `id`
  Stable, unique identifier for the extension. Re-registering with the same `id` overwrites the
  previous entry, which is useful during hot reload.

- `title`
  Human-readable label shown in the extensions list and in the detail screen top bar.

- `icon`
  Optional avatar icon shown next to the title in the list. When `null`, Inspektify falls back to
  the first letter of `title`.

- `order`
  Sort order in the extensions list. Lower values come first. Defaults to `0`.

- `content`
  Composable body of the detail screen. This is a plain `@Composable () -> Unit` slot, so you can
  put anything inside it - a single screen, a form, a list, or a full navigation graph.

## InspektifyIcon configuration

`InspektifyIcon` has two variants you can choose from:

- `InspektifyIcon.Vector`
  Uses an `ImageVector`, for example an entry from `Icons.Filled`.

  ```
  icon = InspektifyIcon.Vector(Icons.Filled.BugReport)
  ```

- `InspektifyIcon.Painter`
  Uses a Compose Multiplatform `DrawableResource` so you can point at your own asset from
  `composeResources`.

  ```
  icon = InspektifyIcon.Painter(Res.drawable.my_extension_icon)
  ```

## Bring your own navigation inside content

`content` is a normal composable slot, so on Compose Multiplatform / Android Compose you are free to
host your own navigation library inside it. This is the recommended way to build extensions that
need multiple screens and subscreens:

```
InspektifyExtensions.register(
    InspektifyExtension(
        id = "feature-flags",
        title = "Feature flags",
        content = {
            val navController = rememberNavController()
            NavHost(navController = navController, startDestination = "list") {
                composable("list") { FlagListScreen(onOpenDetail = { navController.navigate("detail/$it") }) }
                composable("detail/{flag}") { FlagDetailScreen(/* ... */) }
            }
        }
    )
)
```

You can equally use Voyager, Decompose, or any other navigator - Inspektify does not restrict what
you compose here. Your own state, DI, and side-effects work the same way as anywhere else in your
Compose UI.

> **Note:** Inspektify currently owns the extension detail screen's top bar (title and back action
> to the extensions list) and the system back action bubbles to Inspektify's outer navigation.
> Customising the top bar per subscreen or coordinating system back with an inner navigator are not
> supported yet.

## Unregister or clear extensions

You can remove a previously registered extension by `id`, or clear all of them at once:

```
InspektifyExtensions.unregister("design-system")

InspektifyExtensions.clear()
```

This is useful if extensions are tied to a specific screen or feature flag and you want to make
them available only in certain parts of your app.
