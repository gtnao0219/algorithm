#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0516"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/dp/cumulative_sum.hpp"

int main() {
  while (true) {
    int n, k;
    cin >> n >> k;
    if (n == 0 && k == 0) {
      break;
    }
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    CumulativeSum<long long> cs(a);
    long long ans = numeric_limits<long long>::min();
    for (int i = 0; i + k <= n; ++i) {
      ans = max(ans, cs.sum(i, i + k));
    }
    cout << ans << endl;
  }
}
