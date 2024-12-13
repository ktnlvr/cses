#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  unsigned int n;
  cin >> n;

  std::vector<unsigned int> xs;
  xs.reserve(n);
  for (unsigned int i = 0; i < n; i++) {
    unsigned int xi;
    cin >> xi;
    xs.push_back(xi);
  }
  sort(xs.begin(), xs.end());

  long reps = 1;
  for (unsigned int i = 0; i < xs.size() - 1; i++)
    if (xs[i] != xs[i + 1])
      reps++;

  cout << reps << endl;
}
