# Request tags

Some APIs put every operation behind a single URL. A GraphQL endpoint is the common case: every
query and mutation is a `POST` to `/graphql`, so the Inspektify list ends up as a wall of identical
rows and the only way to tell them apart is to open each one and read the payload.

`inspektifyTags` attaches one or more short names to a request, shown under it in the list:

```
client.post("https://www.example.com/graphql") {
    inspektifyTags("SearchProducts", "query")
    contentType(ContentType.Application.Json)
    setBody(query)
}
```

Tags are:

- shown under the method and path on the list row
- matched by the list search, and offered as search suggestions
- listed in the transaction overview and in the copied/shared transaction text

Requests without tags are displayed exactly as before.

## Accumulating tags

Repeated calls add to what is already there, so a client can tag everything it sends and individual
call sites can narrow it down:

```
HttpClient {
    defaultRequest { inspektifyTags("api-v2") }
    install(InspektifyKtor)
}

// ...

client.get("products") { inspektifyTags("SearchProducts") } // tagged "api-v2" and "SearchProducts"
```

Blank tags are dropped and duplicates collapsed, keeping the order they were added in.

## Tagging in one place

Rather than calling `inspektifyTags` at each call site, set it once wherever your requests are
built. If every call already goes through a helper, that is a single line:

```
suspend fun callApi(operation: String, body: String): HttpResponse =
    client.post("https://www.example.com/graphql") {
        inspektifyTags(operation)
        contentType(ContentType.Application.Json)
        setBody(body)
    }
```

If you build the plugin into debug builds only (see
[Excluding Inspektify from Release Builds](EXCLUDING_INSPEKTIFY_FROM_RELEASE_BUILDS.md)), note that
`inspektifyTags` lives in the Inspektify artifact, so a call site that always runs needs Inspektify
on the release classpath too. Keep the call behind the same source set or flag that installs the
plugin.
