#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<char, int> m;
unsigned int c;
unsigned int q;

std::string chars = "";
std::vector<std::string> ans;

void solve(int i = 0) {
  if (i == q) {
    ans.push_back(chars);
    return;
  }

  for (auto& [ch, n] : m) {
    if (n == 0)
      continue;
    n--;
    chars[i] = ch;
    solve(i + 1);
    n++;
    chars[i] = '\0';
    c++;
  }
}

int main(void) {
  char ch;
  while (cin >> ch)
    m[ch]++;

  for (auto [_, n] : m)
    q += n;

  for (int i = 0; i < q; i++)
    chars.push_back('\0');

  solve();

  cout << ans.size() << '\n';
  for (const auto& a : ans)
    cout << a << '\n';

  return 0;
}
