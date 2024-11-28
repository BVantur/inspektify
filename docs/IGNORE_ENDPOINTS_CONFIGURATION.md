# Ignore endpoints configuration

You can exclude specific endpoints from interception and logging by configuring
the `ignoreEndpoints` property in `InspektifyKtorConfig`. This is a list of `IgnorePathData`
objects, where each object specifies the HTTP method, the endpoint, and the matching strategy.

```
install(InspektifyKtor) {
    ignoreEndpoints = listOf(
        IgnorePathData(
            method = MethodType.GET,
            matchingStrategy = EndpointMatchingStrategy.Exact("https://www.example.com/health-check")
        ),
        IgnorePathData(
            method = MethodType.POST,
            matchingStrategy = EndpointMatchingStrategy.Contains("/login")
        ),
        IgnorePathData(
            method = MethodType.ALL,
            matchingStrategy = EndpointMatchingStrategy.Regex("https://reqres\\.in/.*"),
        )
    )
}
```

## IgnorePathData Fields

- `method`: Defines the HTTP method to match, using MethodType (e.g., GET, POST).
- `endpointMatchingStrategy`: Defines in which way matching should happen when ignoring different
  endpoints

### MethodType property

Supported HTTP methods: `GET`, `POST`, `PUT`, `DELETE`, `PATCH`, `HEAD`, `OPTIONS`.

There is a special case added to ignore all of HTTP methods if someone would like to ignore all
traffic coming in from specific endpoint. If you want to do that you can use `ALL` as methodType and
all traffic will be ignored that will match defined strategy.

### EndpointMatchingStrategy property

`Exact`: Exact URL matching.
`Contains`: Substring matching within the URL.
`Regex`: Matching URL against regular expression.