---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/graph/template.hpp
    title: src/graph/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_1_a.test.cpp
    title: test/aoj/grl_1_a.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/graph/dijkstra.hpp\"\n\n#include <bits/stdc++.h>\n#line\
    \ 5 \"src/graph/dijkstra.hpp\"\nusing namespace std;\n\n#line 2 \"src/graph/template.hpp\"\
    \n\n#line 4 \"src/graph/template.hpp\"\nusing namespace std;\n\ntemplate <typename\
    \ T = long long> struct Edge {\n  int from, to;\n  T cost;\n  Edge(int from, int\
    \ to, T cost = 1) : from(from), to(to), cost(cost) {}\n};\n\ntemplate <typename\
    \ T = long long> using Edges = vector<Edge<T>>;\ntemplate <typename T = long long>\
    \ using Graph = vector<Edges<T>>;\n\ntemplate <typename T = long long> using Matrix\
    \ = vector<vector<T>>;\n#line 8 \"src/graph/dijkstra.hpp\"\n\ntemplate <typename\
    \ T> struct Dijkstra {\nprivate:\n  int n;\n  int start;\n  Graph<T> graph;\n\
    \  vector<T> dist;\n  using P = pair<T, int>;\n  priority_queue<P, vector<P>,\
    \ greater<P>> que;\n  T MAX = numeric_limits<T>::max();\n\npublic:\n  Dijkstra(int\
    \ n, int start) : n(n), start(start), graph(n) {\n    dist.resize(n, MAX);\n \
    \   dist[start] = 0;\n    que.push(P(0, start));\n  }\n\n  void add_edge(int start,\
    \ int to, T cost) {\n    graph[start].emplace_back(start, to, cost);\n  }\n\n\
    \  void build() {\n    while (!que.empty()) {\n      P p = que.top();\n      que.pop();\n\
    \      int current = p.second;\n      if (dist[current] < p.first) {\n       \
    \ continue;\n      }\n      for (auto &e : graph[current]) {\n        if (dist[e.to]\
    \ > dist[current] + e.cost) {\n          dist[e.to] = dist[current] + e.cost;\n\
    \          que.push(P(dist[e.to], e.to));\n        }\n      }\n    }\n  }\n\n\
    \  T shortest_path_value(int t) { return dist[t]; }\n\n  bool is_unreachable(int\
    \ t) { return dist[t] == MAX; }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\n#include <limits>\nusing namespace\
    \ std;\n\n#include \"./template.hpp\"\n\ntemplate <typename T> struct Dijkstra\
    \ {\nprivate:\n  int n;\n  int start;\n  Graph<T> graph;\n  vector<T> dist;\n\
    \  using P = pair<T, int>;\n  priority_queue<P, vector<P>, greater<P>> que;\n\
    \  T MAX = numeric_limits<T>::max();\n\npublic:\n  Dijkstra(int n, int start)\
    \ : n(n), start(start), graph(n) {\n    dist.resize(n, MAX);\n    dist[start]\
    \ = 0;\n    que.push(P(0, start));\n  }\n\n  void add_edge(int start, int to,\
    \ T cost) {\n    graph[start].emplace_back(start, to, cost);\n  }\n\n  void build()\
    \ {\n    while (!que.empty()) {\n      P p = que.top();\n      que.pop();\n  \
    \    int current = p.second;\n      if (dist[current] < p.first) {\n        continue;\n\
    \      }\n      for (auto &e : graph[current]) {\n        if (dist[e.to] > dist[current]\
    \ + e.cost) {\n          dist[e.to] = dist[current] + e.cost;\n          que.push(P(dist[e.to],\
    \ e.to));\n        }\n      }\n    }\n  }\n\n  T shortest_path_value(int t) {\
    \ return dist[t]; }\n\n  bool is_unreachable(int t) { return dist[t] == MAX; }\n\
    };\n"
  dependsOn:
  - src/graph/template.hpp
  isVerificationFile: false
  path: src/graph/dijkstra.hpp
  requiredBy: []
  timestamp: '2022-12-30 13:43:35+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/grl_1_a.test.cpp
documentation_of: src/graph/dijkstra.hpp
layout: document
redirect_from:
- /library/src/graph/dijkstra.hpp
- /library/src/graph/dijkstra.hpp.html
title: src/graph/dijkstra.hpp
---
