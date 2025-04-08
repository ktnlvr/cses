#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int n;
  cin >> n;

  std::vector<long long> xs(n);
  for (int i = 0; i < n; i++)
    cin >> xs[i];

  sort(xs.begin(), xs.end());

  long long max_sum = 0;
  for (int i = 0; i < n; i++) {
    if (xs[i] > max_sum + 1) {
      cout << max_sum + 1 << endl;
      return 0;
    }
    max_sum += xs[i];
  }

  cout << max_sum + 1 << endl;
}
