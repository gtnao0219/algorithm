---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/atp1_3_d.test.cpp
    title: test/aoj/atp1_3_d.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/math/divisor.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\ntemplate <typename T = long long> vector<T> divisor(T n) {\n\
    \  vector<T> res;\n  for (T i = 1; i * i <= n; ++i) {\n    if (n % i == 0) {\n\
    \      res.push_back(i);\n      if (i * i != n) {\n        res.push_back(n / i);\n\
    \      }\n    }\n  }\n  sort(res.begin(), res.end());\n  return res;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T = long long> vector<T> divisor(T n) {\n  vector<T> res;\n  for (T\
    \ i = 1; i * i <= n; ++i) {\n    if (n % i == 0) {\n      res.push_back(i);\n\
    \      if (i * i != n) {\n        res.push_back(n / i);\n      }\n    }\n  }\n\
    \  sort(res.begin(), res.end());\n  return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/math/divisor.hpp
  requiredBy: []
  timestamp: '2022-12-18 20:53:53+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/atp1_3_d.test.cpp
documentation_of: src/math/divisor.hpp
layout: document
redirect_from:
- /library/src/math/divisor.hpp
- /library/src/math/divisor.hpp.html
title: src/math/divisor.hpp
---
