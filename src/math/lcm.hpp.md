---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/math/gcd.hpp
    title: src/math/gcd.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/ntl_1_c.test.cpp
    title: test/aoj/ntl_1_c.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/math/lcm.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#line 2 \"src/math/gcd.hpp\"\n\n#line 4 \"src/math/gcd.hpp\"\nusing\
    \ namespace std;\n\ntemplate <typename T = long long> T gcd(T a, T b) {\n  if\
    \ (b == 0) {\n    return a;\n  }\n  return gcd(b, a % b);\n}\n#line 7 \"src/math/lcm.hpp\"\
    \n\ntemplate <typename T = long long> T lcm(T a, T b) { return a / gcd(a, b) *\
    \ b; }\n"
  code: '#pragma once


    #include <bits/stdc++.h>

    using namespace std;


    #include "gcd.hpp"


    template <typename T = long long> T lcm(T a, T b) { return a / gcd(a, b) * b;
    }

    '
  dependsOn:
  - src/math/gcd.hpp
  isVerificationFile: false
  path: src/math/lcm.hpp
  requiredBy: []
  timestamp: '2022-12-18 20:53:53+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/ntl_1_c.test.cpp
documentation_of: src/math/lcm.hpp
layout: document
redirect_from:
- /library/src/math/lcm.hpp
- /library/src/math/lcm.hpp.html
title: src/math/lcm.hpp
---
