---
data:
  _extendedDependsOn:
  - icon: ':question:'
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
    \ntemplate <typename T = long long> using Matrix = vector<vector<T>>;\n#line 7\
    \ \"src/graph/bellman_ford.hpp\"\n\ntemplate <typename T>\nvector<int> bellman_ford(const\
    \ Edges<T> &edges, int V, int s) {\n  const T INF = numeric_limits<T>::max();\n\
    \  vector<T> dist(V, INF);\n  dist[s] = 0;\n  for (int i = 0; i < V - 1; ++i)\
    \ {\n    for (auto &e : edges) {\n      if (dist[e.from] == INF) {\n        continue;\n\
    \      }\n      dist[e.to] = min(dist[e.to], dist[e.from] + e.cost);\n    }\n\
    \  }\n  for (auto &e : edges) {\n    if (dist[e.from] == INF) {\n      continue;\n\
    \    }\n    if (dist[e.to] > dist[e.from] + e.cost) {\n      return vector<T>();\n\
    \    }\n  }\n  return dist;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"./template.hpp\"\n\ntemplate <typename T>\nvector<int> bellman_ford(const\
    \ Edges<T> &edges, int V, int s) {\n  const T INF = numeric_limits<T>::max();\n\
    \  vector<T> dist(V, INF);\n  dist[s] = 0;\n  for (int i = 0; i < V - 1; ++i)\
    \ {\n    for (auto &e : edges) {\n      if (dist[e.from] == INF) {\n        continue;\n\
    \      }\n      dist[e.to] = min(dist[e.to], dist[e.from] + e.cost);\n    }\n\
    \  }\n  for (auto &e : edges) {\n    if (dist[e.from] == INF) {\n      continue;\n\
    \    }\n    if (dist[e.to] > dist[e.from] + e.cost) {\n      return vector<T>();\n\
    \    }\n  }\n  return dist;\n}\n"
  dependsOn:
  - src/graph/template.hpp
  isVerificationFile: false
  path: src/graph/bellman_ford.hpp
  requiredBy: []
  timestamp: '2022-12-18 23:17:52+09:00'
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
