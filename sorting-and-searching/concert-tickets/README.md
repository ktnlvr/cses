# Concert Tickets

## Attempt 1

1. Sort, binary search, one by one.
2. Ok, so I need to track if the element was found at all, but that's won't work since I can only really track if the exact match is found.
3. Oh, or not, I'm ok. Just always track the midpoint and let that be the candidate.
4. And before the binary search check if the last element does not satisfy the ticket.
5. How curious, there can be more buyers than tickets. I wonder if that is an edgecase?
6. It was an edgecase, RE.
7. TL, should get used to the fact that removing elements from a vector is a bad idea.

## Attempt 2

1. Ok, same solution, but we can use a multiset for all our sorted need. Deletions will be `O(logN)` so a total of `O(NlogN)` pretty good.
2. And I got a hint that there is the `upper_bound` function that does exactly what I need. At this point I basically wrote it myself but this one must be faster.
3. Ok... TL?
4. Right, `std::upper_bound` is not the same as `std::set::upper_bound`. Obviously.

[Solution](./main.cpp)
