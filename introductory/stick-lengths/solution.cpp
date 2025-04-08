#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int n = 0;
  cin >> n;

  vector<long long> ps(n);

  for (int i = 0; i < n; i++)
    cin >> ps[i];

  sort(ps.begin(), ps.end());

  long long m = ps[n / 2];

  long long cost = 0;
  for (auto p : ps)
    cost += abs(p - m);

  cout << cost << endl;

  return 0;
}
