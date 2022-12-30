#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_H"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/structure/lazy_segment_tree.hpp"

int main() {
  int n, q;
  cin >> n >> q;
  long long INF = (1L << 60);
  LazySegmentTree<long long, long long> st(
      n, [](long long a, long long b) { return min(a, b); },
      [](long long &a, long long b) { a += b; },
      [](long long &a, long long b) { a += b; }, INF, 0);
  for (int i = 0; i < n; ++i) {
    st.set(i, 0);
  }
  st.build();
  for (int i = 0; i < q; ++i) {
    int com, s, t;
    cin >> com >> s >> t;
    if (com == 0) {
      long long x;
      cin >> x;
      st.update(s, t + 1, x);
    } else {
      cout << st.query(s, t + 1) << endl;
    }
  }
  return 0;
}
