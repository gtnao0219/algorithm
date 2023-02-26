---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: src/search/bfs/topological_sort.hpp
    title: src/search/bfs/topological_sort.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_4_a_2.test.cpp
    title: test/aoj/grl_4_a_2.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/search/bfs/has_directed_cycle.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#line 2 \"src/search/bfs/topological_sort.hpp\"\n\n#line\
    \ 4 \"src/search/bfs/topological_sort.hpp\"\nusing namespace std;\n\nvector<int>\
    \ topological_sort(const vector<vector<int>> &g) {\n  int n = g.size();\n  vector<int>\
    \ deg(n);\n  for (int i = 0; i < n; ++i) {\n    for (int to : g[i]) {\n      ++deg[to];\n\
    \    }\n  }\n  queue<int> que;\n  for (int i = 0; i < n; ++i) {\n    if (deg[i]\
    \ == 0) {\n      que.push(i);\n    }\n  }\n  vector<int> res;\n  while (!que.empty())\
    \ {\n    int v = que.front();\n    que.pop();\n    res.push_back(v);\n    for\
    \ (int to : g[v]) {\n      --deg[to];\n      if (deg[to] == 0) {\n        que.push(to);\n\
    \      }\n    }\n  }\n  return res;\n}\n#line 7 \"src/search/bfs/has_directed_cycle.hpp\"\
    \n\nbool has_directed_cycle(const vector<vector<int>> &g) {\n  vector<int> orders\
    \ = topological_sort(g);\n  int n = g.size();\n  return (int)orders.size() !=\
    \ n;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"./topological_sort.hpp\"\n\nbool has_directed_cycle(const vector<vector<int>>\
    \ &g) {\n  vector<int> orders = topological_sort(g);\n  int n = g.size();\n  return\
    \ (int)orders.size() != n;\n}\n"
  dependsOn:
  - src/search/bfs/topological_sort.hpp
  isVerificationFile: false
  path: src/search/bfs/has_directed_cycle.hpp
  requiredBy: []
  timestamp: '2023-02-27 02:38:54+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/grl_4_a_2.test.cpp
documentation_of: src/search/bfs/has_directed_cycle.hpp
layout: document
redirect_from:
- /library/src/search/bfs/has_directed_cycle.hpp
- /library/src/search/bfs/has_directed_cycle.hpp.html
title: src/search/bfs/has_directed_cycle.hpp
---
