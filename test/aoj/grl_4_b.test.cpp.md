---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/graph/topological_sort.hpp
    title: src/graph/topological_sort.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/4/GRL_4_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/4/GRL_4_B
  bundledCode: "#line 1 \"test/aoj/grl_4_b.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/4/GRL_4_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/graph/topological_sort.hpp\"\
    \n\n#line 4 \"src/graph/topological_sort.hpp\"\nusing namespace std;\n\ntemplate\
    \ <typename T = int>\nvector<int> topological_sort(vector<vector<int>> g) {\n\
    \  vector<int> res;\n  vector<bool> seen(g.size());\n  auto dfs = [&](auto dfs,\
    \ int v) -> void {\n    seen[v] = true;\n    for (int to : g[v]) {\n      if (seen[to])\
    \ {\n        continue;\n      }\n      dfs(dfs, to);\n    }\n    res.push_back(v);\n\
    \  };\n  for (int v = 0; v < (int)g.size(); ++v) {\n    if (seen[v]) {\n     \
    \ continue;\n    }\n    dfs(dfs, v);\n  }\n  reverse(res.begin(), res.end());\n\
    \  return res;\n}\n#line 8 \"test/aoj/grl_4_b.test.cpp\"\n\nint main() {\n  int\
    \ V, E;\n  cin >> V >> E;\n  vector<vector<int>> g(V);\n  for (int i = 0; i <\
    \ E; ++i) {\n    int s, t;\n    cin >> s >> t;\n    g[s].push_back(t);\n  }\n\
    \  auto res = topological_sort(g);\n  for (int v : res) {\n    cout << v << endl;\n\
    \  }\n\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/4/GRL_4_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/graph/topological_sort.hpp\"\
    \n\nint main() {\n  int V, E;\n  cin >> V >> E;\n  vector<vector<int>> g(V);\n\
    \  for (int i = 0; i < E; ++i) {\n    int s, t;\n    cin >> s >> t;\n    g[s].push_back(t);\n\
    \  }\n  auto res = topological_sort(g);\n  for (int v : res) {\n    cout << v\
    \ << endl;\n  }\n\n  return 0;\n}\n"
  dependsOn:
  - src/graph/topological_sort.hpp
  isVerificationFile: true
  path: test/aoj/grl_4_b.test.cpp
  requiredBy: []
  timestamp: '2023-01-28 17:23:21+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/grl_4_b.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/grl_4_b.test.cpp
- /verify/test/aoj/grl_4_b.test.cpp.html
title: test/aoj/grl_4_b.test.cpp
---
