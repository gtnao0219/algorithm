#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/1/ALDS1_1_C"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/math/is_prime.hpp"

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    if (is_prime(a)) {
      ++ans;
    }
  }
  cout << ans << endl;
  return 0;
}
