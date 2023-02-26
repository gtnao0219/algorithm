---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: src/search/bfs/topological_sort.hpp
    title: src/search/bfs/topological_sort.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/4/GRL_4_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/4/GRL_4_B
  bundledCode: "#line 1 \"test/aoj/grl_4_b_2.test.cpp\"\n#define PROBLEM         \
    \                                                       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/4/GRL_4_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/search/bfs/topological_sort.hpp\"\
    \n\n#line 4 \"src/search/bfs/topological_sort.hpp\"\nusing namespace std;\n\n\
    vector<int> topological_sort(const vector<vector<int>> &g) {\n  int n = g.size();\n\
    \  vector<int> deg(n);\n  for (int i = 0; i < n; ++i) {\n    for (int to : g[i])\
    \ {\n      ++deg[to];\n    }\n  }\n  queue<int> que;\n  for (int i = 0; i < n;\
    \ ++i) {\n    if (deg[i] == 0) {\n      que.push(i);\n    }\n  }\n  vector<int>\
    \ res;\n  while (!que.empty()) {\n    int v = que.front();\n    que.pop();\n \
    \   res.push_back(v);\n    for (int to : g[v]) {\n      --deg[to];\n      if (deg[to]\
    \ == 0) {\n        que.push(to);\n      }\n    }\n  }\n  return res;\n}\n#line\
    \ 8 \"test/aoj/grl_4_b_2.test.cpp\"\n\nint main() {\n  int V, E;\n  cin >> V >>\
    \ E;\n  vector<vector<int>> g(V);\n  for (int i = 0; i < E; ++i) {\n    int s,\
    \ t;\n    cin >> s >> t;\n    g[s].push_back(t);\n  }\n  auto res = topological_sort(g);\n\
    \  for (int v : res) {\n    cout << v << endl;\n  }\n\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/4/GRL_4_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/search/bfs/topological_sort.hpp\"\
    \n\nint main() {\n  int V, E;\n  cin >> V >> E;\n  vector<vector<int>> g(V);\n\
    \  for (int i = 0; i < E; ++i) {\n    int s, t;\n    cin >> s >> t;\n    g[s].push_back(t);\n\
    \  }\n  auto res = topological_sort(g);\n  for (int v : res) {\n    cout << v\
    \ << endl;\n  }\n\n  return 0;\n}\n"
  dependsOn:
  - src/search/bfs/topological_sort.hpp
  isVerificationFile: true
  path: test/aoj/grl_4_b_2.test.cpp
  requiredBy: []
  timestamp: '2023-02-27 02:38:54+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/aoj/grl_4_b_2.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/grl_4_b_2.test.cpp
- /verify/test/aoj/grl_4_b_2.test.cpp.html
title: test/aoj/grl_4_b_2.test.cpp
---
