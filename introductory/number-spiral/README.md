# Number Spiral

## Attempt 1

1. Ok, so the diagonals are incrementing by +2 each time, a very stable pattern.
2. Up to the diagonals the numbers either decrease or increase by 1.
3. Even rows decrease, odd rows increase.
4. From the diagonal they either go left or up, going left will either decrase or increase, but going up for the same row will do the opposite of going left.

```
for each pair:
    calculate the corresponding diagonal square
    calculate diagonal value
    decide whether to increment or decrement
    decrement the respective amount from the diagonal
```

[Solution.](./solution.cpp)

## Takeaways

1. `max(x, y) - min(x, y)` is a weird way of saying `abs(x - y)`.
2. Remember to look at the constraints, put longs just in case.
