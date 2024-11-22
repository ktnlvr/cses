#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
  long n;
  cin >> n;
  long o = 0;
  for (long m = 5; n >= m; m *= 5)
    o += n / m;
  cout << o << endl;
}
