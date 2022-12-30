---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/2286.test.cpp
    title: test/aoj/2286.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/math/euler_phi_table.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ntemplate <typename T = int> vector<T> euler_phi_table(T\
    \ n) {\n  vector<T> res(n + 1);\n  for (T i = 0; i <= n; ++i) {\n    res[i] =\
    \ i;\n  }\n  for (T i = 2; i <= n; ++i) {\n    if (res[i] == i) {\n      for (T\
    \ j = i; j <= n; j += i) {\n        res[j] -= res[j] / i;\n      }\n    }\n  }\n\
    \  return res;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T = int> vector<T> euler_phi_table(T n) {\n  vector<T> res(n + 1);\n\
    \  for (T i = 0; i <= n; ++i) {\n    res[i] = i;\n  }\n  for (T i = 2; i <= n;\
    \ ++i) {\n    if (res[i] == i) {\n      for (T j = i; j <= n; j += i) {\n    \
    \    res[j] -= res[j] / i;\n      }\n    }\n  }\n  return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/math/euler_phi_table.hpp
  requiredBy: []
  timestamp: '2022-12-30 14:22:43+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/2286.test.cpp
documentation_of: src/math/euler_phi_table.hpp
layout: document
redirect_from:
- /library/src/math/euler_phi_table.hpp
- /library/src/math/euler_phi_table.hpp.html
title: src/math/euler_phi_table.hpp
---
