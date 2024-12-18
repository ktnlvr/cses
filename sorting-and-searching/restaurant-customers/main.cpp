#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

using u32 = unsigned int;

int main(void) {
  u32 n;
  cin >> n;

  vector<u32> as, bs;
  for (u32 i = 0; i < n; i++) {
    u32 a, b;
    cin >> a >> b;
    as.push_back(a);
    bs.push_back(b);
  }

  sort(as.begin(), as.end());
  sort(bs.begin(), bs.end());

  u32 ai = 0, bi = 0;

  int amount = 0;
  int amount_max = 0;
  while (ai < as.size()) {
    if (as[ai] < bs[bi]) {
      amount++;
      if (amount > amount_max)
        amount_max = amount;
      ai++;
    } else {
      amount--;
      bi++;
    }
  }

  cout << amount_max << endl;
}