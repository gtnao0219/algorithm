#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_A"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/structure/segment_tree.hpp"

int main() {
  int n, q;
  cin >> n >> q;
  long long INF = (1L << 31) - 1;
  SegmentTree<long long> st(
      n, [](long long a, long long b) { return min(a, b); }, INF);
  for (int i = 0; i < q; ++i) {
    int com, x, y;
    cin >> com >> x >> y;
    if (com == 0) {
      st.update(x, y);
    } else {
      cout << st.query(x, y + 1) << endl;
    }
  }
  return 0;
}
