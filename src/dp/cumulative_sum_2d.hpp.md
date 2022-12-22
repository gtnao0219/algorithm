---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/0560.test.cpp
    title: test/aoj/0560.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/dp/cumulative_sum_2d.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ntemplate <typename T> struct CumulativeSum2d {\nprivate:\n\
    \  vector<vector<T>> s;\n\npublic:\n  CumulativeSum2d(const vector<vector<T>>\
    \ &grid) {\n    int h = grid.size();\n    int w = grid[0].size();\n    s.resize(h\
    \ + 1, vector<T>(w + 1, 0));\n    for (int i = 0; i < h; ++i) {\n      for (int\
    \ j = 0; j < w; ++j) {\n        s[i + 1][j + 1] = s[i][j + 1] + s[i + 1][j] -\
    \ s[i][j] + grid[i][j];\n      }\n    }\n  }\n\n  // [x1, x2) [y1, y2), x1 and\
    \ x2, y1, y2 is 0-indexed.\n  T sum(int x1, int y1, int y2, int x2) {\n    return\
    \ s[y2][x2] - s[y1][x2] - s[y2][x1] + s[y1][x1];\n  }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T> struct CumulativeSum2d {\nprivate:\n  vector<vector<T>> s;\n\n\
    public:\n  CumulativeSum2d(const vector<vector<T>> &grid) {\n    int h = grid.size();\n\
    \    int w = grid[0].size();\n    s.resize(h + 1, vector<T>(w + 1, 0));\n    for\
    \ (int i = 0; i < h; ++i) {\n      for (int j = 0; j < w; ++j) {\n        s[i\
    \ + 1][j + 1] = s[i][j + 1] + s[i + 1][j] - s[i][j] + grid[i][j];\n      }\n \
    \   }\n  }\n\n  // [x1, x2) [y1, y2), x1 and x2, y1, y2 is 0-indexed.\n  T sum(int\
    \ x1, int y1, int y2, int x2) {\n    return s[y2][x2] - s[y1][x2] - s[y2][x1]\
    \ + s[y1][x1];\n  }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/dp/cumulative_sum_2d.hpp
  requiredBy: []
  timestamp: '2022-12-23 01:44:09+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/0560.test.cpp
documentation_of: src/dp/cumulative_sum_2d.hpp
layout: document
redirect_from:
- /library/src/dp/cumulative_sum_2d.hpp
- /library/src/dp/cumulative_sum_2d.hpp.html
title: src/dp/cumulative_sum_2d.hpp
---
