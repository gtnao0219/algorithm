---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/graph/template.hpp
    title: src/graph/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_5_a.test.cpp
    title: test/aoj/grl_5_a.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/graph/diameter.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\n#line 2 \"src/graph/template.hpp\"\n\n#line 4 \"src/graph/template.hpp\"\
    \nusing namespace std;\n\ntemplate <typename T = long long> struct Edge {\n  int\
    \ from, to;\n  T cost;\n  Edge(int from, int to, T cost = 1) : from(from), to(to),\
    \ cost(cost) {}\n};\n\ntemplate <typename T = long long> using Edges = vector<Edge<T>>;\n\
    template <typename T = long long> using Graph = vector<Edges<T>>;\n\ntemplate\
    \ <typename T = long long> using Matrix = vector<vector<T>>;\n#line 7 \"src/graph/diameter.hpp\"\
    \n\ntemplate <typename T = long long> struct Diameter {\nprivate:\n  using P =\
    \ pair<T, int>;\n  int v;\n  Graph<T> g;\n\npublic:\n  Diameter(int v) : v(v),\
    \ g(v) {}\n\n  void add_edge(int from, int to, T cost = 1) {\n    g[from].emplace_back(from,\
    \ to, cost);\n    g[to].emplace_back(to, from, cost);\n  }\n\n  T calc() {\n \
    \   P f = dfs(0, -1);\n    P s = dfs(f.second, -1);\n    return s.first;\n  }\n\
    \nprivate:\n  P dfs(int i, int parent) {\n    P ret = make_pair((T)0, i);\n  \
    \  for (auto edge : g[i]) {\n      if (edge.to == parent) {\n        continue;\n\
    \      }\n      auto next = dfs(edge.to, i);\n      next.first += edge.cost;\n\
    \      ret = max(ret, next);\n    }\n    return ret;\n  }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"./template.hpp\"\n\ntemplate <typename T = long long> struct Diameter {\n\
    private:\n  using P = pair<T, int>;\n  int v;\n  Graph<T> g;\n\npublic:\n  Diameter(int\
    \ v) : v(v), g(v) {}\n\n  void add_edge(int from, int to, T cost = 1) {\n    g[from].emplace_back(from,\
    \ to, cost);\n    g[to].emplace_back(to, from, cost);\n  }\n\n  T calc() {\n \
    \   P f = dfs(0, -1);\n    P s = dfs(f.second, -1);\n    return s.first;\n  }\n\
    \nprivate:\n  P dfs(int i, int parent) {\n    P ret = make_pair((T)0, i);\n  \
    \  for (auto edge : g[i]) {\n      if (edge.to == parent) {\n        continue;\n\
    \      }\n      auto next = dfs(edge.to, i);\n      next.first += edge.cost;\n\
    \      ret = max(ret, next);\n    }\n    return ret;\n  }\n};\n"
  dependsOn:
  - src/graph/template.hpp
  isVerificationFile: false
  path: src/graph/diameter.hpp
  requiredBy: []
  timestamp: '2022-12-24 16:49:35+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/grl_5_a.test.cpp
documentation_of: src/graph/diameter.hpp
layout: document
redirect_from:
- /library/src/graph/diameter.hpp
- /library/src/graph/diameter.hpp.html
title: src/graph/diameter.hpp
---
