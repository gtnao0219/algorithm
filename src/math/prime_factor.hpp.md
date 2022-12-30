---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: src/math/euler_phi.hpp
    title: src/math/euler_phi.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/ntl_1_a.test.cpp
    title: test/aoj/ntl_1_a.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj/ntl_1_d.test.cpp
    title: test/aoj/ntl_1_d.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/math/prime_factor.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ntemplate <typename T = long long> map<T, T> prime_factor(T\
    \ n) {\n  map<T, T> res;\n  for (T i = 2; i * i <= n; ++i) {\n    while (n % i\
    \ == 0) {\n      ++res[i];\n      n /= i;\n    }\n  }\n  if (n != 1) {\n    res[n]\
    \ = 1;\n  }\n  return res;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T = long long> map<T, T> prime_factor(T n) {\n  map<T, T> res;\n \
    \ for (T i = 2; i * i <= n; ++i) {\n    while (n % i == 0) {\n      ++res[i];\n\
    \      n /= i;\n    }\n  }\n  if (n != 1) {\n    res[n] = 1;\n  }\n  return res;\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: src/math/prime_factor.hpp
  requiredBy:
  - src/math/euler_phi.hpp
  timestamp: '2022-12-18 20:53:53+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/ntl_1_d.test.cpp
  - test/aoj/ntl_1_a.test.cpp
documentation_of: src/math/prime_factor.hpp
layout: document
redirect_from:
- /library/src/math/prime_factor.hpp
- /library/src/math/prime_factor.hpp.html
title: src/math/prime_factor.hpp
---
