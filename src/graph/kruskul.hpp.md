---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/graph/template.hpp
    title: src/graph/template.hpp
  - icon: ':heavy_check_mark:'
    path: src/structure/union_find_tree.hpp
    title: src/structure/union_find_tree.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_2_a.test.cpp
    title: test/aoj/grl_2_a.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/graph/kruskul.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\n#line 2 \"src/structure/union_find_tree.hpp\"\n\n#line 4 \"\
    src/structure/union_find_tree.hpp\"\nusing namespace std;\n\nstruct UnionFindTree\
    \ {\nprivate:\n  int n;\n  vector<int> parent, rank;\n\npublic:\n  UnionFindTree(int\
    \ n) : n(n), parent(n, -1), rank(n, 0) {}\n\n  int root(int x) {\n    if (parent[x]\
    \ == -1) {\n      return x;\n    }\n    return parent[x] = root(parent[x]);\n\
    \  }\n\n  void unite(int x, int y) {\n    x = root(x);\n    y = root(y);\n   \
    \ if (x == y) {\n      return;\n    }\n    if (rank[x] < rank[y]) {\n      swap(x,\
    \ y);\n    }\n    if (rank[x] == rank[y]) {\n      ++rank[x];\n    }\n    parent[y]\
    \ = x;\n  }\n\n  bool is_same(int x, int y) { return root(x) == root(y); }\n};\n\
    #line 2 \"src/graph/template.hpp\"\n\n#line 4 \"src/graph/template.hpp\"\nusing\
    \ namespace std;\n\ntemplate <typename T = long long> struct Edge {\n  int from,\
    \ to;\n  T cost;\n  Edge(int from, int to, T cost = 1) : from(from), to(to), cost(cost)\
    \ {}\n};\n\ntemplate <typename T = long long> using Edges = vector<Edge<T>>;\n\
    template <typename T = long long> using Graph = vector<Edges<T>>;\n\ntemplate\
    \ <typename T = long long> using Matrix = vector<vector<T>>;\n#line 8 \"src/graph/kruskul.hpp\"\
    \n\ntemplate <typename T> struct Kruskal {\nprivate:\n  int v;\n  Edges<T> es;\n\
    \  UnionFindTree uft;\n  long long cost_sum = 0;\n\npublic:\n  Kruskal(int v)\
    \ : v(v), uft(v) {}\n\n  void add_edge(int from, int to, T cost) { es.emplace_back(from,\
    \ to, cost); }\n\n  void build() {\n    sort(es.begin(), es.end(), [](const Edge<T>\
    \ &e1, const Edge<T> &e2) {\n      return e1.cost < e2.cost;\n    });\n    for\
    \ (Edge<T> &e : es) {\n      if (!uft.is_same(e.from, e.to)) {\n        uft.unite(e.from,\
    \ e.to);\n        cost_sum += e.cost;\n      }\n    }\n  }\n\n  T get_cost_sum()\
    \ { return cost_sum; }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"../structure/union_find_tree.hpp\"\n#include \"./template.hpp\"\n\ntemplate\
    \ <typename T> struct Kruskal {\nprivate:\n  int v;\n  Edges<T> es;\n  UnionFindTree\
    \ uft;\n  long long cost_sum = 0;\n\npublic:\n  Kruskal(int v) : v(v), uft(v)\
    \ {}\n\n  void add_edge(int from, int to, T cost) { es.emplace_back(from, to,\
    \ cost); }\n\n  void build() {\n    sort(es.begin(), es.end(), [](const Edge<T>\
    \ &e1, const Edge<T> &e2) {\n      return e1.cost < e2.cost;\n    });\n    for\
    \ (Edge<T> &e : es) {\n      if (!uft.is_same(e.from, e.to)) {\n        uft.unite(e.from,\
    \ e.to);\n        cost_sum += e.cost;\n      }\n    }\n  }\n\n  T get_cost_sum()\
    \ { return cost_sum; }\n};\n"
  dependsOn:
  - src/structure/union_find_tree.hpp
  - src/graph/template.hpp
  isVerificationFile: false
  path: src/graph/kruskul.hpp
  requiredBy: []
  timestamp: '2022-12-19 02:10:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/grl_2_a.test.cpp
documentation_of: src/graph/kruskul.hpp
layout: document
redirect_from:
- /library/src/graph/kruskul.hpp
- /library/src/graph/kruskul.hpp.html
title: src/graph/kruskul.hpp
---
