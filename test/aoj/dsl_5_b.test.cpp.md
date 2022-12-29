---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/dp/imos_2d.hpp
    title: src/dp/imos_2d.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/5/DSL_5_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/5/DSL_5_B
  bundledCode: "#line 1 \"test/aoj/dsl_5_b.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/5/DSL_5_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/dp/imos_2d.hpp\"\
    \n\n#line 4 \"src/dp/imos_2d.hpp\"\nusing namespace std;\n\n// x and y is 0-indexed.\n\
    struct Imos2dPoint {\n  int x, y;\n};\n// [start, end)\ntemplate <typename T>\
    \ struct Imos2dInterval {\n  Imos2dPoint start, end;\n  T v;\n};\n\ntemplate <typename\
    \ T> struct Imos2d {\nprivate:\n  int h, w;\n  vector<vector<T>> s;\n\npublic:\n\
    \  Imos2d(int h, int w, const vector<Imos2dInterval<T>> &intervals)\n      : h(h),\
    \ w(w) {\n    s.resize(h + 1, vector<T>(w + 1, 0));\n    for (auto interval :\
    \ intervals) {\n      s[interval.start.y][interval.start.x] += interval.v;\n \
    \     s[interval.start.y][interval.end.x] -= interval.v;\n      s[interval.end.y][interval.start.x]\
    \ -= interval.v;\n      s[interval.end.y][interval.end.x] += interval.v;\n   \
    \ }\n    for (int y = 0; y < h; ++y)\n      for (int x = 0; x < w; ++x) {\n  \
    \      s[y + 1][x] += s[y][x];\n      }\n    for (int y = 0; y < h; ++y)\n   \
    \   for (int x = 0; x < w; ++x) {\n        s[y][x + 1] += s[y][x];\n      }\n\
    \  }\n\n  // x and y is 0-indexed.\n  T get(const Imos2dPoint &p) { return s[p.y][p.x];\
    \ }\n};\n#line 8 \"test/aoj/dsl_5_b.test.cpp\"\n\nint main() {\n  int n;\n  cin\
    \ >> n;\n  vector<Imos2dInterval<long long>> intervals(n);\n  for (int i = 0;\
    \ i < n; i++) {\n    int x1, y1, x2, y2;\n    cin >> x1 >> y1 >> x2 >> y2;\n \
    \   intervals[i] = {{x1, y1}, {x2, y2}, 1};\n  }\n  Imos2d<long long> imos(1001,\
    \ 1001, intervals);\n  long long ans = 0;\n  for (int x = 0; x < 1001; x++) {\n\
    \    for (int y = 0; y < 1001; y++) {\n      ans = max(ans, imos.get({x, y}));\n\
    \    }\n  }\n  cout << ans << endl;\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/5/DSL_5_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/dp/imos_2d.hpp\"\
    \n\nint main() {\n  int n;\n  cin >> n;\n  vector<Imos2dInterval<long long>> intervals(n);\n\
    \  for (int i = 0; i < n; i++) {\n    int x1, y1, x2, y2;\n    cin >> x1 >> y1\
    \ >> x2 >> y2;\n    intervals[i] = {{x1, y1}, {x2, y2}, 1};\n  }\n  Imos2d<long\
    \ long> imos(1001, 1001, intervals);\n  long long ans = 0;\n  for (int x = 0;\
    \ x < 1001; x++) {\n    for (int y = 0; y < 1001; y++) {\n      ans = max(ans,\
    \ imos.get({x, y}));\n    }\n  }\n  cout << ans << endl;\n  return 0;\n}\n"
  dependsOn:
  - src/dp/imos_2d.hpp
  isVerificationFile: true
  path: test/aoj/dsl_5_b.test.cpp
  requiredBy: []
  timestamp: '2022-12-29 23:55:31+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/dsl_5_b.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/dsl_5_b.test.cpp
- /verify/test/aoj/dsl_5_b.test.cpp.html
title: test/aoj/dsl_5_b.test.cpp
---
