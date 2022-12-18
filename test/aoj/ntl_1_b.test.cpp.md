---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/math/mod_pow.hpp
    title: src/math/mod_pow.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B
  bundledCode: "#line 1 \"test/aoj/ntl_1_b.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/math/mod_pow.hpp\"\
    \n\n#line 4 \"src/math/mod_pow.hpp\"\nusing namespace std;\n\ntemplate <typename\
    \ T = long long> T mod_pow(T a, T n, T mod) {\n  T res = 1;\n  while (n > 0) {\n\
    \    if (n & 1) {\n      res = res * a % mod;\n    }\n    a = a * a % mod;\n \
    \   n >>= 1;\n  }\n  return res;\n}\n#line 8 \"test/aoj/ntl_1_b.test.cpp\"\n\n\
    int main() {\n  long long m, n;\n  cin >> m >> n;\n  cout << mod_pow(m, n, 1000000007LL)\
    \ << endl;\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/math/mod_pow.hpp\"\
    \n\nint main() {\n  long long m, n;\n  cin >> m >> n;\n  cout << mod_pow(m, n,\
    \ 1000000007LL) << endl;\n  return 0;\n}\n"
  dependsOn:
  - src/math/mod_pow.hpp
  isVerificationFile: true
  path: test/aoj/ntl_1_b.test.cpp
  requiredBy: []
  timestamp: '2022-12-18 23:03:49+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/ntl_1_b.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/ntl_1_b.test.cpp
- /verify/test/aoj/ntl_1_b.test.cpp.html
title: test/aoj/ntl_1_b.test.cpp
---
