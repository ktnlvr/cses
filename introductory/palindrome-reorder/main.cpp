#include <iostream>
#include <map>

using namespace std;

int main(void) {
  string s;
  cin >> s;
  map<char, int> m;
  for (const auto ch : s)
    m[ch]++;

  char odd = '\0';
  for (auto [ch, n] : m) {
    if (n % 2)
      if (odd && odd != ch) {
        cout << "NO SOLUTION";
        return 0;
      } else {
        odd = ch;
      }
  }

  for (auto it = m.rbegin(); it != m.rend(); it++)
    if (it->first == odd)
      continue;
    else
      for (int i = 0; i < it->second / 2; i++)
        cout << it->first;

  if (odd)
    for (int i = 0; i < m[odd]; i++)
      cout << odd;

  for (auto it = m.begin(); it != m.end(); it++)
    if (it->first == odd)
      continue;
    else
      for (int i = 0; i < it->second / 2 + it->second % 2; i++)
        cout << it->first;

  cout << endl;
}
