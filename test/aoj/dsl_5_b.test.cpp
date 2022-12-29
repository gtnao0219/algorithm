#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/5/DSL_5_B"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/dp/imos_2d.hpp"

int main() {
  int n;
  cin >> n;
  vector<Imos2dInterval<long long>> intervals(n);
  for (int i = 0; i < n; i++) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    intervals[i] = {{x1, y1}, {x2, y2}, 1};
  }
  Imos2d<long long> imos(1001, 1001, intervals);
  long long ans = 0;
  for (int x = 0; x < 1001; x++) {
    for (int y = 0; y < 1001; y++) {
      ans = max(ans, imos.get({x, y}));
    }
  }
  cout << ans << endl;
  return 0;
}
