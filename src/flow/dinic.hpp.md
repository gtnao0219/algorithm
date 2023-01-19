---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_6_a_2.test.cpp
    title: test/aoj/grl_6_a_2.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/flow/dinic.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\ntemplate <typename T> struct Dinic {\nprivate:\n  struct Edge\
    \ {\n    int from;\n    int to;\n    T cap;\n    int rev;\n    bool is_rev;\n\
    \  };\n  T INF = numeric_limits<T>::max();\n  int n;\n  vector<vector<Edge>> graph;\n\
    \  vector<int> min_cost;\n  vector<int> iter;\n\npublic:\n  Dinic(int n) : n(n),\
    \ graph(n) {}\n\n  void add_edge(int from, int to, T cap) {\n    graph[from].emplace_back(\n\
    \        (Edge){from, to, cap, (int)graph[to].size(), false});\n    graph[to].emplace_back(\n\
    \        (Edge){to, from, 0, (int)graph[from].size() - 1, true});\n  }\n\n  T\
    \ max_flow(int s, int t) {\n    T ret = 0;\n    iter.assign(n, 0);\n    while\
    \ (true) {\n      bfs(s);\n      if (min_cost[t] == -1) {\n        return ret;\n\
    \      }\n      iter.assign(n, 0);\n      while (true) {\n        T flow = dfs(s,\
    \ t, INF);\n        if (flow == 0) {\n          break;\n        }\n        ret\
    \ += flow;\n      }\n    }\n    return ret;\n  }\n\nprivate:\n  void bfs(int s)\
    \ {\n    min_cost.assign(n, -1);\n    queue<int> que;\n    min_cost[s] = 0;\n\
    \    que.push(s);\n    while (!que.empty()) {\n      int v = que.front();\n  \
    \    que.pop();\n      for (auto &e : graph[v]) {\n        if (e.cap > 0 && min_cost[e.to]\
    \ < 0) {\n          min_cost[e.to] = min_cost[v] + 1;\n          que.push(e.to);\n\
    \        }\n      }\n    }\n  }\n\n  T dfs(int v, int t, T f) {\n    if (v ==\
    \ t) {\n      return f;\n    }\n    for (int &i = iter[v]; i < graph[v].size();\
    \ i++) {\n      Edge &e = graph[v][i];\n      if (e.cap > 0 && min_cost[v] < min_cost[e.to])\
    \ {\n        T d = dfs(e.to, t, min(f, e.cap));\n        if (d > 0) {\n      \
    \    e.cap -= d;\n          graph[e.to][e.rev].cap += d;\n          return d;\n\
    \        }\n      }\n    }\n    return 0;\n  }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T> struct Dinic {\nprivate:\n  struct Edge {\n    int from;\n    int\
    \ to;\n    T cap;\n    int rev;\n    bool is_rev;\n  };\n  T INF = numeric_limits<T>::max();\n\
    \  int n;\n  vector<vector<Edge>> graph;\n  vector<int> min_cost;\n  vector<int>\
    \ iter;\n\npublic:\n  Dinic(int n) : n(n), graph(n) {}\n\n  void add_edge(int\
    \ from, int to, T cap) {\n    graph[from].emplace_back(\n        (Edge){from,\
    \ to, cap, (int)graph[to].size(), false});\n    graph[to].emplace_back(\n    \
    \    (Edge){to, from, 0, (int)graph[from].size() - 1, true});\n  }\n\n  T max_flow(int\
    \ s, int t) {\n    T ret = 0;\n    iter.assign(n, 0);\n    while (true) {\n  \
    \    bfs(s);\n      if (min_cost[t] == -1) {\n        return ret;\n      }\n \
    \     iter.assign(n, 0);\n      while (true) {\n        T flow = dfs(s, t, INF);\n\
    \        if (flow == 0) {\n          break;\n        }\n        ret += flow;\n\
    \      }\n    }\n    return ret;\n  }\n\nprivate:\n  void bfs(int s) {\n    min_cost.assign(n,\
    \ -1);\n    queue<int> que;\n    min_cost[s] = 0;\n    que.push(s);\n    while\
    \ (!que.empty()) {\n      int v = que.front();\n      que.pop();\n      for (auto\
    \ &e : graph[v]) {\n        if (e.cap > 0 && min_cost[e.to] < 0) {\n         \
    \ min_cost[e.to] = min_cost[v] + 1;\n          que.push(e.to);\n        }\n  \
    \    }\n    }\n  }\n\n  T dfs(int v, int t, T f) {\n    if (v == t) {\n      return\
    \ f;\n    }\n    for (int &i = iter[v]; i < graph[v].size(); i++) {\n      Edge\
    \ &e = graph[v][i];\n      if (e.cap > 0 && min_cost[v] < min_cost[e.to]) {\n\
    \        T d = dfs(e.to, t, min(f, e.cap));\n        if (d > 0) {\n          e.cap\
    \ -= d;\n          graph[e.to][e.rev].cap += d;\n          return d;\n       \
    \ }\n      }\n    }\n    return 0;\n  }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/flow/dinic.hpp
  requiredBy: []
  timestamp: '2023-01-19 23:08:54+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/grl_6_a_2.test.cpp
documentation_of: src/flow/dinic.hpp
layout: document
redirect_from:
- /library/src/flow/dinic.hpp
- /library/src/flow/dinic.hpp.html
title: src/flow/dinic.hpp
---
