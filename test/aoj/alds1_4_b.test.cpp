#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/1/ALDS1_4_B"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/search/binary_search.hpp"

int main() {
  int n;
  cin >> n;
  vector<int> S(n);
  for (int i = 0; i < n; ++i) {
    cin >> S[i];
  }
  int q;
  cin >> q;
  vector<int> T(q);
  for (int i = 0; i < q; ++i) {
    cin >> T[i];
  }

  int ans = 0;
  for (int i = 0; i < q; ++i) {
    int lower = bin_search<int>(-1, n, [&](int idx) { return S[idx] >= T[i]; });
    int upper = bin_search<int>(n, -1, [&](int idx) { return S[idx] <= T[i]; });
    if (lower <= upper) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
