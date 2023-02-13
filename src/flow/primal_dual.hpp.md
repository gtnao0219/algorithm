---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_6_b.test.cpp
    title: test/aoj/grl_6_b.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/flow/primal_dual.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ntemplate <typename FlowT, typename CostT> struct PrimalDual\
    \ {\nprivate:\n  struct Edge {\n    int from;\n    int to;\n    FlowT cap;\n \
    \   CostT cost;\n    int rev;\n    bool is_rev;\n  };\n  CostT INF = numeric_limits<CostT>::max();\n\
    \  int n;\n  vector<vector<Edge>> graph;\n  using Pi = pair<CostT, int>;\n  priority_queue<Pi,\
    \ vector<Pi>, greater<Pi>> que;\n  vector<CostT> potential, min_cost;\n  vector<int>\
    \ prevv, preve;\n\npublic:\n  PrimalDual(int n)\n      : n(n), graph(n), potential(n),\
    \ min_cost(n), prevv(n, -1), preve(n, -1) {}\n\n  void add_edge(int from, int\
    \ to, FlowT cap, CostT cost) {\n    graph[from].emplace_back(\n        (Edge){from,\
    \ to, cap, cost, (int)graph[to].size(), false});\n    graph[to].emplace_back(\n\
    \        (Edge){to, from, 0, -cost, (int)graph[from].size() - 1, true});\n  }\n\
    \n  CostT min_cost_flow(int s, int t, FlowT f) {\n    CostT ret = 0;\n    while\
    \ (f > 0) {\n      min_cost.assign(n, INF);\n      que.emplace(0, s);\n      min_cost[s]\
    \ = 0;\n      while (!que.empty()) {\n        Pi p = que.top();\n        que.pop();\n\
    \        if (min_cost[p.second] < p.first)\n          continue;\n        for (int\
    \ i = 0; i < (int)graph[p.second].size(); ++i) {\n          Edge &e = graph[p.second][i];\n\
    \          CostT next_cost = min_cost[p.second] + e.cost + potential[p.second]\
    \ -\n                            potential[e.to];\n          if (e.cap > 0 &&\
    \ min_cost[e.to] > next_cost) {\n            min_cost[e.to] = next_cost;\n   \
    \         prevv[e.to] = p.second;\n            preve[e.to] = i;\n            que.emplace(min_cost[e.to],\
    \ e.to);\n          }\n        }\n      }\n      if (min_cost[t] == INF)\n   \
    \     return -1;\n      for (int v = 0; v < n; ++v) {\n        potential[v] +=\
    \ min_cost[v];\n      }\n      FlowT add_flow = f;\n      for (int v = t; v !=\
    \ s; v = prevv[v]) {\n        add_flow = min(add_flow, graph[prevv[v]][preve[v]].cap);\n\
    \      }\n      f -= add_flow;\n      ret += add_flow * potential[t];\n      for\
    \ (int v = t; v != s; v = prevv[v]) {\n        Edge &e = graph[prevv[v]][preve[v]];\n\
    \        e.cap -= add_flow;\n        graph[v][e.rev].cap += add_flow;\n      }\n\
    \    }\n    return ret;\n  }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename FlowT, typename CostT> struct PrimalDual {\nprivate:\n  struct Edge\
    \ {\n    int from;\n    int to;\n    FlowT cap;\n    CostT cost;\n    int rev;\n\
    \    bool is_rev;\n  };\n  CostT INF = numeric_limits<CostT>::max();\n  int n;\n\
    \  vector<vector<Edge>> graph;\n  using Pi = pair<CostT, int>;\n  priority_queue<Pi,\
    \ vector<Pi>, greater<Pi>> que;\n  vector<CostT> potential, min_cost;\n  vector<int>\
    \ prevv, preve;\n\npublic:\n  PrimalDual(int n)\n      : n(n), graph(n), potential(n),\
    \ min_cost(n), prevv(n, -1), preve(n, -1) {}\n\n  void add_edge(int from, int\
    \ to, FlowT cap, CostT cost) {\n    graph[from].emplace_back(\n        (Edge){from,\
    \ to, cap, cost, (int)graph[to].size(), false});\n    graph[to].emplace_back(\n\
    \        (Edge){to, from, 0, -cost, (int)graph[from].size() - 1, true});\n  }\n\
    \n  CostT min_cost_flow(int s, int t, FlowT f) {\n    CostT ret = 0;\n    while\
    \ (f > 0) {\n      min_cost.assign(n, INF);\n      que.emplace(0, s);\n      min_cost[s]\
    \ = 0;\n      while (!que.empty()) {\n        Pi p = que.top();\n        que.pop();\n\
    \        if (min_cost[p.second] < p.first)\n          continue;\n        for (int\
    \ i = 0; i < (int)graph[p.second].size(); ++i) {\n          Edge &e = graph[p.second][i];\n\
    \          CostT next_cost = min_cost[p.second] + e.cost + potential[p.second]\
    \ -\n                            potential[e.to];\n          if (e.cap > 0 &&\
    \ min_cost[e.to] > next_cost) {\n            min_cost[e.to] = next_cost;\n   \
    \         prevv[e.to] = p.second;\n            preve[e.to] = i;\n            que.emplace(min_cost[e.to],\
    \ e.to);\n          }\n        }\n      }\n      if (min_cost[t] == INF)\n   \
    \     return -1;\n      for (int v = 0; v < n; ++v) {\n        potential[v] +=\
    \ min_cost[v];\n      }\n      FlowT add_flow = f;\n      for (int v = t; v !=\
    \ s; v = prevv[v]) {\n        add_flow = min(add_flow, graph[prevv[v]][preve[v]].cap);\n\
    \      }\n      f -= add_flow;\n      ret += add_flow * potential[t];\n      for\
    \ (int v = t; v != s; v = prevv[v]) {\n        Edge &e = graph[prevv[v]][preve[v]];\n\
    \        e.cap -= add_flow;\n        graph[v][e.rev].cap += add_flow;\n      }\n\
    \    }\n    return ret;\n  }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/flow/primal_dual.hpp
  requiredBy: []
  timestamp: '2023-02-13 10:07:09+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/grl_6_b.test.cpp
documentation_of: src/flow/primal_dual.hpp
layout: document
redirect_from:
- /library/src/flow/primal_dual.hpp
- /library/src/flow/primal_dual.hpp.html
title: src/flow/primal_dual.hpp
---
