# Missing Coin Sum

## Attempt 1

1. Ok, inductively. Assuming we can make sums from 0 to `N`, if we add a coin `k`, we now move the entire span `k` units over, so the final set of coins we can make is the union of the `0..N U k..(N+k)`.
2. The only way to introduce a "gap" in that new union of spans is if `k` > `N`, then the smallest possible element will be `k + 1`.
3. Implemented, sent.
4. Forgot the base case we will get one coin, so it's either one over the coin or just 1.
