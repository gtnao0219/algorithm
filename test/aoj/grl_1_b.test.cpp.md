---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/graph/bellman_ford.hpp
    title: src/graph/bellman_ford.hpp
  - icon: ':heavy_check_mark:'
    path: src/graph/template.hpp
    title: src/graph/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B
  bundledCode: "#line 1 \"test/aoj/grl_1_b.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/graph/bellman_ford.hpp\"\
    \n\n#line 4 \"src/graph/bellman_ford.hpp\"\nusing namespace std;\n\n#line 2 \"\
    src/graph/template.hpp\"\n\n#line 4 \"src/graph/template.hpp\"\nusing namespace\
    \ std;\n\ntemplate <typename T = int> struct Edge {\n  int from, to;\n  T cost;\n\
    \  Edge(int from, int to, T cost = 1) : from(from), to(to), cost(cost) {}\n};\n\
    \ntemplate <typename T = int> using Edges = vector<Edge<T>>;\n#line 7 \"src/graph/bellman_ford.hpp\"\
    \n\ntemplate <typename T>\nvector<int> bellman_ford(const Edges<T> &edges, int\
    \ V, int s) {\n  const T INF = numeric_limits<T>::max();\n  vector<T> dist(V,\
    \ INF);\n  dist[s] = 0;\n  for (int i = 0; i < V - 1; ++i) {\n    for (auto &e\
    \ : edges) {\n      if (dist[e.from] == INF) {\n        continue;\n      }\n \
    \     dist[e.to] = min(dist[e.to], dist[e.from] + e.cost);\n    }\n  }\n  for\
    \ (auto &e : edges) {\n    if (dist[e.from] == INF) {\n      continue;\n    }\n\
    \    if (dist[e.to] > dist[e.from] + e.cost) {\n      return vector<T>();\n  \
    \  }\n  }\n  return dist;\n}\n#line 9 \"test/aoj/grl_1_b.test.cpp\"\n\nint main()\
    \ {\n  int V, E, r;\n  cin >> V >> E >> r;\n  Edges<int> edges;\n  for (int i\
    \ = 0; i < E; ++i) {\n    int s, t, d;\n    cin >> s >> t >> d;\n    edges.emplace_back(s,\
    \ t, d);\n  }\n  auto dist = bellman_ford(edges, V, r);\n  if (dist.empty()) {\n\
    \    cout << \"NEGATIVE CYCLE\" << endl;\n  } else {\n    for (int i = 0; i <\
    \ V; ++i) {\n      if (dist[i] == numeric_limits<int>::max()) {\n        cout\
    \ << \"INF\" << endl;\n      } else {\n        cout << dist[i] << endl;\n    \
    \  }\n    }\n  }\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/graph/bellman_ford.hpp\"\
    \n#include \"../../src/graph/template.hpp\"\n\nint main() {\n  int V, E, r;\n\
    \  cin >> V >> E >> r;\n  Edges<int> edges;\n  for (int i = 0; i < E; ++i) {\n\
    \    int s, t, d;\n    cin >> s >> t >> d;\n    edges.emplace_back(s, t, d);\n\
    \  }\n  auto dist = bellman_ford(edges, V, r);\n  if (dist.empty()) {\n    cout\
    \ << \"NEGATIVE CYCLE\" << endl;\n  } else {\n    for (int i = 0; i < V; ++i)\
    \ {\n      if (dist[i] == numeric_limits<int>::max()) {\n        cout << \"INF\"\
    \ << endl;\n      } else {\n        cout << dist[i] << endl;\n      }\n    }\n\
    \  }\n  return 0;\n}\n"
  dependsOn:
  - src/graph/bellman_ford.hpp
  - src/graph/template.hpp
  isVerificationFile: true
  path: test/aoj/grl_1_b.test.cpp
  requiredBy: []
  timestamp: '2022-12-18 19:31:07+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/grl_1_b.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/grl_1_b.test.cpp
- /verify/test/aoj/grl_1_b.test.cpp.html
title: test/aoj/grl_1_b.test.cpp
---
