#include <iostream>

using namespace std;

int main(void) {
    long n;
    cin >> n;
    for (long i = 0; i < n; i++) {
        long x, y;
        cin >> x >> y;
        long diag = max(x, y) - 1;
        long diagonal = 1 + diag * (diag + 1);
        long fac = diag % 2 ? -1 : 1;
        cout << fac * (y - x) + diagonal << endl;
    }
}