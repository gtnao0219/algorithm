#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/math/mod_pow.hpp"

int main() {
  long long m, n;
  cin >> m >> n;
  cout << mod_pow(m, n, 1000000007LL) << endl;
  return 0;
}
