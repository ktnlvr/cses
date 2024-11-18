#include <iostream>

using namespace std;

int main(void) {
  long long n;
  cin >> n;
  long long total = n * (n + 1) / 2;
  while (cin >> n)
    total -= n;
  cout << total;
}
