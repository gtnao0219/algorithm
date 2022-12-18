---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/structure/weighted_union_find_tree.hpp
    title: src/structure/weighted_union_find_tree.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B
  bundledCode: "#line 1 \"test/aoj/dsl_1_b.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/structure/weighted_union_find_tree.hpp\"\
    \n\n#line 4 \"src/structure/weighted_union_find_tree.hpp\"\nusing namespace std;\n\
    \ntemplate <typename T> struct WeightedUnionFindTree {\nprivate:\n  int n;\n \
    \ vector<int> parent, rank;\n  vector<T> weight;\n\npublic:\n  WeightedUnionFindTree(int\
    \ n)\n      : n(n), parent(n, -1), rank(n, 0), weight(n, 0) {}\n\n  int root(int\
    \ x) {\n    if (parent[x] == -1) {\n      return x;\n    }\n    int p = root(parent[x]);\n\
    \    weight[x] += weight[parent[x]];\n    return parent[x] = p;\n  }\n\n  void\
    \ unite(int x, int y, T w) {\n    w += calc_weight(x);\n    w -= calc_weight(y);\n\
    \    x = root(x);\n    y = root(y);\n    if (x == y) {\n      return;\n    }\n\
    \    if (rank[x] < rank[y]) {\n      swap(x, y);\n      w = -w;\n    }\n    if\
    \ (rank[x] == rank[y]) {\n      ++rank[x];\n    }\n    parent[y] = x;\n    weight[y]\
    \ = w;\n  }\n\n  bool is_same(int x, int y) { return root(x) == root(y); }\n\n\
    \  T calc_weight(int x) {\n    root(x);\n    return weight[x];\n  }\n\n  T diff(int\
    \ x, int y) { return calc_weight(y) - calc_weight(x); }\n};\n#line 8 \"test/aoj/dsl_1_b.test.cpp\"\
    \n\nint main() {\n  int n, q;\n  cin >> n >> q;\n  WeightedUnionFindTree<long\
    \ long> uft(n);\n  for (int i = 0; i < q; ++i) {\n    int com;\n    cin >> com;\n\
    \    if (com == 0) {\n      int x, y, z;\n      cin >> x >> y >> z;\n      uft.unite(x,\
    \ y, z);\n    } else {\n      int x, y;\n      cin >> x >> y;\n      if (uft.is_same(x,\
    \ y)) {\n        cout << uft.diff(x, y) << endl;\n      } else {\n        cout\
    \ << \"?\" << endl;\n      }\n    }\n  }\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/structure/weighted_union_find_tree.hpp\"\
    \n\nint main() {\n  int n, q;\n  cin >> n >> q;\n  WeightedUnionFindTree<long\
    \ long> uft(n);\n  for (int i = 0; i < q; ++i) {\n    int com;\n    cin >> com;\n\
    \    if (com == 0) {\n      int x, y, z;\n      cin >> x >> y >> z;\n      uft.unite(x,\
    \ y, z);\n    } else {\n      int x, y;\n      cin >> x >> y;\n      if (uft.is_same(x,\
    \ y)) {\n        cout << uft.diff(x, y) << endl;\n      } else {\n        cout\
    \ << \"?\" << endl;\n      }\n    }\n  }\n  return 0;\n}\n"
  dependsOn:
  - src/structure/weighted_union_find_tree.hpp
  isVerificationFile: true
  path: test/aoj/dsl_1_b.test.cpp
  requiredBy: []
  timestamp: '2022-12-18 22:46:34+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/dsl_1_b.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/dsl_1_b.test.cpp
- /verify/test/aoj/dsl_1_b.test.cpp.html
title: test/aoj/dsl_1_b.test.cpp
---
