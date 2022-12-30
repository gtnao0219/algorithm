---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/math/prime_factor.hpp
    title: src/math/prime_factor.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/ntl_1_d.test.cpp
    title: test/aoj/ntl_1_d.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/math/euler_phi.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\n#line 2 \"src/math/prime_factor.hpp\"\n\n#line 4 \"src/math/prime_factor.hpp\"\
    \nusing namespace std;\n\ntemplate <typename T = long long> map<T, T> prime_factor(T\
    \ n) {\n  map<T, T> res;\n  for (T i = 2; i * i <= n; ++i) {\n    while (n % i\
    \ == 0) {\n      ++res[i];\n      n /= i;\n    }\n  }\n  if (n != 1) {\n    res[n]\
    \ = 1;\n  }\n  return res;\n}\n#line 7 \"src/math/euler_phi.hpp\"\n\ntemplate\
    \ <typename T = long long> T euler_phi(T n) {\n  T res = n;\n  for (auto &p :\
    \ prime_factor(n)) {\n    res -= res / p.first;\n  }\n  return res;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include\
    \ \"./prime_factor.hpp\"\n\ntemplate <typename T = long long> T euler_phi(T n)\
    \ {\n  T res = n;\n  for (auto &p : prime_factor(n)) {\n    res -= res / p.first;\n\
    \  }\n  return res;\n}\n"
  dependsOn:
  - src/math/prime_factor.hpp
  isVerificationFile: false
  path: src/math/euler_phi.hpp
  requiredBy: []
  timestamp: '2022-12-30 13:58:42+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/ntl_1_d.test.cpp
documentation_of: src/math/euler_phi.hpp
layout: document
redirect_from:
- /library/src/math/euler_phi.hpp
- /library/src/math/euler_phi.hpp.html
title: src/math/euler_phi.hpp
---
