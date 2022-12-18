---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: src/math/lcm.hpp
    title: src/math/lcm.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/math/gcd.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\ntemplate <typename T = long long> T gcd(T a, T b) {\n  if (b == 0) {\n\
    \    return a;\n  }\n  return gcd(b, a % b);\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T = long long> T gcd(T a, T b) {\n  if (b == 0) {\n    return a;\n\
    \  }\n  return gcd(b, a % b);\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/math/gcd.hpp
  requiredBy:
  - src/math/lcm.hpp
  timestamp: '2022-12-18 20:53:53+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/math/gcd.hpp
layout: document
redirect_from:
- /library/src/math/gcd.hpp
- /library/src/math/gcd.hpp.html
title: src/math/gcd.hpp
---
