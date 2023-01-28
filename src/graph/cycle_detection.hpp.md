---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_4_a.test.cpp
    title: test/aoj/grl_4_a.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/graph/cycle_detection.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ntemplate <typename T = int> bool cycle_detection(vector<vector<int>>\
    \ g) {\n  bool has_cycle = false;\n  vector<bool> seen(g.size());\n  vector<bool>\
    \ finished(g.size());\n  auto dfs = [&](auto dfs, int v, int parent) -> void {\n\
    \    seen[v] = true;\n    for (int to : g[v]) {\n      if (to == parent) {\n \
    \       continue;\n      }\n      if (finished[to]) {\n        continue;\n   \
    \   }\n      if (seen[to] && !finished[to]) {\n        has_cycle = true;\n   \
    \     return;\n      }\n      dfs(dfs, to, v);\n      if (has_cycle) {\n     \
    \   return;\n      }\n    }\n    finished[v] = true;\n  };\n  for (int v = 0;\
    \ v < (int)g.size(); ++v) {\n    if (seen[v]) {\n      continue;\n    }\n    dfs(dfs,\
    \ v, -1);\n  }\n  return has_cycle;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T = int> bool cycle_detection(vector<vector<int>> g) {\n  bool has_cycle\
    \ = false;\n  vector<bool> seen(g.size());\n  vector<bool> finished(g.size());\n\
    \  auto dfs = [&](auto dfs, int v, int parent) -> void {\n    seen[v] = true;\n\
    \    for (int to : g[v]) {\n      if (to == parent) {\n        continue;\n   \
    \   }\n      if (finished[to]) {\n        continue;\n      }\n      if (seen[to]\
    \ && !finished[to]) {\n        has_cycle = true;\n        return;\n      }\n \
    \     dfs(dfs, to, v);\n      if (has_cycle) {\n        return;\n      }\n   \
    \ }\n    finished[v] = true;\n  };\n  for (int v = 0; v < (int)g.size(); ++v)\
    \ {\n    if (seen[v]) {\n      continue;\n    }\n    dfs(dfs, v, -1);\n  }\n \
    \ return has_cycle;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/graph/cycle_detection.hpp
  requiredBy: []
  timestamp: '2023-01-28 17:23:21+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/grl_4_a.test.cpp
documentation_of: src/graph/cycle_detection.hpp
layout: document
redirect_from:
- /library/src/graph/cycle_detection.hpp
- /library/src/graph/cycle_detection.hpp.html
title: src/graph/cycle_detection.hpp
---
