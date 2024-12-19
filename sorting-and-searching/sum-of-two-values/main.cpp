#include <iostream>
#include <map>

using namespace std;

int main(void) {
  int n, x;
  cin >> n >> x;

  map<int, int> m;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    auto it = m.find(x - a);
    if (it != m.end()) {
      cout << i + 1 << ' ' << it->second + 1 << endl;
      return 0;
    }
    m[a] = i;
  }

  cout << "IMPOSSIBLE" << endl;
}
