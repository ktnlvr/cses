#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  long n;
  cin >> n;
  auto k = (n + 1) * n / 2;
  if (k % 2) {
    cout << "NO" << endl;
    return 0;
  }
  cout << "YES" << endl;
  k /= 2;

  auto N = n;
  std::vector<long> out;
  while (k > n) {
    out.push_back(n);
    k -= n;
    n--;
  }
  out.push_back(k);
  cout << out.size() << endl;
  for (auto i : out)
    cout << i << ' ';
  cout << endl;
  cout << N - out.size() << endl;

  for (long i = 1; i < k; i++)
    cout << i << ' ';
  for (long i = k + 1; i <= n; i++)
    cout << i << ' ';
  cout << endl;
}
