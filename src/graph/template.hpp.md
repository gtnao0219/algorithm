---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/graph/bellman_ford.hpp
    title: src/graph/bellman_ford.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_1_b.test.cpp
    title: test/aoj/grl_1_b.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/graph/template.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\ntemplate <typename T = int> struct Edge {\n  int from, to;\n\
    \  T cost;\n  Edge(int from, int to, T cost = 1) : from(from), to(to), cost(cost)\
    \ {}\n};\n\ntemplate <typename T = int> using Edges = vector<Edge<T>>;\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T = int> struct Edge {\n  int from, to;\n  T cost;\n  Edge(int from,\
    \ int to, T cost = 1) : from(from), to(to), cost(cost) {}\n};\n\ntemplate <typename\
    \ T = int> using Edges = vector<Edge<T>>;\n"
  dependsOn: []
  isVerificationFile: false
  path: src/graph/template.hpp
  requiredBy:
  - src/graph/bellman_ford.hpp
  timestamp: '2022-12-18 19:31:07+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/grl_1_b.test.cpp
documentation_of: src/graph/template.hpp
layout: document
redirect_from:
- /library/src/graph/template.hpp
- /library/src/graph/template.hpp.html
title: src/graph/template.hpp
---
