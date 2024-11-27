# Redact data from Inspektify

Sometimes our apps demand the sending and receiving of sensitive data that we don't want to expose
to users using the app in our development process. We have 2 separate configurations available for
redacting that data from recording it with Inspektify. The data that you want to redact will be
replaced with "*** REDACTED ***" text.

## Redact specific headers

By default, there are no headers specified to be redacted, but this can be easily changed by adding
header names into the next configuration:

```
install(InspektifyKtor) {
    redactHeaders = listOf("x-api-key", "Auth-Token")
}
```

## Redact request and response payload pro¬perties

If there is a need to redact some properties from your payloads, there is a way to do that with  the next configuration:

```
install(InspektifyKtor) {
    redactHeaders = listOf("firstName", "lastName")
}
```