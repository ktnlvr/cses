#include <iostream>
#include <vector>

using namespace std;

void hanoi(int from, int to, int support, int amount) {
  if (amount < 0)
    return;

  hanoi(from, support, to, amount - 1);
  cout << from << ' ' << to << endl;
  hanoi(support, to, from, amount - 1);
}

int main(void) {
  int n;
  cin >> n;
  cout << (1 << n) - 1 << endl;
  hanoi(1, 3, 2, n - 1);
}
