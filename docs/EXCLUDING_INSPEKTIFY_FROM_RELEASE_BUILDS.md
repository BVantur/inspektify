# Excluding Inspektify from Release Builds

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