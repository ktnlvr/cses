# Permutations

## Attempt 1

1. Take the numbers to the right and the left of the middle.
2. Keep taking the right and left numbers until 3 are left.
3. If the `N` is odd, the three numbers are `(1, N / 2, N)`. For all cases `N > 3` they can be arranged like `(1, N, N / 2)`.
4. If the `N` is even, we have two numbers left: `(1, N)`, which can be trivially prepended to the end as is.
5. Ok, TL. Modifying a list is not for the best here. Modifying a list is `O(N)`, that scaled with input so final `O(N^2)`.

## Attempt 2

1. Ok, the case for 4 can be solved. (3, 1, 4, 2)
2. The edges of the case (1 and 3) are compatible, so we can combine multiple cases like that together.
3. Incementing all the numbers by some `x` presetves the compatibility and correctness. We can make a sequence (x + 2, x, x + 3, x + 1)
4. Solved for cases where `N` is divisible by 4.
5. Any case where `N - 1` is disible by 4, can be transformed to an `N` case by removing the 1 and appending it to the end, since the last number is guaranteed to be at least +2 (by 3).
6. For cases `N - 2` is divisible, we can throw the 1 at the start and the 2 at the end and then start with a 3.
7. Case for `N - 3` is disible, we can follow 6., but also add a 3 at the start before the 1 and start with a 4.
8. Case for `N - 4` is divisible by 4, so all cases covered.

[Solution](./solution01.cpp)

## Attempt 3

1. Oh bugger, we can just print all even and all odd numbers.

[Solution](./solution02.cpp)
