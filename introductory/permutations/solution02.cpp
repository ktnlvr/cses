#include <iostream>

using namespace std;

int main(void) {
    long n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    } else if (n < 4) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    for (int i = 2; i <= n; i += 2)
        cout << i << ' ';
    for (int i = 1; i <= n; i += 2)
        cout << i << ' ';
    cout << endl;
}