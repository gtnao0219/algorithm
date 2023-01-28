---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/graph/cycle_detection.hpp
    title: src/graph/cycle_detection.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/4/GRL_4_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/4/GRL_4_A
  bundledCode: "#line 1 \"test/aoj/grl_4_a.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/4/GRL_4_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/graph/cycle_detection.hpp\"\
    \n\n#line 4 \"src/graph/cycle_detection.hpp\"\nusing namespace std;\n\ntemplate\
    \ <typename T = int> bool cycle_detection(vector<vector<int>> g) {\n  bool has_cycle\
    \ = false;\n  vector<bool> seen(g.size());\n  vector<bool> finished(g.size());\n\
    \  auto dfs = [&](auto dfs, int v, int parent) -> void {\n    seen[v] = true;\n\
    \    for (int to : g[v]) {\n      if (to == parent) {\n        continue;\n   \
    \   }\n      if (finished[to]) {\n        continue;\n      }\n      if (seen[to]\
    \ && !finished[to]) {\n        has_cycle = true;\n        return;\n      }\n \
    \     dfs(dfs, to, v);\n      if (has_cycle) {\n        return;\n      }\n   \
    \ }\n    finished[v] = true;\n  };\n  for (int v = 0; v < (int)g.size(); ++v)\
    \ {\n    if (seen[v]) {\n      continue;\n    }\n    dfs(dfs, v, -1);\n  }\n \
    \ return has_cycle;\n}\n#line 8 \"test/aoj/grl_4_a.test.cpp\"\n\nint main() {\n\
    \  int V, E;\n  cin >> V >> E;\n  vector<vector<int>> g(V);\n  for (int i = 0;\
    \ i < E; ++i) {\n    int s, t;\n    cin >> s >> t;\n    g[s].push_back(t);\n \
    \ }\n  auto res = cycle_detection(g);\n  cout << (res ? 1 : 0) << endl;\n\n  return\
    \ 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/4/GRL_4_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/graph/cycle_detection.hpp\"\
    \n\nint main() {\n  int V, E;\n  cin >> V >> E;\n  vector<vector<int>> g(V);\n\
    \  for (int i = 0; i < E; ++i) {\n    int s, t;\n    cin >> s >> t;\n    g[s].push_back(t);\n\
    \  }\n  auto res = cycle_detection(g);\n  cout << (res ? 1 : 0) << endl;\n\n \
    \ return 0;\n}\n"
  dependsOn:
  - src/graph/cycle_detection.hpp
  isVerificationFile: true
  path: test/aoj/grl_4_a.test.cpp
  requiredBy: []
  timestamp: '2023-01-28 17:23:21+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/grl_4_a.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/grl_4_a.test.cpp
- /verify/test/aoj/grl_4_a.test.cpp.html
title: test/aoj/grl_4_a.test.cpp
---
