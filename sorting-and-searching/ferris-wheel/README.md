# Ferris Wheel

## Attempt 1

1. Sort the children!
2. For each child with minimum weight we can find another child from the right such that their weight is maximal and the total weight is less than the given number. 
3. All the children to the right of the child with the maximal weight can be discarded, since each of them requires their own gondola.
4. Done, not even a binary search required.

[Solution](./main.cpp)
