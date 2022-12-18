---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/ntl_1_e.test.cpp
    title: test/aoj/ntl_1_e.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/math/ext_gcd.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\ntemplate <typename T = long long> T ext_gcd(T a, T b, T &x,\
    \ T &y) {\n  if (b == 0) {\n    x = 1;\n    y = 0;\n    return a;\n  }\n  long\
    \ long d = ext_gcd(b, a % b, y, x);\n  y -= a / b * x;\n  return d;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T = long long> T ext_gcd(T a, T b, T &x, T &y) {\n  if (b == 0) {\n\
    \    x = 1;\n    y = 0;\n    return a;\n  }\n  long long d = ext_gcd(b, a % b,\
    \ y, x);\n  y -= a / b * x;\n  return d;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/math/ext_gcd.hpp
  requiredBy: []
  timestamp: '2022-12-18 20:53:53+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/ntl_1_e.test.cpp
documentation_of: src/math/ext_gcd.hpp
layout: document
redirect_from:
- /library/src/math/ext_gcd.hpp
- /library/src/math/ext_gcd.hpp.html
title: src/math/ext_gcd.hpp
---
