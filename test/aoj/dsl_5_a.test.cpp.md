---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/dp/imos.hpp
    title: src/dp/imos.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/5/DSL_5_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/5/DSL_5_A
  bundledCode: "#line 1 \"test/aoj/dsl_5_a.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/5/DSL_5_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/dp/imos.hpp\"\
    \n\n#line 4 \"src/dp/imos.hpp\"\nusing namespace std;\n\ntemplate <typename T>\
    \ struct ImosInterval {\n  // [l, r), l and r is 0-indexed.\n  int l, r;\n  T\
    \ v;\n};\n\ntemplate <typename T> struct Imos {\nprivate:\n  int n;\n  vector<T>\
    \ s;\n\npublic:\n  Imos(int n, const vector<ImosInterval<T>> &intervals) : n(n)\
    \ {\n    s.resize(n + 1, 0);\n    for (auto interval : intervals) {\n      s[interval.l]\
    \ += interval.v;\n      s[interval.r] -= interval.v;\n    }\n    for (int i =\
    \ 0; i < n; ++i) {\n      s[i + 1] += s[i];\n    }\n  }\n\n  // i is 0-indexed.\n\
    \  T get(int i) { return s[i]; }\n};\n#line 8 \"test/aoj/dsl_5_a.test.cpp\"\n\n\
    int main() {\n  int n, t;\n  cin >> n >> t;\n  vector<ImosInterval<long long>>\
    \ intervals(n);\n  for (int i = 0; i < n; i++) {\n    int l, r;\n    cin >> l\
    \ >> r;\n    intervals[i] = {l, r, 1};\n  }\n  Imos<long long> imos(t, intervals);\n\
    \  long long ans = 0;\n  for (int i = 0; i < t; i++) {\n    ans = max(ans, imos.get(i));\n\
    \  }\n  cout << ans << endl;\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/5/DSL_5_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/dp/imos.hpp\"\
    \n\nint main() {\n  int n, t;\n  cin >> n >> t;\n  vector<ImosInterval<long long>>\
    \ intervals(n);\n  for (int i = 0; i < n; i++) {\n    int l, r;\n    cin >> l\
    \ >> r;\n    intervals[i] = {l, r, 1};\n  }\n  Imos<long long> imos(t, intervals);\n\
    \  long long ans = 0;\n  for (int i = 0; i < t; i++) {\n    ans = max(ans, imos.get(i));\n\
    \  }\n  cout << ans << endl;\n  return 0;\n}\n"
  dependsOn:
  - src/dp/imos.hpp
  isVerificationFile: true
  path: test/aoj/dsl_5_a.test.cpp
  requiredBy: []
  timestamp: '2022-12-29 23:27:10+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/dsl_5_a.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/dsl_5_a.test.cpp
- /verify/test/aoj/dsl_5_a.test.cpp.html
title: test/aoj/dsl_5_a.test.cpp
---
