---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/flow/dinic.hpp
    title: src/flow/dinic.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_6_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_6_A
  bundledCode: "#line 1 \"test/aoj/grl_6_a_2.test.cpp\"\n#define PROBLEM         \
    \                                                       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_6_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/flow/dinic.hpp\"\
    \n\n#line 4 \"src/flow/dinic.hpp\"\nusing namespace std;\n\ntemplate <typename\
    \ T> struct Dinic {\nprivate:\n  struct Edge {\n    int from;\n    int to;\n \
    \   T cap;\n    int rev;\n    bool is_rev;\n  };\n  T INF = numeric_limits<T>::max();\n\
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
    \ }\n      }\n    }\n    return 0;\n  }\n};\n#line 8 \"test/aoj/grl_6_a_2.test.cpp\"\
    \n\nint main() {\n  int V, E;\n  cin >> V >> E;\n  Dinic<int> dinic(V);\n  for\
    \ (int i = 0; i < E; i++) {\n    int u, v, c;\n    cin >> u >> v >> c;\n    dinic.add_edge(u,\
    \ v, c);\n  }\n  cout << dinic.max_flow(0, V - 1) << endl;\n\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_6_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/flow/dinic.hpp\"\
    \n\nint main() {\n  int V, E;\n  cin >> V >> E;\n  Dinic<int> dinic(V);\n  for\
    \ (int i = 0; i < E; i++) {\n    int u, v, c;\n    cin >> u >> v >> c;\n    dinic.add_edge(u,\
    \ v, c);\n  }\n  cout << dinic.max_flow(0, V - 1) << endl;\n\n  return 0;\n}\n"
  dependsOn:
  - src/flow/dinic.hpp
  isVerificationFile: true
  path: test/aoj/grl_6_a_2.test.cpp
  requiredBy: []
  timestamp: '2023-01-19 23:08:54+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/grl_6_a_2.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/grl_6_a_2.test.cpp
- /verify/test/aoj/grl_6_a_2.test.cpp.html
title: test/aoj/grl_6_a_2.test.cpp
---
