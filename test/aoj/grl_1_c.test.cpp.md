---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: src/graph/template.hpp
    title: src/graph/template.hpp
  - icon: ':heavy_check_mark:'
    path: src/graph/warshall_floyd.hpp
    title: src/graph/warshall_floyd.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_C
  bundledCode: "#line 1 \"test/aoj/grl_1_c.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_C\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/graph/template.hpp\"\
    \n\n#line 4 \"src/graph/template.hpp\"\nusing namespace std;\n\ntemplate <typename\
    \ T = long long> struct Edge {\n  int from, to;\n  T cost;\n  Edge(int from, int\
    \ to, T cost = 1) : from(from), to(to), cost(cost) {}\n};\n\ntemplate <typename\
    \ T = long long> using Edges = vector<Edge<T>>;\n\ntemplate <typename T = long\
    \ long> using Matrix = vector<vector<T>>;\n#line 2 \"src/graph/warshall_floyd.hpp\"\
    \n\n#line 4 \"src/graph/warshall_floyd.hpp\"\nusing namespace std;\n\n#line 7\
    \ \"src/graph/warshall_floyd.hpp\"\n\ntemplate <typename T> struct WarshallFloyd\
    \ {\nprivate:\n  const T INF = numeric_limits<T>::max();\n  int n;\n  Matrix<T>\
    \ g;\n\npublic:\n  WarshallFloyd(int n) : n(n), g(n, vector<T>(n, INF)) {\n  \
    \  for (int i = 0; i < n; ++i) {\n      g[i][i] = 0;\n    }\n  }\n\n  void add_edge(int\
    \ u, int v, T c) { g[u][v] = c; }\n\n  void build() {\n    for (int k = 0; k <\
    \ n; ++k) {\n      for (int i = 0; i < n; ++i) {\n        for (int j = 0; j <\
    \ n; ++j) {\n          if (g[i][k] == INF || g[k][j] == INF) {\n            continue;\n\
    \          }\n          g[i][j] = min(g[i][j], g[i][k] + g[k][j]);\n        }\n\
    \      }\n    }\n  }\n\n  bool has_negative_cycle() {\n    for (int i = 0; i <\
    \ n; ++i) {\n      if (g[i][i] < 0) {\n        return true;\n      }\n    }\n\
    \    return false;\n  }\n\n  T shortest_path_value(int s, int t) { return g[s][t];\
    \ }\n\n  bool is_unreachable(int s, int t) { return g[s][t] == INF; }\n};\n#line\
    \ 9 \"test/aoj/grl_1_c.test.cpp\"\n\nint main() {\n  int V, E;\n  cin >> V >>\
    \ E;\n  WarshallFloyd<long long> wf(V);\n  for (int i = 0; i < E; ++i) {\n   \
    \ int s, t, d;\n    cin >> s >> t >> d;\n    wf.add_edge(s, t, d);\n  }\n  wf.build();\n\
    \  if (wf.has_negative_cycle()) {\n    cout << \"NEGATIVE CYCLE\" << endl;\n \
    \   return 0;\n  }\n  for (int i = 0; i < V; ++i) {\n    for (int j = 0; j < V;\
    \ ++j) {\n      if (wf.is_unreachable(i, j)) {\n        cout << \"INF\";\n   \
    \   } else {\n        cout << wf.shortest_path_value(i, j);\n      }\n\n     \
    \ if (j == V - 1) {\n        cout << endl;\n      } else {\n        cout << \"\
    \ \";\n      }\n    }\n  }\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_C\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/graph/template.hpp\"\
    \n#include \"../../src/graph/warshall_floyd.hpp\"\n\nint main() {\n  int V, E;\n\
    \  cin >> V >> E;\n  WarshallFloyd<long long> wf(V);\n  for (int i = 0; i < E;\
    \ ++i) {\n    int s, t, d;\n    cin >> s >> t >> d;\n    wf.add_edge(s, t, d);\n\
    \  }\n  wf.build();\n  if (wf.has_negative_cycle()) {\n    cout << \"NEGATIVE\
    \ CYCLE\" << endl;\n    return 0;\n  }\n  for (int i = 0; i < V; ++i) {\n    for\
    \ (int j = 0; j < V; ++j) {\n      if (wf.is_unreachable(i, j)) {\n        cout\
    \ << \"INF\";\n      } else {\n        cout << wf.shortest_path_value(i, j);\n\
    \      }\n\n      if (j == V - 1) {\n        cout << endl;\n      } else {\n \
    \       cout << \" \";\n      }\n    }\n  }\n  return 0;\n}\n"
  dependsOn:
  - src/graph/template.hpp
  - src/graph/warshall_floyd.hpp
  isVerificationFile: true
  path: test/aoj/grl_1_c.test.cpp
  requiredBy: []
  timestamp: '2022-12-18 23:17:52+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/grl_1_c.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/grl_1_c.test.cpp
- /verify/test/aoj/grl_1_c.test.cpp.html
title: test/aoj/grl_1_c.test.cpp
---
