#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  long n, m, k;
  cin >> n >> m >> k;

  vector<unsigned int> applicants, apartments;

  unsigned int maxx = 0, minn = -1;
  for (long i = 0; i < n; i++) {
    unsigned int x;
    cin >> x;
    applicants.push_back(x);
    maxx = max(x, maxx);
    minn = min(x, minn);
  }

  for (long i = 0; i < m; i++) {
    int y;
    cin >> y;
    apartments.push_back(y);
  }

  sort(applicants.begin(), applicants.end());
  sort(apartments.begin(), apartments.end());

  int found = 0;
  long j = 0;
  for (long i = 0; i < applicants.size(); i++) {
    if (i > applicants.size() || j > apartments.size())
      break;
    
    while (j < apartments.size()) {
      if (apartments[j] > applicants[i] + k)
        break;
      if (abs((int)apartments[j] - (int)applicants[i]) <= k) {
        found++;
        j++;
        break;
      }

      j++;
    }    
  }

  cout << found << endl;
}