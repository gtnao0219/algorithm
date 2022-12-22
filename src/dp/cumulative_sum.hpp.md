---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/0516.test.cpp
    title: test/aoj/0516.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/dp/cumulative_sum.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ntemplate <typename T> struct CumulativeSum {\nprivate:\n\
    \  vector<T> s;\n\npublic:\n  CumulativeSum(const vector<T> &nums) {\n    int\
    \ n = nums.size();\n    s.resize(n + 1, 0);\n    for (int i = 0; i < n; ++i) {\n\
    \      s[i + 1] = s[i] + nums[i];\n    }\n  }\n\n  // [l, r), l and r is 0-indexed.\n\
    \  T sum(int l, int r) { return s[r] - s[l]; }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T> struct CumulativeSum {\nprivate:\n  vector<T> s;\n\npublic:\n \
    \ CumulativeSum(const vector<T> &nums) {\n    int n = nums.size();\n    s.resize(n\
    \ + 1, 0);\n    for (int i = 0; i < n; ++i) {\n      s[i + 1] = s[i] + nums[i];\n\
    \    }\n  }\n\n  // [l, r), l and r is 0-indexed.\n  T sum(int l, int r) { return\
    \ s[r] - s[l]; }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/dp/cumulative_sum.hpp
  requiredBy: []
  timestamp: '2022-12-23 01:30:30+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/0516.test.cpp
documentation_of: src/dp/cumulative_sum.hpp
layout: document
redirect_from:
- /library/src/dp/cumulative_sum.hpp
- /library/src/dp/cumulative_sum.hpp.html
title: src/dp/cumulative_sum.hpp
---
