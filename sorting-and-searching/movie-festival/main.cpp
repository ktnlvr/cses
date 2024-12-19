#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  size_t n;
  cin >> n;
  vector<pair<int, int>> movies;
  for (size_t i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    movies.push_back(make_pair(a, b));
  }

  auto cmp = [](auto a, auto b) { return b.second > a.second; };

  sort(movies.begin(), movies.end(), cmp);

  size_t idx = 0;
  size_t c = 0;

  while (idx < movies.size()) {
    auto [_, end] = movies[idx];
    c++;
    while (idx < movies.size() && movies[idx].first < end)
      idx++;
  }

  cout << c << endl;
}
