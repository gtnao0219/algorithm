#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_D"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/math/euler_phi.hpp"

int main() {
  long long n;
  cin >> n;
  cout << euler_phi(n) << endl;
  return 0;
}
