---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/graph/template.hpp
    title: src/graph/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_3_c.test.cpp
    title: test/aoj/grl_3_c.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/graph/strongly_connected_components.hpp\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/graph/template.hpp\"\n\
    \n#line 4 \"src/graph/template.hpp\"\nusing namespace std;\n\ntemplate <typename\
    \ T = long long> struct Edge {\n  int from, to;\n  T cost;\n  Edge(int from, int\
    \ to, T cost = 1) : from(from), to(to), cost(cost) {}\n};\n\ntemplate <typename\
    \ T = long long> using Edges = vector<Edge<T>>;\ntemplate <typename T = long long>\
    \ using Graph = vector<Edges<T>>;\n\ntemplate <typename T = long long> using Matrix\
    \ = vector<vector<T>>;\n#line 7 \"src/graph/strongly_connected_components.hpp\"\
    \n\nstruct StronglyConnectedComponents {\nprivate:\n  int n;\n  Graph<> graph;\n\
    \  Graph<> r_graph;\n  vector<bool> used;\n  vector<int> order, comp;\n\npublic:\n\
    \  StronglyConnectedComponents(int n)\n      : n(n), graph(n), r_graph(n), used(n,\
    \ false), comp(n, -1) {}\n\n  void add_edge(int u, int v) {\n    graph[u].emplace_back(u,\
    \ v);\n    r_graph[v].emplace_back(v, u);\n  }\n\n  void build() {\n    for (int\
    \ i = 0; i < n; ++i) {\n      if (!used[i]) {\n        dfs(i);\n      }\n    }\n\
    \    int cnt = 0;\n    reverse(order.begin(), order.end());\n    for (int i :\
    \ order) {\n      if (comp[i] == -1) {\n        r_dfs(i, cnt++);\n      }\n  \
    \  }\n  }\n\n  int operator[](int k) { return comp[k]; }\n\nprivate:\n  void dfs(int\
    \ idx) {\n    used[idx] = true;\n    for (auto edge : graph[idx]) {\n      if\
    \ (!used[edge.to]) {\n        dfs(edge.to);\n      }\n    }\n    order.push_back(idx);\n\
    \  }\n  void r_dfs(int idx, int cnt) {\n    comp[idx] = cnt;\n    for (auto edge\
    \ : r_graph[idx]) {\n      if (comp[edge.to] == -1) {\n        r_dfs(edge.to,\
    \ cnt);\n      }\n    }\n  }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"./template.hpp\"\n\nstruct StronglyConnectedComponents {\nprivate:\n  int\
    \ n;\n  Graph<> graph;\n  Graph<> r_graph;\n  vector<bool> used;\n  vector<int>\
    \ order, comp;\n\npublic:\n  StronglyConnectedComponents(int n)\n      : n(n),\
    \ graph(n), r_graph(n), used(n, false), comp(n, -1) {}\n\n  void add_edge(int\
    \ u, int v) {\n    graph[u].emplace_back(u, v);\n    r_graph[v].emplace_back(v,\
    \ u);\n  }\n\n  void build() {\n    for (int i = 0; i < n; ++i) {\n      if (!used[i])\
    \ {\n        dfs(i);\n      }\n    }\n    int cnt = 0;\n    reverse(order.begin(),\
    \ order.end());\n    for (int i : order) {\n      if (comp[i] == -1) {\n     \
    \   r_dfs(i, cnt++);\n      }\n    }\n  }\n\n  int operator[](int k) { return\
    \ comp[k]; }\n\nprivate:\n  void dfs(int idx) {\n    used[idx] = true;\n    for\
    \ (auto edge : graph[idx]) {\n      if (!used[edge.to]) {\n        dfs(edge.to);\n\
    \      }\n    }\n    order.push_back(idx);\n  }\n  void r_dfs(int idx, int cnt)\
    \ {\n    comp[idx] = cnt;\n    for (auto edge : r_graph[idx]) {\n      if (comp[edge.to]\
    \ == -1) {\n        r_dfs(edge.to, cnt);\n      }\n    }\n  }\n};\n"
  dependsOn:
  - src/graph/template.hpp
  isVerificationFile: false
  path: src/graph/strongly_connected_components.hpp
  requiredBy: []
  timestamp: '2022-12-19 02:10:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/grl_3_c.test.cpp
documentation_of: src/graph/strongly_connected_components.hpp
layout: document
redirect_from:
- /library/src/graph/strongly_connected_components.hpp
- /library/src/graph/strongly_connected_components.hpp.html
title: src/graph/strongly_connected_components.hpp
---
