#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/structure/weighted_union_find_tree.hpp"

int main() {
  int n, q;
  cin >> n >> q;
  WeightedUnionFindTree<long long> uft(n);
  for (int i = 0; i < q; ++i) {
    int com;
    cin >> com;
    if (com == 0) {
      int x, y, z;
      cin >> x >> y >> z;
      uft.unite(x, y, z);
    } else {
      int x, y;
      cin >> x >> y;
      if (uft.is_same(x, y)) {
        cout << uft.diff(x, y) << endl;
      } else {
        cout << "?" << endl;
      }
    }
  }
  return 0;
}
