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
