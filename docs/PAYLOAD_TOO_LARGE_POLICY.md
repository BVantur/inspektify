# Payload too large policy

By default Inspektify limits the stored request and response body to **250 000 bytes** (≈ 244 KB)
per payload. This prevents an `SQLiteBlobTooBigException` crash on Android, which occurs when a
single database row exceeds SQLite's CursorWindow size (~2 MB). You can customise this behaviour
with `payloadTooLargePolicy` in `InspektifyKtorConfig`.

> **Note:** `responsePayloadSize` always reflects the original network transfer size, so the size
> shown in the traffic list is accurate even when the displayed body has been truncated.

## PayloadTooLargePolicy.BodySizeLimit

Stores only the first N bytes of a payload. When a body is truncated, the stored text ends with a
`[... truncated]` marker so it is clear in the inspector that the full body was not captured.

The default limit of 250 000 bytes is chosen to leave comfortable headroom below Android's 2 MB
CursorWindow limit while still capturing most real-world API responses in full. You can raise or
lower it to suit your needs:

```
install(InspektifyKtor) {
    payloadTooLargePolicy = PayloadTooLargePolicy.BodySizeLimit()               // default: 250 000 bytes
    payloadTooLargePolicy = PayloadTooLargePolicy.BodySizeLimit(500_000)        // larger limit
    payloadTooLargePolicy = PayloadTooLargePolicy.BodySizeLimit(100_000)        // stricter limit
}
```

The named constant `PayloadTooLargePolicy.DEFAULT_MAX_PAYLOAD_SIZE` is available if you want to
reference the default value explicitly in your own code.

## PayloadTooLargePolicy.OmitBody

Drops the body entirely when its byte size exceeds the threshold. The stored payload is replaced
with a `[body omitted]` marker so the inspector makes it clear the body was intentionally skipped,
rather than being empty by nature.

This variant is useful when truncated bodies would still be too large, or when you want to conserve
database space and only care about headers and metadata for large responses.

```
install(InspektifyKtor) {
    payloadTooLargePolicy = PayloadTooLargePolicy.OmitBody()               // default: 250 000 bytes
    payloadTooLargePolicy = PayloadTooLargePolicy.OmitBody(500_000)        // larger threshold
    payloadTooLargePolicy = PayloadTooLargePolicy.OmitBody(100_000)        // stricter threshold
}
```
