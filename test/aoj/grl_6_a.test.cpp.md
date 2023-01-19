---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/flow/ford_fulkerson.hpp
    title: src/flow/ford_fulkerson.hpp
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
  bundledCode: "#line 1 \"test/aoj/grl_6_a.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_6_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/flow/ford_fulkerson.hpp\"\
    \n\n#line 4 \"src/flow/ford_fulkerson.hpp\"\nusing namespace std;\n\ntemplate\
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
    };\n#line 8 \"test/aoj/grl_6_a.test.cpp\"\n\nint main() {\n  int V, E;\n  cin\
    \ >> V >> E;\n  FordFulkerson<int> ff(V);\n  for (int i = 0; i < E; i++) {\n \
    \   int u, v, c;\n    cin >> u >> v >> c;\n    ff.add_edge(u, v, c);\n  }\n  cout\
    \ << ff.max_flow(0, V - 1) << endl;\n\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_6_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/flow/ford_fulkerson.hpp\"\
    \n\nint main() {\n  int V, E;\n  cin >> V >> E;\n  FordFulkerson<int> ff(V);\n\
    \  for (int i = 0; i < E; i++) {\n    int u, v, c;\n    cin >> u >> v >> c;\n\
    \    ff.add_edge(u, v, c);\n  }\n  cout << ff.max_flow(0, V - 1) << endl;\n\n\
    \  return 0;\n}\n"
  dependsOn:
  - src/flow/ford_fulkerson.hpp
  isVerificationFile: true
  path: test/aoj/grl_6_a.test.cpp
  requiredBy: []
  timestamp: '2023-01-19 22:48:27+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/grl_6_a.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/grl_6_a.test.cpp
- /verify/test/aoj/grl_6_a.test.cpp.html
title: test/aoj/grl_6_a.test.cpp
---
