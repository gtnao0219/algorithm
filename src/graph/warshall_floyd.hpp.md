---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/graph/template.hpp
    title: src/graph/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_1_c.test.cpp
    title: test/aoj/grl_1_c.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/graph/warshall_floyd.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#line 2 \"src/graph/template.hpp\"\n\n#line 4 \"src/graph/template.hpp\"\
    \nusing namespace std;\n\ntemplate <typename T = long long> struct Edge {\n  int\
    \ from, to;\n  T cost;\n  Edge(int from, int to, T cost = 1) : from(from), to(to),\
    \ cost(cost) {}\n};\n\ntemplate <typename T = long long> using Edges = vector<Edge<T>>;\n\
    template <typename T = long long> using Graph = vector<Edges<T>>;\n\ntemplate\
    \ <typename T = long long> using Matrix = vector<vector<T>>;\n#line 7 \"src/graph/warshall_floyd.hpp\"\
    \n\ntemplate <typename T> struct WarshallFloyd {\nprivate:\n  const T INF = numeric_limits<T>::max();\n\
    \  int n;\n  Matrix<T> g;\n\npublic:\n  WarshallFloyd(int n) : n(n), g(n, vector<T>(n,\
    \ INF)) {\n    for (int i = 0; i < n; ++i) {\n      g[i][i] = 0;\n    }\n  }\n\
    \n  void add_edge(int u, int v, T c) { g[u][v] = c; }\n\n  void build() {\n  \
    \  for (int k = 0; k < n; ++k) {\n      for (int i = 0; i < n; ++i) {\n      \
    \  for (int j = 0; j < n; ++j) {\n          if (g[i][k] == INF || g[k][j] == INF)\
    \ {\n            continue;\n          }\n          g[i][j] = min(g[i][j], g[i][k]\
    \ + g[k][j]);\n        }\n      }\n    }\n  }\n\n  bool has_negative_cycle() {\n\
    \    for (int i = 0; i < n; ++i) {\n      if (g[i][i] < 0) {\n        return true;\n\
    \      }\n    }\n    return false;\n  }\n\n  T shortest_path_value(int s, int\
    \ t) { return g[s][t]; }\n\n  bool is_unreachable(int s, int t) { return g[s][t]\
    \ == INF; }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"./template.hpp\"\n\ntemplate <typename T> struct WarshallFloyd {\nprivate:\n\
    \  const T INF = numeric_limits<T>::max();\n  int n;\n  Matrix<T> g;\n\npublic:\n\
    \  WarshallFloyd(int n) : n(n), g(n, vector<T>(n, INF)) {\n    for (int i = 0;\
    \ i < n; ++i) {\n      g[i][i] = 0;\n    }\n  }\n\n  void add_edge(int u, int\
    \ v, T c) { g[u][v] = c; }\n\n  void build() {\n    for (int k = 0; k < n; ++k)\
    \ {\n      for (int i = 0; i < n; ++i) {\n        for (int j = 0; j < n; ++j)\
    \ {\n          if (g[i][k] == INF || g[k][j] == INF) {\n            continue;\n\
    \          }\n          g[i][j] = min(g[i][j], g[i][k] + g[k][j]);\n        }\n\
    \      }\n    }\n  }\n\n  bool has_negative_cycle() {\n    for (int i = 0; i <\
    \ n; ++i) {\n      if (g[i][i] < 0) {\n        return true;\n      }\n    }\n\
    \    return false;\n  }\n\n  T shortest_path_value(int s, int t) { return g[s][t];\
    \ }\n\n  bool is_unreachable(int s, int t) { return g[s][t] == INF; }\n};\n"
  dependsOn:
  - src/graph/template.hpp
  isVerificationFile: false
  path: src/graph/warshall_floyd.hpp
  requiredBy: []
  timestamp: '2022-12-19 02:10:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/grl_1_c.test.cpp
documentation_of: src/graph/warshall_floyd.hpp
layout: document
redirect_from:
- /library/src/graph/warshall_floyd.hpp
- /library/src/graph/warshall_floyd.hpp.html
title: src/graph/warshall_floyd.hpp
---
