---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/grl_4_b.test.cpp
    title: test/aoj/grl_4_b.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/graph/topological_sort.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ntemplate <typename T = int>\nvector<int> topological_sort(vector<vector<int>>\
    \ g) {\n  vector<int> res;\n  vector<bool> seen(g.size());\n  auto dfs = [&](auto\
    \ dfs, int v) -> void {\n    seen[v] = true;\n    for (int to : g[v]) {\n    \
    \  if (seen[to]) {\n        continue;\n      }\n      dfs(dfs, to);\n    }\n \
    \   res.push_back(v);\n  };\n  for (int v = 0; v < (int)g.size(); ++v) {\n   \
    \ if (seen[v]) {\n      continue;\n    }\n    dfs(dfs, v);\n  }\n  reverse(res.begin(),\
    \ res.end());\n  return res;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T = int>\nvector<int> topological_sort(vector<vector<int>> g) {\n\
    \  vector<int> res;\n  vector<bool> seen(g.size());\n  auto dfs = [&](auto dfs,\
    \ int v) -> void {\n    seen[v] = true;\n    for (int to : g[v]) {\n      if (seen[to])\
    \ {\n        continue;\n      }\n      dfs(dfs, to);\n    }\n    res.push_back(v);\n\
    \  };\n  for (int v = 0; v < (int)g.size(); ++v) {\n    if (seen[v]) {\n     \
    \ continue;\n    }\n    dfs(dfs, v);\n  }\n  reverse(res.begin(), res.end());\n\
    \  return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/graph/topological_sort.hpp
  requiredBy: []
  timestamp: '2023-01-28 17:23:21+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/grl_4_b.test.cpp
documentation_of: src/graph/topological_sort.hpp
layout: document
redirect_from:
- /library/src/graph/topological_sort.hpp
- /library/src/graph/topological_sort.hpp.html
title: src/graph/topological_sort.hpp
---
