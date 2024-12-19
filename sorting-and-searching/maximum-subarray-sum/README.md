# Maximum Subarray Sum

## Attempt 1

1. We can keep track of the rolling sum for every number and output that.
2. Wrong answer? Fair, I guess there are cases where some previous subarray drags the whole value down.
```
-1 -1 -1 4 -1 100
```

3. For this case the sum of the whole array will be 101, but the best answer if we take from 4 to 100.
4. When calculating the current number we can always choose between incrementing the existing subarray sum (that makes sense if we are already at a high value) or starting the array anew, which we can do if this number alone is better. That can only reall happen if the sum of the subarray is 0.

[Solution](./main.cpp)
