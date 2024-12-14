# Gray Code

## Attempt 1

1. Clearly this is just binary numbers, there are `2^n` binary numbers of length `n`.
2. Ok, let's just write out what the codes look like for 0-8.

```
000
001
011
010
110
111
101
100
```

3. So the pattern kinda reflects across the X axis... Interesting, maybe we can mirror that pattern.
4. So we can consider it like a shifted contiguous 0s and 1s, where the length of each 1 and 1 segment is shifted over by `2^i`, where `i` is the index of the row.
5. Ugh, ok, this doesn't work. 

N.B: I messed up the arithmetic, it would've worked.

## Attempt 2

1. Continuing attempt 1, we have some sort of delay until next time the value flips, so we can simulate it as a bunch of delays all activating every `2^i` iterations.
2. Worked, piece of cake.
