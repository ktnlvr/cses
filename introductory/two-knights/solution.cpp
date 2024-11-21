#include <iostream>

using namespace std;

int main(void) {
  long n;
  cin >> n;

  if (n >= 1)
    cout << 0 << endl;
  if (n >= 2)
    cout << 6 << endl;
  if (n >= 3)
    cout << 28 << endl;
  if (n >= 4)
    cout << 96 << endl;

  for (int k = 5; k <= n; k++) {
    long A = k * k;
    long i = 0;
    i += 4 * (A - 3);
    i += 8 * (A - 4);
    i += 4 * (k - 4) * (A - 5);
    i += 4 * (k - 4) * (A - 7);
    i += (k - 4) * (k - 4) * (A - 9);
    i += 4 * (A - 5);

    cout << i / 2 << endl;
  }
}
