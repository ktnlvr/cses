#include <bitset>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int n;
  cin >> n;

  vector<long long> ps(n);

  for (int i = 0; i < n; i++)
    cin >> ps[i];

  long long mi = __LONG_MAX__;
  for (int i = 0; i < (1 << n); i++) {
    long long total = 0;

    for (int j = 0; j < n; j++) {
      int m = (i >> j) & 1;

      total += ps[j] * (2 * m - 1);
    }

    if (abs(total) < mi) {
      mi = abs(total);
    }
  }

  cout << mi << endl;
}