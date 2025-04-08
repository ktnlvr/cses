# Tower Of Hanoi

Even though this is classical problem I never really wrote the code to make it work.

## Attempt 1

Wrote out a basic solution for the first 3 cases:

```cpp
if (amount == 1) {
  cout << from << ' ' << to;      // 1
}

if (amount == 2) {
  cout << from << ' ' << support; // 1
  cout << from << ' ' << to;      // 2
  cout << support << ' ' << to;   // 1
}

if (amount == 3) {
  cout << from << ' ' << to;      // 1
  cout << from << ' ' << support; // 2
  cout << to << ' ' << support;   // 1
  cout << from << ' ' << to;      // 3
  cout << support << ' ' << from; // 1
  cout << support << ' ' << to;   // 2
  cout << from << ' ' << to;      // 1
}
```

The comments indicate which disk is being moved.

The pattern is always moving the rest of the stack to a support, moving some specific disk and then topping off with the previously moved stack, the implementation is very straightforward.
