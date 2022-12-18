---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/math/is_prime.hpp
    title: src/math/is_prime.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/1/ALDS1_1_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/1/ALDS1_1_C
  bundledCode: "#line 1 \"test/aoj/alds1_1_c.test.cpp\"\n#define PROBLEM         \
    \                                                       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/1/ALDS1_1_C\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/math/is_prime.hpp\"\
    \n\n#line 4 \"src/math/is_prime.hpp\"\nusing namespace std;\n\ntemplate <typename\
    \ T = long long> bool is_prime(T n) {\n  for (T i = 2; i * i <= n; ++i) {\n  \
    \  if (n % i == 0) {\n      return false;\n    }\n  }\n  return true;\n}\n#line\
    \ 8 \"test/aoj/alds1_1_c.test.cpp\"\n\nint main() {\n  int n;\n  cin >> n;\n \
    \ int ans = 0;\n  for (int i = 0; i < n; ++i) {\n    int a;\n    cin >> a;\n \
    \   if (is_prime(a)) {\n      ++ans;\n    }\n  }\n  cout << ans << endl;\n  return\
    \ 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/1/ALDS1_1_C\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/math/is_prime.hpp\"\
    \n\nint main() {\n  int n;\n  cin >> n;\n  int ans = 0;\n  for (int i = 0; i <\
    \ n; ++i) {\n    int a;\n    cin >> a;\n    if (is_prime(a)) {\n      ++ans;\n\
    \    }\n  }\n  cout << ans << endl;\n  return 0;\n}\n"
  dependsOn:
  - src/math/is_prime.hpp
  isVerificationFile: true
  path: test/aoj/alds1_1_c.test.cpp
  requiredBy: []
  timestamp: '2022-12-18 20:53:53+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/alds1_1_c.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/alds1_1_c.test.cpp
- /verify/test/aoj/alds1_1_c.test.cpp.html
title: test/aoj/alds1_1_c.test.cpp
---
