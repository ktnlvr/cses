#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  size_t n;
  cin >> n;
  long current = 0;
  long maximum = INT32_MIN;
  for (size_t i = 0; i < n; i++) {
    long x;
    cin >> x;
    current = max(current + x, x);
    maximum = max(maximum, current);
  }
  cout << maximum << endl;
}
