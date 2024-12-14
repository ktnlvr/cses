#include <array>
#include <cstdlib>
#include <functional>
#include <iostream>

using namespace std;

int main(void) {
  int N = 0;
  cin >> N;
  int* counters = (int*)malloc(sizeof(int) * N);
  bool* v = (bool*)malloc(sizeof(bool) * N);

  for (int i = 0; i < N; i++) {
    v[i] = 0;
    counters[i] = 1 << i;
  }

  for (int i = 0; i < 1 << N; i++) {
    for (int j = 0; j < N; j++) {
      cout << v[j];
      if (--counters[j] <= 0) {
        v[j] = !v[j];
        counters[j] = 1 << (j + 1);
      }
    }
    cout << endl;
  }

  return 0;
}
