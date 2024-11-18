#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int n;
  cin >> n;

  if (n == 1) {
    cout << 1 << endl;
    return 0;
  } else if (n < 4) {
    cout << "NO SOLUTION" << endl;
    return 0;
  }

  int i = 0, m = n;
  if (n % 4 == 1) {
    i = 1;
  } else if (n % 4 == 2) {
    i = 1;
    m -= 1;
    cout << 1 << ' ';
  } else if (n % 4 == 3) {
    i = 3;
    m -= 1;
    cout << 3 << ' ' << 1 << ' ';
  }

  while (i / 4 < m / 4) {
    auto x = i + 1;
    cout << x + 1 << ' ';
    cout << x + 3 << ' ';
    cout << x << ' ';
    cout << x + 2 << ' ';
    i += 4;
  }

  if (n % 4 == 1) {
    cout << 1 << endl;
  } else if (n % 4 == 2) {
    cout << n << endl;
  } else if (n % 4 == 3) {
    cout << 2 << endl;
  } else {
    cout << endl;
  }
}
