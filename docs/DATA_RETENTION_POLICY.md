# Data retention policy

By default retention policy is set to preserve data for the maximum possible period of 14 days.
You can customize this as you wish with `dataRetentionPolicy` which is available
in `InspektifyKtorConfig`. You have 2 possible ways to configure your retention policy. Either by
number of days or by session count.

**DataRetentionPolicy.DayDuration**

Here we can choose a number from 1 to 14. If you choose for example 3, Inspektify will preserve that
data for 7 whole days. You can configure it like this:

```
install(InspektifyKtor) {
    dataRetentionPolicy = DataRetentionPolicy.DayDuration(7)
}
```

**DataRetentionPolicy.SessionCount**

Here we can choose a number from 1 to 20. If you choose for example 10, Inspektify will preserve
that data for 10 sessions. When you start your 11th session, the data from the oldest session will
be removed. You can configure it like this:

```
install(InspektifyKtor) {
    dataRetentionPolicy = DataRetentionPolicy.SessionCount(10)
}
```