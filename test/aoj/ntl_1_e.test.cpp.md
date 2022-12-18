---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/math/ext_gcd.hpp
    title: src/math/ext_gcd.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_E
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_E
  bundledCode: "#line 1 \"test/aoj/ntl_1_e.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_E\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/math/ext_gcd.hpp\"\
    \n\n#line 4 \"src/math/ext_gcd.hpp\"\nusing namespace std;\n\ntemplate <typename\
    \ T = long long> T ext_gcd(T a, T b, T &x, T &y) {\n  if (b == 0) {\n    x = 1;\n\
    \    y = 0;\n    return a;\n  }\n  long long d = ext_gcd(b, a % b, y, x);\n  y\
    \ -= a / b * x;\n  return d;\n}\n#line 8 \"test/aoj/ntl_1_e.test.cpp\"\n\nint\
    \ main() {\n  int a, b;\n  cin >> a >> b;\n  int x, y;\n  ext_gcd(a, b, x, y);\n\
    \  cout << x << \" \" << y << endl;\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_E\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/math/ext_gcd.hpp\"\
    \n\nint main() {\n  int a, b;\n  cin >> a >> b;\n  int x, y;\n  ext_gcd(a, b,\
    \ x, y);\n  cout << x << \" \" << y << endl;\n  return 0;\n}\n"
  dependsOn:
  - src/math/ext_gcd.hpp
  isVerificationFile: true
  path: test/aoj/ntl_1_e.test.cpp
  requiredBy: []
  timestamp: '2022-12-18 20:53:53+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/ntl_1_e.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/ntl_1_e.test.cpp
- /verify/test/aoj/ntl_1_e.test.cpp.html
title: test/aoj/ntl_1_e.test.cpp
---
