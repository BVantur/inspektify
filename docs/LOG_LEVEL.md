# Log level

By default, logging of network communication in-app output is disabled. But if you want you can
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