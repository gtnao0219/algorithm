---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/graph/kruskul.hpp
    title: src/graph/kruskul.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/dsl_1_a.test.cpp
    title: test/aoj/dsl_1_a.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_2_a.test.cpp
    title: test/aoj/grl_2_a.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/structure/union_find_tree.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\nstruct UnionFindTree {\nprivate:\n  int n;\n  vector<int>\
    \ parent, rank;\n\npublic:\n  UnionFindTree(int n) : n(n), parent(n, -1), rank(n,\
    \ 0) {}\n\n  int root(int x) {\n    if (parent[x] == -1) {\n      return x;\n\
    \    }\n    return parent[x] = root(parent[x]);\n  }\n\n  void unite(int x, int\
    \ y) {\n    x = root(x);\n    y = root(y);\n    if (x == y) {\n      return;\n\
    \    }\n    if (rank[x] < rank[y]) {\n      swap(x, y);\n    }\n    if (rank[x]\
    \ == rank[y]) {\n      ++rank[x];\n    }\n    parent[y] = x;\n  }\n\n  bool is_same(int\
    \ x, int y) { return root(x) == root(y); }\n\n  vector<vector<int>> groups() {\n\
    \    vector<vector<int>> ret(n);\n    for (int i = 0; i < n; i++) {\n      ret[root(i)].emplace_back(i);\n\
    \    }\n    ret.erase(remove_if(begin(ret), end(ret),\n                      \
    \  [&](const vector<int> &v) { return v.empty(); }),\n              end(ret));\n\
    \    return ret;\n  }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\nstruct\
    \ UnionFindTree {\nprivate:\n  int n;\n  vector<int> parent, rank;\n\npublic:\n\
    \  UnionFindTree(int n) : n(n), parent(n, -1), rank(n, 0) {}\n\n  int root(int\
    \ x) {\n    if (parent[x] == -1) {\n      return x;\n    }\n    return parent[x]\
    \ = root(parent[x]);\n  }\n\n  void unite(int x, int y) {\n    x = root(x);\n\
    \    y = root(y);\n    if (x == y) {\n      return;\n    }\n    if (rank[x] <\
    \ rank[y]) {\n      swap(x, y);\n    }\n    if (rank[x] == rank[y]) {\n      ++rank[x];\n\
    \    }\n    parent[y] = x;\n  }\n\n  bool is_same(int x, int y) { return root(x)\
    \ == root(y); }\n\n  vector<vector<int>> groups() {\n    vector<vector<int>> ret(n);\n\
    \    for (int i = 0; i < n; i++) {\n      ret[root(i)].emplace_back(i);\n    }\n\
    \    ret.erase(remove_if(begin(ret), end(ret),\n                        [&](const\
    \ vector<int> &v) { return v.empty(); }),\n              end(ret));\n    return\
    \ ret;\n  }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/structure/union_find_tree.hpp
  requiredBy:
  - src/graph/kruskul.hpp
  timestamp: '2023-01-08 21:46:20+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/dsl_1_a.test.cpp
  - test/aoj/grl_2_a.test.cpp
documentation_of: src/structure/union_find_tree.hpp
layout: document
redirect_from:
- /library/src/structure/union_find_tree.hpp
- /library/src/structure/union_find_tree.hpp.html
title: src/structure/union_find_tree.hpp
---
