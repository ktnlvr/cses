#include <algorithm>
#include <functional>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(void) {
  int n, m;
  cin >> n >> m;

  multiset<unsigned int, greater_equal<unsigned int>> hs;
  for (size_t i = 0; i < n; i++) {
    unsigned int x;
    cin >> x;
    hs.insert(x);
  }

  for (size_t i = 0; i < m; i++) {
    unsigned int t;
    cin >> t;

    if (hs.size() == 0) {
      cout << -1 << '\n';
      continue;
    }

    auto it = hs.upper_bound(t);
    if (it == hs.end()) {
      cout << -1 << '\n';
      continue;
    } else {
      cout << *it << '\n';
      hs.erase(it);
    }
  }
}