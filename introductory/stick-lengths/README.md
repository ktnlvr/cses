# Stick Lengths

## Attempt 1

Nuh-uh.

## Attempt 2

Came to me in a dream. If you imagine a PMF of each stick length, you want to find such a length that it's at equal distance from the worst half cases and the best half cases. By definition, that's the median.

Made a stupid mistake of doing `.reserve` but never actually populating the vector, so `cin >> p[i]` changed the values, but `std::sort` would not touch them.
