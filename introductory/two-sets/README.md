## Two Sets

## Attempt 1

1. Ok, so we have to split it into two sets. The sum of the sets are the same and they are only composed of values `1..n`. Let `k` be the sum of one set, then `2k = n * (n + 1) / 2`. Nice.
2. The sum has to be whole, so the solution only exists if the sum of `1..n` is even.
3. Well, what if we do the Gauss summation, so for `7` we pair up `7 + 1`, and `2 + 6`, so that they all give the same value and we just put them into different sets.
4. Nah, doesn't work with 7, the middle value sometimes stays.
5. Ok, but since the sets combine to make `1..n`, we can reconstruct the second set from the first and vice versa.
6. And we know that the value of one set is `k`, so `k = n * (n + 1) / 4`. And `k` only consists of numbers `1..n`. There has to be a way to just make up `k`.
7. There is! I didn't have to think about it much, kinda just popped into my head.

```py
n = 7
k = n * (n + 1) / 4  # 14

out = []
while k > n:
    k -= n
    n -= 1
    out.append(n)
out.append(k)

print(out)  # 7 6 1
```

8. We are also guaranteing that all the numbers except the last are taken from the end of the array, so when printing out the second set we only have to skip the last element of the first set.
9. And the last element will always be `k`, nice.
