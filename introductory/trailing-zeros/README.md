# Trailing Zeros

## Attempt 1

1. Ok, calculating the entire factorial will not work. Maybe zeros happen often, so we can just always trim them off and be within bounds?
2. TL, ok, maybe don't. After all it's still calculating the factorial.

## Attempt 2

1. Ok, the only way we can get a trailing zero is if we get a `10`, a `10 = 5 * 2`, so we can count the 5s and 2s.
2. And then the amount of trailing zeros is `min(5s, 2s)`. So we just need to estimate how many multiples of 10, 5 and 2 there will be. Sounds like O(1) to me.
3. `fives = n / 5`, `twos = n / 2`, there will always be more 2s than 5s, so just `n / 5`?.
4. No? Hmm... My answers are always lower, so this method undercounts.
5. Oh, right 25 is divisible by 5 two times, so it can cancel two twos, like a 4 and give 2 zeros. So the task is estimating how many factors of `5` and `2` are in `n!`.
6. Again, there will always be more twos than 5s, so we only need to estimate the 5s.
7. Ok, so we just count how many times the numbers are divisible by `5`, `25`, `125` and so on, easy.

[Solution](./solution.cpp)
