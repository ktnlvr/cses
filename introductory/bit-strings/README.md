# Bit Strings

## Attempt 1

1. Ok... So the amount of possible permutations is `2^n`, so the answer itself is trivial.
2. The issue is the bounds, `n < 10^6`, so the maximum possible number is `2^(10^6) ≈ 10^301030`.
3. Ok, does the [naive Python solution work](./solution.py)?
4. Sigh, forgot the modulo.
5. Yep, it does. Nice.
