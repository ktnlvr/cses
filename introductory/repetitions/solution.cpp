#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string sequence;
    cin >> sequence;
    long max_so_far = 0;
    char currently_tracing = '\0';
    long counter = 0;
    for (size_t i = 0; i < sequence.size(); i++) {
        if (sequence[i] == currently_tracing) {
            counter++;
        } else {
            currently_tracing = sequence[i];
            if (counter > max_so_far)
                max_so_far = counter;
            counter = 1;
        }
    }
    if (counter > max_so_far)
        max_so_far = counter;
    cout << max_so_far;
}
