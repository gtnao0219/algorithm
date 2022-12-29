#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/5/DSL_5_A"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/dp/imos.hpp"

int main() {
  int n, t;
  cin >> n >> t;
  vector<ImosInterval<long long>> intervals(n);
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    intervals[i] = {l, r, 1};
  }
  Imos<long long> imos(t, intervals);
  long long ans = 0;
  for (int i = 0; i < t; i++) {
    ans = max(ans, imos.get(i));
  }
  cout << ans << endl;
  return 0;
}
