---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/ntl_1_b.test.cpp
    title: test/aoj/ntl_1_b.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/math/mod_pow.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\ntemplate <typename T = long long> T mod_pow(T a, T n, T mod)\
    \ {\n  T res = 1;\n  while (n > 0) {\n    if (n & 1) {\n      res = res * a %\
    \ mod;\n    }\n    a = a * a % mod;\n    n >>= 1;\n  }\n  return res;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T = long long> T mod_pow(T a, T n, T mod) {\n  T res = 1;\n  while\
    \ (n > 0) {\n    if (n & 1) {\n      res = res * a % mod;\n    }\n    a = a *\
    \ a % mod;\n    n >>= 1;\n  }\n  return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/math/mod_pow.hpp
  requiredBy: []
  timestamp: '2022-12-18 23:03:49+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/ntl_1_b.test.cpp
documentation_of: src/math/mod_pow.hpp
layout: document
redirect_from:
- /library/src/math/mod_pow.hpp
- /library/src/math/mod_pow.hpp.html
title: src/math/mod_pow.hpp
---
