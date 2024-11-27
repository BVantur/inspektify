# Ignore endpoints configuration

You can exclude specific endpoints from interception and logging by configuring the `ignoreEndpoints`
property in `InspektifyKtorConfig`. This is a list of `IgnorePathData` objects, where each object
specifies the HTTP method, the endpoint, and the matching strategy.

```
install(InspektifyKtor) {
    ignoreEndpoints = listOf(
        IgnorePathData(
            method = MethodType.GET,
            endpoint = "https://www.example.com/health-check",
            endpointMatchingStrategy = EndpointMatchingStrategy.EXACT
        ),
        IgnorePathData(
            method = MethodType.POST,
            endpoint = "/login",
            endpointMatchingStrategy = EndpointMatchingStrategy.CONTAINS
        )
    )
}
```

## IgnorePathData Fields

- `method`: Defines the HTTP method to match, using MethodType (e.g., GET, POST).
- `endpoint`: The URL or part of the URL to ignore.
- `endpointMatchingStrategy`: Defines matching behavior:
  - `EXACT`: Matches the endpoint exactly.
  - `CONTAINS`: Matches requests containing the endpoint as a substring.

### MethodType Enum

Supported HTTP methods: `GET`, `POST`, `PUT`, `DELETE`, `PATCH`, `HEAD`, `OPTIONS`.

### EndpointMatchingStrategy Enum

`EXACT`: Exact URL matching.
`CONTAINS`: Substring matching within the URL.