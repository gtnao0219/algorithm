#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_A"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/structure/union_find_tree.hpp"

int main() {
  int n, q;
  cin >> n >> q;
  UnionFindTree uft(n);
  for (int i = 0; i < q; ++i) {
    int com, x, y;
    cin >> com >> x >> y;
    if (com == 0) {
      uft.unite(x, y);
    } else {
      cout << (uft.is_same(x, y) ? 1 : 0) << endl;
    }
  }
  return 0;
}
