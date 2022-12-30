#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2286"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/math/euler_phi_table.hpp"

int main() {
  vector<int> table = euler_phi_table(1000000);
  vector<long long> sum(1000001, 0);
  for (int i = 1; i <= 1000000; i++) {
    sum[i] = sum[i - 1] + table[i];
  }

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    cout << sum[n] + 1 << endl;
  }
  return 0;
}
