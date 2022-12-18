#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/math/lcm.hpp"

int main() {
  int n;
  cin >> n;
  long long ans = 1;
  for (int i = 0; i < n; ++i) {
    long long a;
    cin >> a;
    ans = lcm(ans, a);
  }
  cout << ans << endl;
  return 0;
}
