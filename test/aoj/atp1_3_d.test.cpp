#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/3/ITP1_3_D"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/math/divisor.hpp"

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int ans = 0;
  for (auto d : divisor(c)) {
    if (a <= d && d <= b) {
      ++ans;
    }
  }
  cout << ans << endl;
  return 0;
}
