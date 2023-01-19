---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_6_a.test.cpp
    title: test/aoj/grl_6_a.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/flow/ford_fulkerson.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ntemplate <typename T> struct FordFulkerson {\nprivate:\n\
    \  struct Edge {\n    int from;\n    int to;\n    T cap;\n    int rev;\n    bool\
    \ is_rev;\n  };\n  T INF = numeric_limits<T>::max();\n  int n;\n  vector<vector<Edge>>\
    \ graph;\n  vector<bool> used;\n\npublic:\n  FordFulkerson(int n) : n(n), graph(n),\
    \ used(n) {}\n\n  void add_edge(int from, int to, T cap) {\n    graph[from].emplace_back(\n\
    \        (Edge){from, to, cap, (int)graph[to].size(), false});\n    graph[to].emplace_back(\n\
    \        (Edge){to, from, 0, (int)graph[from].size() - 1, true});\n  }\n\n  T\
    \ max_flow(int s, int t) {\n    T ret = 0;\n    while (true) {\n      used.assign(n,\
    \ false);\n      T flow = dfs(s, t, INF);\n      if (flow == 0) {\n        return\
    \ ret;\n      }\n      ret += flow;\n    }\n    return ret;\n  }\n\nprivate:\n\
    \  T dfs(int v, int t, T f) {\n    if (v == t) {\n      return f;\n    }\n   \
    \ used[v] = true;\n    for (auto &e : graph[v]) {\n      if (!used[e.to] && e.cap\
    \ > 0) {\n        T d = dfs(e.to, t, min(f, e.cap));\n        if (d > 0) {\n \
    \         e.cap -= d;\n          graph[e.to][e.rev].cap += d;\n          return\
    \ d;\n        }\n      }\n    }\n    return 0;\n  }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T> struct FordFulkerson {\nprivate:\n  struct Edge {\n    int from;\n\
    \    int to;\n    T cap;\n    int rev;\n    bool is_rev;\n  };\n  T INF = numeric_limits<T>::max();\n\
    \  int n;\n  vector<vector<Edge>> graph;\n  vector<bool> used;\n\npublic:\n  FordFulkerson(int\
    \ n) : n(n), graph(n), used(n) {}\n\n  void add_edge(int from, int to, T cap)\
    \ {\n    graph[from].emplace_back(\n        (Edge){from, to, cap, (int)graph[to].size(),\
    \ false});\n    graph[to].emplace_back(\n        (Edge){to, from, 0, (int)graph[from].size()\
    \ - 1, true});\n  }\n\n  T max_flow(int s, int t) {\n    T ret = 0;\n    while\
    \ (true) {\n      used.assign(n, false);\n      T flow = dfs(s, t, INF);\n   \
    \   if (flow == 0) {\n        return ret;\n      }\n      ret += flow;\n    }\n\
    \    return ret;\n  }\n\nprivate:\n  T dfs(int v, int t, T f) {\n    if (v ==\
    \ t) {\n      return f;\n    }\n    used[v] = true;\n    for (auto &e : graph[v])\
    \ {\n      if (!used[e.to] && e.cap > 0) {\n        T d = dfs(e.to, t, min(f,\
    \ e.cap));\n        if (d > 0) {\n          e.cap -= d;\n          graph[e.to][e.rev].cap\
    \ += d;\n          return d;\n        }\n      }\n    }\n    return 0;\n  }\n\
    };\n"
  dependsOn: []
  isVerificationFile: false
  path: src/flow/ford_fulkerson.hpp
  requiredBy: []
  timestamp: '2023-01-19 22:48:27+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/grl_6_a.test.cpp
documentation_of: src/flow/ford_fulkerson.hpp
layout: document
redirect_from:
- /library/src/flow/ford_fulkerson.hpp
- /library/src/flow/ford_fulkerson.hpp.html
title: src/flow/ford_fulkerson.hpp
---
