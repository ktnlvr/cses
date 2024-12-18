#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

using u32 = unsigned int;

int main(void) {
  u32 n, x;
  cin >> n >> x;
  vector<u32> ps;
  ps.reserve(n);

  for (u32 i = 0; i < n; i++) {
    int p;
    cin >> p;
    ps.push_back(p);
  }

  std::sort(ps.begin(), ps.end());

  size_t r_ptr = 0;

  for (size_t i = 0; i < ps.size() - r_ptr; i++) {
    auto p = ps[i];
    do {
      r_ptr++;
    } while (p + ps[ps.size() - r_ptr] > x && i < ps.size() - r_ptr);
  }

  cout << r_ptr << endl;

  return 0;
}
