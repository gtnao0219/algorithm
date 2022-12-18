---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/math/gcd.hpp
    title: src/math/gcd.hpp
  - icon: ':heavy_check_mark:'
    path: src/math/lcm.hpp
    title: src/math/lcm.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C
  bundledCode: "#line 1 \"test/aoj/ntl_1_c.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/math/lcm.hpp\"\
    \n\n#line 4 \"src/math/lcm.hpp\"\nusing namespace std;\n\n#line 2 \"src/math/gcd.hpp\"\
    \n\n#line 4 \"src/math/gcd.hpp\"\nusing namespace std;\n\ntemplate <typename T\
    \ = long long> T gcd(T a, T b) {\n  if (b == 0) {\n    return a;\n  }\n  return\
    \ gcd(b, a % b);\n}\n#line 7 \"src/math/lcm.hpp\"\n\ntemplate <typename T = long\
    \ long> T lcm(T a, T b) { return a / gcd(a, b) * b; }\n#line 8 \"test/aoj/ntl_1_c.test.cpp\"\
    \n\nint main() {\n  int n;\n  cin >> n;\n  long long ans = 1;\n  for (int i =\
    \ 0; i < n; ++i) {\n    long long a;\n    cin >> a;\n    ans = lcm(ans, a);\n\
    \  }\n  cout << ans << endl;\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_C\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/math/lcm.hpp\"\
    \n\nint main() {\n  int n;\n  cin >> n;\n  long long ans = 1;\n  for (int i =\
    \ 0; i < n; ++i) {\n    long long a;\n    cin >> a;\n    ans = lcm(ans, a);\n\
    \  }\n  cout << ans << endl;\n  return 0;\n}\n"
  dependsOn:
  - src/math/lcm.hpp
  - src/math/gcd.hpp
  isVerificationFile: true
  path: test/aoj/ntl_1_c.test.cpp
  requiredBy: []
  timestamp: '2022-12-18 21:24:00+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/ntl_1_c.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/ntl_1_c.test.cpp
- /verify/test/aoj/ntl_1_c.test.cpp.html
title: test/aoj/ntl_1_c.test.cpp
---
