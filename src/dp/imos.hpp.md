---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/dsl_5_a.test.cpp
    title: test/aoj/dsl_5_a.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/dp/imos.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\ntemplate <typename T> struct ImosInterval {\n  // [l, r), l and r is\
    \ 0-indexed.\n  int l, r;\n  T v;\n};\n\ntemplate <typename T> struct Imos {\n\
    private:\n  int n;\n  vector<T> s;\n\npublic:\n  Imos(int n, const vector<ImosInterval<T>>\
    \ &intervals) : n(n) {\n    s.resize(n + 1, 0);\n    for (auto interval : intervals)\
    \ {\n      s[interval.l] += interval.v;\n      s[interval.r] -= interval.v;\n\
    \    }\n    for (int i = 0; i < n; ++i) {\n      s[i + 1] += s[i];\n    }\n  }\n\
    \n  // i is 0-indexed.\n  T get(int i) { return s[i]; }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T> struct ImosInterval {\n  // [l, r), l and r is 0-indexed.\n  int\
    \ l, r;\n  T v;\n};\n\ntemplate <typename T> struct Imos {\nprivate:\n  int n;\n\
    \  vector<T> s;\n\npublic:\n  Imos(int n, const vector<ImosInterval<T>> &intervals)\
    \ : n(n) {\n    s.resize(n + 1, 0);\n    for (auto interval : intervals) {\n \
    \     s[interval.l] += interval.v;\n      s[interval.r] -= interval.v;\n    }\n\
    \    for (int i = 0; i < n; ++i) {\n      s[i + 1] += s[i];\n    }\n  }\n\n  //\
    \ i is 0-indexed.\n  T get(int i) { return s[i]; }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/dp/imos.hpp
  requiredBy: []
  timestamp: '2022-12-29 23:27:10+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/dsl_5_a.test.cpp
documentation_of: src/dp/imos.hpp
layout: document
redirect_from:
- /library/src/dp/imos.hpp
- /library/src/dp/imos.hpp.html
title: src/dp/imos.hpp
---
