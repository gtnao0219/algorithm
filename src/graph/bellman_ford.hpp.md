---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/graph/template.hpp
    title: src/graph/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_1_b.test.cpp
    title: test/aoj/grl_1_b.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/graph/bellman_ford.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#line 2 \"src/graph/template.hpp\"\n\n#line 4 \"src/graph/template.hpp\"\
    \nusing namespace std;\n\ntemplate <typename T = long long> struct Edge {\n  int\
    \ from, to;\n  T cost;\n  Edge(int from, int to, T cost = 1) : from(from), to(to),\
    \ cost(cost) {}\n};\n\ntemplate <typename T = long long> using Edges = vector<Edge<T>>;\n\
    template <typename T = long long> using Graph = vector<Edges<T>>;\n\ntemplate\
    \ <typename T = long long> using Matrix = vector<vector<T>>;\n#line 7 \"src/graph/bellman_ford.hpp\"\
    \n\ntemplate <typename T> struct BellmanFord {\nprivate:\n  int n;\n  int start;\n\
    \  Edges<T> edges;\n  vector<T> dist;\n  bool _has_negative_cycle = false;\n \
    \ T MAX = numeric_limits<T>::max();\n\npublic:\n  BellmanFord(int n, int start)\
    \ : n(n), start(start) {\n    dist.resize(n, MAX);\n    dist[start] = 0;\n  }\n\
    \n  void add_edge(int start, int to, long long cost) {\n    edges.emplace_back(start,\
    \ to, cost);\n  }\n\n  void build() {\n    for (int i = 0; i < n - 1; ++i) {\n\
    \      for (auto &edge : edges) {\n        if (dist[edge.from] == MAX) {\n   \
    \       continue;\n        }\n        dist[edge.to] = min(dist[edge.to], dist[edge.from]\
    \ + edge.cost);\n      }\n    }\n    for (auto &edge : edges) {\n      if (dist[edge.from]\
    \ == MAX) {\n        continue;\n      }\n      if (dist[edge.to] > dist[edge.from]\
    \ + edge.cost) {\n        _has_negative_cycle = true;\n        break;\n      }\n\
    \    }\n  }\n\n  T shortest_path_value(int t) { return dist[t]; }\n\n  bool is_unreachable(int\
    \ t) { return dist[t] == MAX; }\n\n  bool has_negative_cycle() { return _has_negative_cycle;\
    \ }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"./template.hpp\"\n\ntemplate <typename T> struct BellmanFord {\nprivate:\n\
    \  int n;\n  int start;\n  Edges<T> edges;\n  vector<T> dist;\n  bool _has_negative_cycle\
    \ = false;\n  T MAX = numeric_limits<T>::max();\n\npublic:\n  BellmanFord(int\
    \ n, int start) : n(n), start(start) {\n    dist.resize(n, MAX);\n    dist[start]\
    \ = 0;\n  }\n\n  void add_edge(int start, int to, long long cost) {\n    edges.emplace_back(start,\
    \ to, cost);\n  }\n\n  void build() {\n    for (int i = 0; i < n - 1; ++i) {\n\
    \      for (auto &edge : edges) {\n        if (dist[edge.from] == MAX) {\n   \
    \       continue;\n        }\n        dist[edge.to] = min(dist[edge.to], dist[edge.from]\
    \ + edge.cost);\n      }\n    }\n    for (auto &edge : edges) {\n      if (dist[edge.from]\
    \ == MAX) {\n        continue;\n      }\n      if (dist[edge.to] > dist[edge.from]\
    \ + edge.cost) {\n        _has_negative_cycle = true;\n        break;\n      }\n\
    \    }\n  }\n\n  T shortest_path_value(int t) { return dist[t]; }\n\n  bool is_unreachable(int\
    \ t) { return dist[t] == MAX; }\n\n  bool has_negative_cycle() { return _has_negative_cycle;\
    \ }\n};\n"
  dependsOn:
  - src/graph/template.hpp
  isVerificationFile: false
  path: src/graph/bellman_ford.hpp
  requiredBy: []
  timestamp: '2022-12-30 13:43:35+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/grl_1_b.test.cpp
documentation_of: src/graph/bellman_ford.hpp
layout: document
redirect_from:
- /library/src/graph/bellman_ford.hpp
- /library/src/graph/bellman_ford.hpp.html
title: src/graph/bellman_ford.hpp
---
