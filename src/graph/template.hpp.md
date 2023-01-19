---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/graph/bellman_ford.hpp
    title: src/graph/bellman_ford.hpp
  - icon: ':heavy_check_mark:'
    path: src/graph/diameter.hpp
    title: src/graph/diameter.hpp
  - icon: ':heavy_check_mark:'
    path: src/graph/dijkstra.hpp
    title: src/graph/dijkstra.hpp
  - icon: ':heavy_check_mark:'
    path: src/graph/kruskul.hpp
    title: src/graph/kruskul.hpp
  - icon: ':heavy_check_mark:'
    path: src/graph/strongly_connected_components.hpp
    title: src/graph/strongly_connected_components.hpp
  - icon: ':heavy_check_mark:'
    path: src/graph/warshall_floyd.hpp
    title: src/graph/warshall_floyd.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_1_a.test.cpp
    title: test/aoj/grl_1_a.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_1_b.test.cpp
    title: test/aoj/grl_1_b.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_1_c.test.cpp
    title: test/aoj/grl_1_c.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_2_a.test.cpp
    title: test/aoj/grl_2_a.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_3_c.test.cpp
    title: test/aoj/grl_3_c.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_5_a.test.cpp
    title: test/aoj/grl_5_a.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/graph/template.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\ntemplate <typename T = long long> struct Edge {\n  int from,\
    \ to;\n  T cost;\n  Edge(int from, int to, T cost = 1) : from(from), to(to), cost(cost)\
    \ {}\n};\n\ntemplate <typename T = long long> using Edges = vector<Edge<T>>;\n\
    template <typename T = long long> using Graph = vector<Edges<T>>;\n\ntemplate\
    \ <typename T = long long> using Matrix = vector<vector<T>>;\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T = long long> struct Edge {\n  int from, to;\n  T cost;\n  Edge(int\
    \ from, int to, T cost = 1) : from(from), to(to), cost(cost) {}\n};\n\ntemplate\
    \ <typename T = long long> using Edges = vector<Edge<T>>;\ntemplate <typename\
    \ T = long long> using Graph = vector<Edges<T>>;\n\ntemplate <typename T = long\
    \ long> using Matrix = vector<vector<T>>;\n"
  dependsOn: []
  isVerificationFile: false
  path: src/graph/template.hpp
  requiredBy:
  - src/graph/warshall_floyd.hpp
  - src/graph/kruskul.hpp
  - src/graph/bellman_ford.hpp
  - src/graph/dijkstra.hpp
  - src/graph/strongly_connected_components.hpp
  - src/graph/diameter.hpp
  timestamp: '2022-12-19 02:10:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/grl_1_c.test.cpp
  - test/aoj/grl_1_b.test.cpp
  - test/aoj/grl_1_a.test.cpp
  - test/aoj/grl_5_a.test.cpp
  - test/aoj/grl_3_c.test.cpp
  - test/aoj/grl_2_a.test.cpp
documentation_of: src/graph/template.hpp
layout: document
redirect_from:
- /library/src/graph/template.hpp
- /library/src/graph/template.hpp.html
title: src/graph/template.hpp
---
