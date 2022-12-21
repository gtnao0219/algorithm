---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo_judge/zalgorithm.test.cpp
    title: test/yosupo_judge/zalgorithm.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/string/z_algorithm.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ntemplate <typename T = int> vector<T> z_algorithm(string\
    \ s) {\n  int n = s.size();\n  vector<T> res(n, 0);\n  res[0] = n;\n  int i =\
    \ 1, j = 0;\n  while (i < n) {\n    while (i + j < n && s[j] == s[i + j]) {\n\
    \      ++j;\n    }\n    res[i] = j;\n    if (j == 0) {\n      ++i;\n      continue;\n\
    \    }\n    int k = 1;\n    while (i + k < n && k + res[k] < j) {\n      res[i\
    \ + k] = res[k];\n      ++k;\n    }\n    i += k;\n    j -= k;\n  }\n  return res;\n\
    }\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T = int> vector<T> z_algorithm(string s) {\n  int n = s.size();\n\
    \  vector<T> res(n, 0);\n  res[0] = n;\n  int i = 1, j = 0;\n  while (i < n) {\n\
    \    while (i + j < n && s[j] == s[i + j]) {\n      ++j;\n    }\n    res[i] =\
    \ j;\n    if (j == 0) {\n      ++i;\n      continue;\n    }\n    int k = 1;\n\
    \    while (i + k < n && k + res[k] < j) {\n      res[i + k] = res[k];\n     \
    \ ++k;\n    }\n    i += k;\n    j -= k;\n  }\n  return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/string/z_algorithm.hpp
  requiredBy: []
  timestamp: '2022-12-22 01:59:18+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo_judge/zalgorithm.test.cpp
documentation_of: src/string/z_algorithm.hpp
layout: document
redirect_from:
- /library/src/string/z_algorithm.hpp
- /library/src/string/z_algorithm.hpp.html
title: src/string/z_algorithm.hpp
---
