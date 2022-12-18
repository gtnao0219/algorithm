#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_E"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/math/ext_gcd.hpp"

int main() {
  int a, b;
  cin >> a >> b;
  int x, y;
  ext_gcd(a, b, x, y);
  cout << x << " " << y << endl;
  return 0;
}
