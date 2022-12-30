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
    \ std;\n\ntemplate <typename T = long long> struct Edge {\n  int from, to;\n \
    \ T cost;\n  Edge(int from, int to, T cost = 1) : from(from), to(to), cost(cost)\
    \ {}\n};\n\ntemplate <typename T = long long> using Edges = vector<Edge<T>>;\n\
    template <typename T = long long> using Graph = vector<Edges<T>>;\n\ntemplate\
    \ <typename T = long long> using Matrix = vector<vector<T>>;\n#line 7 \"src/graph/bellman_ford.hpp\"\
    \n\ntemplate <typename T> struct BellmanFord {\nprivate:\n  int n;\n  int start;\n\
    \  Edges<T> edges;\n  vector<T> dist;\n  bool _has_negative_cycle = false;\n \
    \ long long MAX = numeric_limits<T>::max();\n\npublic:\n  BellmanFord(int n, int\
    \ start) : n(n), start(start) {\n    dist.resize(n, MAX);\n    dist[start] = 0;\n\
    \  }\n\n  void add_edge(int start, int to, long long cost) {\n    edges.emplace_back(start,\
    \ to, cost);\n  }\n\n  void build() {\n    for (int i = 0; i < n - 1; ++i) {\n\
    \      for (auto &edge : edges) {\n        if (dist[edge.from] == MAX) {\n   \
    \       continue;\n        }\n        dist[edge.to] = min(dist[edge.to], dist[edge.from]\
    \ + edge.cost);\n      }\n    }\n    for (auto &edge : edges) {\n      if (dist[edge.from]\
    \ == MAX) {\n        continue;\n      }\n      if (dist[edge.to] > dist[edge.from]\
    \ + edge.cost) {\n        _has_negative_cycle = true;\n        break;\n      }\n\
    \    }\n  }\n\n  T shortest_path_value(int t) { return dist[t]; }\n\n  bool is_unreachable(int\
    \ t) { return dist[t] == MAX; }\n\n  bool has_negative_cycle() { return _has_negative_cycle;\
    \ }\n};\n#line 9 \"test/aoj/grl_1_b.test.cpp\"\n\nint main() {\n  int V, E, r;\n\
    \  cin >> V >> E >> r;\n  BellmanFord<int> bellman_ford(V, r);\n  Edges<long long>\
    \ edges;\n  for (int i = 0; i < E; ++i) {\n    int s, t, d;\n    cin >> s >> t\
    \ >> d;\n    bellman_ford.add_edge(s, t, d);\n  }\n  bellman_ford.build();\n \
    \ if (bellman_ford.has_negative_cycle()) {\n    cout << \"NEGATIVE CYCLE\" <<\
    \ endl;\n  } else {\n    for (int i = 0; i < V; ++i) {\n      if (bellman_ford.is_unreachable(i))\
    \ {\n        cout << \"INF\" << endl;\n      } else {\n        cout << bellman_ford.shortest_path_value(i)\
    \ << endl;\n      }\n    }\n  }\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/graph/bellman_ford.hpp\"\
    \n#include \"../../src/graph/template.hpp\"\n\nint main() {\n  int V, E, r;\n\
    \  cin >> V >> E >> r;\n  BellmanFord<int> bellman_ford(V, r);\n  Edges<long long>\
    \ edges;\n  for (int i = 0; i < E; ++i) {\n    int s, t, d;\n    cin >> s >> t\
    \ >> d;\n    bellman_ford.add_edge(s, t, d);\n  }\n  bellman_ford.build();\n \
    \ if (bellman_ford.has_negative_cycle()) {\n    cout << \"NEGATIVE CYCLE\" <<\
    \ endl;\n  } else {\n    for (int i = 0; i < V; ++i) {\n      if (bellman_ford.is_unreachable(i))\
    \ {\n        cout << \"INF\" << endl;\n      } else {\n        cout << bellman_ford.shortest_path_value(i)\
    \ << endl;\n      }\n    }\n  }\n  return 0;\n}\n"
  dependsOn:
  - src/graph/bellman_ford.hpp
  - src/graph/template.hpp
  isVerificationFile: true
  path: test/aoj/grl_1_b.test.cpp
  requiredBy: []
  timestamp: '2022-12-30 13:40:04+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/grl_1_b.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/grl_1_b.test.cpp
- /verify/test/aoj/grl_1_b.test.cpp.html
title: test/aoj/grl_1_b.test.cpp
---
