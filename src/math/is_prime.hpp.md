---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/alds1_1_c.test.cpp
    title: test/aoj/alds1_1_c.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/math/is_prime.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\ntemplate <typename T = long long> bool is_prime(T n) {\n \
    \ for (T i = 2; i * i <= n; ++i) {\n    if (n % i == 0) {\n      return false;\n\
    \    }\n  }\n  return true;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T = long long> bool is_prime(T n) {\n  for (T i = 2; i * i <= n; ++i)\
    \ {\n    if (n % i == 0) {\n      return false;\n    }\n  }\n  return true;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: src/math/is_prime.hpp
  requiredBy: []
  timestamp: '2022-12-18 20:53:53+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/alds1_1_c.test.cpp
documentation_of: src/math/is_prime.hpp
layout: document
redirect_from:
- /library/src/math/is_prime.hpp
- /library/src/math/is_prime.hpp.html
title: src/math/is_prime.hpp
---
