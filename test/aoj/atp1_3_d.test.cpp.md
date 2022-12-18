---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/math/divisor.hpp
    title: src/math/divisor.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/3/ITP1_3_D
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/3/ITP1_3_D
  bundledCode: "#line 1 \"test/aoj/atp1_3_d.test.cpp\"\n#define PROBLEM          \
    \                                                      \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/3/ITP1_3_D\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/math/divisor.hpp\"\
    \n\n#line 4 \"src/math/divisor.hpp\"\nusing namespace std;\n\ntemplate <typename\
    \ T = long long> vector<T> divisor(T n) {\n  vector<T> res;\n  for (T i = 1; i\
    \ * i <= n; ++i) {\n    if (n % i == 0) {\n      res.push_back(i);\n      if (i\
    \ * i != n) {\n        res.push_back(n / i);\n      }\n    }\n  }\n  sort(res.begin(),\
    \ res.end());\n  return res;\n}\n#line 8 \"test/aoj/atp1_3_d.test.cpp\"\n\nint\
    \ main() {\n  int a, b, c;\n  cin >> a >> b >> c;\n  int ans = 0;\n  for (auto\
    \ d : divisor(c)) {\n    if (a <= d && d <= b) {\n      ++ans;\n    }\n  }\n \
    \ cout << ans << endl;\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/3/ITP1_3_D\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/math/divisor.hpp\"\
    \n\nint main() {\n  int a, b, c;\n  cin >> a >> b >> c;\n  int ans = 0;\n  for\
    \ (auto d : divisor(c)) {\n    if (a <= d && d <= b) {\n      ++ans;\n    }\n\
    \  }\n  cout << ans << endl;\n  return 0;\n}\n"
  dependsOn:
  - src/math/divisor.hpp
  isVerificationFile: true
  path: test/aoj/atp1_3_d.test.cpp
  requiredBy: []
  timestamp: '2022-12-18 20:53:53+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/atp1_3_d.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/atp1_3_d.test.cpp
- /verify/test/aoj/atp1_3_d.test.cpp.html
title: test/aoj/atp1_3_d.test.cpp
---
