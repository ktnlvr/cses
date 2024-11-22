# Coin Piles

1. Let's draw how the games can go.
```
2, 1 > 4, 2 > 6, 3
 v      v
3, 3 > 5, 4
```
2. Ok, this looks like a lattice. So piles are reducible if they are on this lattice. 
3. We can make a pile if we can represent it as a linear combination of `a = 2i + j` and `b = i + 2j`. (I had a Linear Algebra exam in two hours and was supposed to be studying)

4. Let the pile be a vector `ni + mj`, then:

```
n = 2x + y
m = x + 2y
```

5. Using basic algebra...

```
x = m - 2y
n = 2(m - 2y) + y
n = 2m - 4y + y
n - 2m = -3y
3y = 2m - n
y = (2m - n) / 3
```

6. If Y is a whole number it is sufficient, since `x = m - 2y` and `2y` is a whole number if `y` is whole.
7. Wrong. Sigh, edgecase.
8. Ok, for a pair `(11, 4)` the solution is `(18, -3)`. We should not accept negative solutions for either of the variables.
9. Since the system of equations is symmetric (`f(x, y) = f(y, x)`), the solution for `x` is just the solution for `y` with variables swapped. Done.
