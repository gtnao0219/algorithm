---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: src/graph/strongly_connected_components.hpp
    title: src/graph/strongly_connected_components.hpp
  - icon: ':question:'
    path: src/graph/template.hpp
    title: src/graph/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/3/GRL_3_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/3/GRL_3_C
  bundledCode: "#line 1 \"test/aoj/grl_3_c.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/3/GRL_3_C\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/graph/strongly_connected_components.hpp\"\
    \n\n#line 4 \"src/graph/strongly_connected_components.hpp\"\nusing namespace std;\n\
    \n#line 2 \"src/graph/template.hpp\"\n\n#line 4 \"src/graph/template.hpp\"\nusing\
    \ namespace std;\n\ntemplate <typename T = long long> struct Edge {\n  int from,\
    \ to;\n  T cost;\n  Edge(int from, int to, T cost = 1) : from(from), to(to), cost(cost)\
    \ {}\n};\n\ntemplate <typename T = long long> using Edges = vector<Edge<T>>;\n\
    \ntemplate <typename T = long long> using Matrix = vector<vector<T>>;\n#line 7\
    \ \"src/graph/strongly_connected_components.hpp\"\n\nstruct StronglyConnectedComponents\
    \ {\nprivate:\n  int n;\n  Graph<> graph;\n  Graph<> r_graph;\n  vector<bool>\
    \ used;\n  vector<int> order, comp;\n\npublic:\n  StronglyConnectedComponents(int\
    \ n)\n      : n(n), graph(n), r_graph(n), used(n, false), comp(n, -1) {}\n\n \
    \ void add_edge(int u, int v) {\n    graph[u].emplace_back(u, v);\n    r_graph[v].emplace_back(v,\
    \ u);\n  }\n\n  void build() {\n    for (int i = 0; i < n; ++i) {\n      if (!used[i])\
    \ {\n        dfs(i);\n      }\n    }\n    int cnt = 0;\n    reverse(order.begin(),\
    \ order.end());\n    for (int i : order) {\n      if (comp[i] == -1) {\n     \
    \   r_dfs(i, cnt++);\n      }\n    }\n  }\n\n  int operator[](int k) { return\
    \ comp[k]; }\n\nprivate:\n  void dfs(int idx) {\n    used[idx] = true;\n    for\
    \ (auto edge : graph[idx]) {\n      if (!used[edge.to]) {\n        dfs(edge.to);\n\
    \      }\n    }\n    order.push_back(idx);\n  }\n  void r_dfs(int idx, int cnt)\
    \ {\n    comp[idx] = cnt;\n    for (auto edge : r_graph[idx]) {\n      if (comp[edge.to]\
    \ == -1) {\n        r_dfs(edge.to, cnt);\n      }\n    }\n  }\n};\n#line 9 \"\
    test/aoj/grl_3_c.test.cpp\"\n\nint main() {\n  int V, E;\n  cin >> V >> E;\n \
    \ StronglyConnectedComponents scc(V);\n  for (int i = 0; i < E; ++i) {\n    int\
    \ s, t;\n    cin >> s >> t;\n    scc.add_edge(s, t);\n  }\n  scc.build();\n  int\
    \ Q;\n  cin >> Q;\n  for (int i = 0; i < Q; ++i) {\n    int u, v;\n    cin >>\
    \ u >> v;\n    cout << (scc[u] == scc[v] ? \"1\" : \"0\") << endl;\n  }\n  return\
    \ 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/3/GRL_3_C\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/graph/strongly_connected_components.hpp\"\
    \n#include \"../../src/graph/template.hpp\"\n\nint main() {\n  int V, E;\n  cin\
    \ >> V >> E;\n  StronglyConnectedComponents scc(V);\n  for (int i = 0; i < E;\
    \ ++i) {\n    int s, t;\n    cin >> s >> t;\n    scc.add_edge(s, t);\n  }\n  scc.build();\n\
    \  int Q;\n  cin >> Q;\n  for (int i = 0; i < Q; ++i) {\n    int u, v;\n    cin\
    \ >> u >> v;\n    cout << (scc[u] == scc[v] ? \"1\" : \"0\") << endl;\n  }\n \
    \ return 0;\n}\n"
  dependsOn:
  - src/graph/strongly_connected_components.hpp
  - src/graph/template.hpp
  isVerificationFile: true
  path: test/aoj/grl_3_c.test.cpp
  requiredBy: []
  timestamp: '2022-12-19 01:13:24+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/aoj/grl_3_c.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/grl_3_c.test.cpp
- /verify/test/aoj/grl_3_c.test.cpp.html
title: test/aoj/grl_3_c.test.cpp
---
