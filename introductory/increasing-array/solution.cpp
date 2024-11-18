#include <iostream>

using namespace std;

int main(void) {
  long long len;
  cin >> len;
  long long last;
  cin >> last;
  long long next = 0;
  long long moves = 0;
  while (cin >> next) {
    if (next < last) {
      moves += last - next;
    } else {
      last = next;
    }
  }
  cout << moves;
}