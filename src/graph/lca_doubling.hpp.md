---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/graph/lca_doubling.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ntemplate <typename T> struct LCADoubling {\nprivate:\n\
    \  int v;\n  int root;\n  int h;\n  vector<vector<int>> parent;\n  vector<int>\
    \ depth;\n  vector<vector<int>> g;\n\npublic:\n  LCADoubling(int v, int root)\
    \ : v(v), root(root), depth(v, -1), g(v) {\n    h = 1;\n    while ((1 << h) <\
    \ v) {\n      ++h;\n    }\n    parent.assign(h, vector<int>(v, -1));\n  }\n  void\
    \ add_edge(int start, int to) { g[start].push_back(to); }\n  void build() {\n\
    \    dfs(root, -1, 0);\n    for (int i = 0; i + 1 < parent.size(); ++i) {\n  \
    \    for (int j = 0; j < v; ++j) {\n        if (parent[i][j] != -1)\n        \
    \  parent[i + 1][j] = parent[i][parent[i][j]];\n      }\n    }\n  }\n  int get(int\
    \ u, int v) {\n    if (depth[u] > depth[v])\n      swap(u, v);\n    for (int i\
    \ = 0; i < parent.size(); ++i) {\n      if ((depth[v] - depth[u]) & (1 << i))\n\
    \        v = parent[i][v];\n    }\n    if (u == v)\n      return u;\n    for (int\
    \ i = parent.size() - 1; i >= 0; --i) {\n      if (parent[i][u] != parent[i][v])\
    \ {\n        u = parent[i][u];\n        v = parent[i][v];\n      }\n    }\n  \
    \  return parent[0][u];\n  }\n  void dfs(int v, int p, int d) {\n    parent[0][v]\
    \ = p;\n    depth[v] = d;\n    for (int e : g[v])\n      if (e != p)\n       \
    \ dfs(e, v, d + 1);\n  }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T> struct LCADoubling {\nprivate:\n  int v;\n  int root;\n  int h;\n\
    \  vector<vector<int>> parent;\n  vector<int> depth;\n  vector<vector<int>> g;\n\
    \npublic:\n  LCADoubling(int v, int root) : v(v), root(root), depth(v, -1), g(v)\
    \ {\n    h = 1;\n    while ((1 << h) < v) {\n      ++h;\n    }\n    parent.assign(h,\
    \ vector<int>(v, -1));\n  }\n  void add_edge(int start, int to) { g[start].push_back(to);\
    \ }\n  void build() {\n    dfs(root, -1, 0);\n    for (int i = 0; i + 1 < parent.size();\
    \ ++i) {\n      for (int j = 0; j < v; ++j) {\n        if (parent[i][j] != -1)\n\
    \          parent[i + 1][j] = parent[i][parent[i][j]];\n      }\n    }\n  }\n\
    \  int get(int u, int v) {\n    if (depth[u] > depth[v])\n      swap(u, v);\n\
    \    for (int i = 0; i < parent.size(); ++i) {\n      if ((depth[v] - depth[u])\
    \ & (1 << i))\n        v = parent[i][v];\n    }\n    if (u == v)\n      return\
    \ u;\n    for (int i = parent.size() - 1; i >= 0; --i) {\n      if (parent[i][u]\
    \ != parent[i][v]) {\n        u = parent[i][u];\n        v = parent[i][v];\n \
    \     }\n    }\n    return parent[0][u];\n  }\n  void dfs(int v, int p, int d)\
    \ {\n    parent[0][v] = p;\n    depth[v] = d;\n    for (int e : g[v])\n      if\
    \ (e != p)\n        dfs(e, v, d + 1);\n  }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/graph/lca_doubling.hpp
  requiredBy: []
  timestamp: '2023-02-26 20:43:03+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/graph/lca_doubling.hpp
layout: document
redirect_from:
- /library/src/graph/lca_doubling.hpp
- /library/src/graph/lca_doubling.hpp.html
title: src/graph/lca_doubling.hpp
---
