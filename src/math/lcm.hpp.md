---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: src/math/gcd.hpp
    title: src/math/gcd.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
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
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/math/lcm.hpp
layout: document
redirect_from:
- /library/src/math/lcm.hpp
- /library/src/math/lcm.hpp.html
title: src/math/lcm.hpp
---
