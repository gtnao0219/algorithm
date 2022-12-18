#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/math/prime_factor.hpp"

int main() {
  int n;
  cin >> n;
  auto res = prime_factor(n);
  cout << n << ":";
  for (auto p : res) {
    for (int i = 0; i < p.second; ++i) {
      cout << " " << p.first;
    }
  }
  cout << endl;
  return 0;
}
