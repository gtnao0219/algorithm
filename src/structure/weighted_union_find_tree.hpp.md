---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/dsl_1_b.test.cpp
    title: test/aoj/dsl_1_b.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/structure/weighted_union_find_tree.hpp\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\ntemplate <typename T> struct WeightedUnionFindTree\
    \ {\nprivate:\n  int n;\n  vector<int> parent, rank;\n  vector<T> weight;\n\n\
    public:\n  WeightedUnionFindTree(int n)\n      : n(n), parent(n, -1), rank(n,\
    \ 0), weight(n, 0) {}\n\n  int root(int x) {\n    if (parent[x] == -1) {\n   \
    \   return x;\n    }\n    int p = root(parent[x]);\n    weight[x] += weight[parent[x]];\n\
    \    return parent[x] = p;\n  }\n\n  void unite(int x, int y, T w) {\n    w +=\
    \ calc_weight(x);\n    w -= calc_weight(y);\n    x = root(x);\n    y = root(y);\n\
    \    if (x == y) {\n      return;\n    }\n    if (rank[x] < rank[y]) {\n     \
    \ swap(x, y);\n      w = -w;\n    }\n    if (rank[x] == rank[y]) {\n      ++rank[x];\n\
    \    }\n    parent[y] = x;\n    weight[y] = w;\n  }\n\n  bool is_same(int x, int\
    \ y) { return root(x) == root(y); }\n\n  T calc_weight(int x) {\n    root(x);\n\
    \    return weight[x];\n  }\n\n  T diff(int x, int y) { return calc_weight(y)\
    \ - calc_weight(x); }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T> struct WeightedUnionFindTree {\nprivate:\n  int n;\n  vector<int>\
    \ parent, rank;\n  vector<T> weight;\n\npublic:\n  WeightedUnionFindTree(int n)\n\
    \      : n(n), parent(n, -1), rank(n, 0), weight(n, 0) {}\n\n  int root(int x)\
    \ {\n    if (parent[x] == -1) {\n      return x;\n    }\n    int p = root(parent[x]);\n\
    \    weight[x] += weight[parent[x]];\n    return parent[x] = p;\n  }\n\n  void\
    \ unite(int x, int y, T w) {\n    w += calc_weight(x);\n    w -= calc_weight(y);\n\
    \    x = root(x);\n    y = root(y);\n    if (x == y) {\n      return;\n    }\n\
    \    if (rank[x] < rank[y]) {\n      swap(x, y);\n      w = -w;\n    }\n    if\
    \ (rank[x] == rank[y]) {\n      ++rank[x];\n    }\n    parent[y] = x;\n    weight[y]\
    \ = w;\n  }\n\n  bool is_same(int x, int y) { return root(x) == root(y); }\n\n\
    \  T calc_weight(int x) {\n    root(x);\n    return weight[x];\n  }\n\n  T diff(int\
    \ x, int y) { return calc_weight(y) - calc_weight(x); }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/structure/weighted_union_find_tree.hpp
  requiredBy: []
  timestamp: '2022-12-18 22:46:34+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/dsl_1_b.test.cpp
documentation_of: src/structure/weighted_union_find_tree.hpp
layout: document
redirect_from:
- /library/src/structure/weighted_union_find_tree.hpp
- /library/src/structure/weighted_union_find_tree.hpp.html
title: src/structure/weighted_union_find_tree.hpp
---
