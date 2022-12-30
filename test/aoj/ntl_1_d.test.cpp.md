---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/math/euler_phi.hpp
    title: src/math/euler_phi.hpp
  - icon: ':heavy_check_mark:'
    path: src/math/prime_factor.hpp
    title: src/math/prime_factor.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_D
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_D
  bundledCode: "#line 1 \"test/aoj/ntl_1_d.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_D\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/math/euler_phi.hpp\"\
    \n\n#line 4 \"src/math/euler_phi.hpp\"\nusing namespace std;\n\n#line 2 \"src/math/prime_factor.hpp\"\
    \n\n#line 4 \"src/math/prime_factor.hpp\"\nusing namespace std;\n\ntemplate <typename\
    \ T = long long> map<T, T> prime_factor(T n) {\n  map<T, T> res;\n  for (T i =\
    \ 2; i * i <= n; ++i) {\n    while (n % i == 0) {\n      ++res[i];\n      n /=\
    \ i;\n    }\n  }\n  if (n != 1) {\n    res[n] = 1;\n  }\n  return res;\n}\n#line\
    \ 7 \"src/math/euler_phi.hpp\"\n\ntemplate <typename T = long long> T euler_phi(T\
    \ n) {\n  T res = n;\n  for (auto &p : prime_factor(n)) {\n    res -= res / p.first;\n\
    \  }\n  return res;\n}\n#line 8 \"test/aoj/ntl_1_d.test.cpp\"\n\nint main() {\n\
    \  long long n;\n  cin >> n;\n  cout << euler_phi(n) << endl;\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_D\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/math/euler_phi.hpp\"\
    \n\nint main() {\n  long long n;\n  cin >> n;\n  cout << euler_phi(n) << endl;\n\
    \  return 0;\n}\n"
  dependsOn:
  - src/math/euler_phi.hpp
  - src/math/prime_factor.hpp
  isVerificationFile: true
  path: test/aoj/ntl_1_d.test.cpp
  requiredBy: []
  timestamp: '2022-12-30 13:58:42+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/ntl_1_d.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/ntl_1_d.test.cpp
- /verify/test/aoj/ntl_1_d.test.cpp.html
title: test/aoj/ntl_1_d.test.cpp
---
