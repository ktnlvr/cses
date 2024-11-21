# Two Knights

## Attempt 1

Yeah, no. (I misread the problem and thought it was for N knights)

## Attempt 2

1. Ok, the case for `k=1` is trivial, we can't place two.
2. We can draw all the cases for `k=2` easily:

```
2x2

K K    K .    K .    . K    . K    . .
. .    . K    K .    . K    K .    K K
```

3. Ok, this won't work. We can't go far by just enumerating all positions.
4. We can consider all possible positions of one knight. Then, all the positions that are not hit by it are free for the second knight to take!
5. Let's draw a case for 3 like that. The `K` denotes the knight, `#` is where it reaches and `o` are all the symmetries.

```
3x3

K . o    . K .    . . .
. . #    o . o    . K .
o # o    # o #    . . .
```

6. We can calculate the total by hand: `4 * 6 + 4 * 6 + 8 = 56`. Divide by two, since swapping the two knights counts as the same configuration and we get `28`, matches the answer key! This seems to be on the right track.

6. We still have not seen the Knight hitting all the positions around it, so keep drawing the cases for `k=4` and `k=5`. For case on the board we can not how many squares it "disables": one for each attacked spot and one for the knight `K` itself.

```
4x4

K . . o    . K o .    . . . #
. . # .    o . . #    . K o .
. # . .    # . # o    . o o #
o . . o    . o o .    # . # .
     -3         -4         -5
```

```
5x5

K . . . o    . K . o .    . . . # .    . . K . .    # . . . #
. . # . .    o . . # o    . K . o .    # . . . #    . . K . .
. # . . .    # . # . .    . . . # .    o # . # o    # o . o #
. . . . .    o . . . o    # o # o .    . . . . .    . # o # .
o . . . o    . o . o .    . . . . .    . . o . .    . . . . .
       -3            -4           -5          -5           -7
```

7. Ok, good. We know tha t we covered all the cases since if we superimpose the drawings ontop of eachother all the spots on the board will be covered by a `o` or a `K`.

8. *submit*. Sigh, integer overflow. Use `ll`.

## Takeaways

1. Don't be afraid to do the smaller version of the problem by hand to make sure.