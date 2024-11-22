#include <iostream>

using namespace std;

int main(void) {
  long n;
  cin >> n;
  for (long i = 0; i < n; i++) {
    long a, b;
    cin >> a >> b;
    long x = (2 * a - b);
    long y = (2 * b - a);
    if (x < 0 || y < 0 || x % 3 || x % 3) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
}
