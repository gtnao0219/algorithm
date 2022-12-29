---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/dsl_5_b.test.cpp
    title: test/aoj/dsl_5_b.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/dp/imos_2d.hpp\"\n\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\n// x and y is 0-indexed.\nstruct Imos2dPoint {\n  int x, y;\n\
    };\n// [start, end)\ntemplate <typename T> struct Imos2dInterval {\n  Imos2dPoint\
    \ start, end;\n  T v;\n};\n\ntemplate <typename T> struct Imos2d {\nprivate:\n\
    \  int h, w;\n  vector<vector<T>> s;\n\npublic:\n  Imos2d(int h, int w, const\
    \ vector<Imos2dInterval<T>> &intervals)\n      : h(h), w(w) {\n    s.resize(h\
    \ + 1, vector<T>(w + 1, 0));\n    for (auto interval : intervals) {\n      s[interval.start.y][interval.start.x]\
    \ += interval.v;\n      s[interval.start.y][interval.end.x] -= interval.v;\n \
    \     s[interval.end.y][interval.start.x] -= interval.v;\n      s[interval.end.y][interval.end.x]\
    \ += interval.v;\n    }\n    for (int y = 0; y < h; ++y)\n      for (int x = 0;\
    \ x < w; ++x) {\n        s[y + 1][x] += s[y][x];\n      }\n    for (int y = 0;\
    \ y < h; ++y)\n      for (int x = 0; x < w; ++x) {\n        s[y][x + 1] += s[y][x];\n\
    \      }\n  }\n\n  // x and y is 0-indexed.\n  T get(const Imos2dPoint &p) { return\
    \ s[p.y][p.x]; }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\n// x and\
    \ y is 0-indexed.\nstruct Imos2dPoint {\n  int x, y;\n};\n// [start, end)\ntemplate\
    \ <typename T> struct Imos2dInterval {\n  Imos2dPoint start, end;\n  T v;\n};\n\
    \ntemplate <typename T> struct Imos2d {\nprivate:\n  int h, w;\n  vector<vector<T>>\
    \ s;\n\npublic:\n  Imos2d(int h, int w, const vector<Imos2dInterval<T>> &intervals)\n\
    \      : h(h), w(w) {\n    s.resize(h + 1, vector<T>(w + 1, 0));\n    for (auto\
    \ interval : intervals) {\n      s[interval.start.y][interval.start.x] += interval.v;\n\
    \      s[interval.start.y][interval.end.x] -= interval.v;\n      s[interval.end.y][interval.start.x]\
    \ -= interval.v;\n      s[interval.end.y][interval.end.x] += interval.v;\n   \
    \ }\n    for (int y = 0; y < h; ++y)\n      for (int x = 0; x < w; ++x) {\n  \
    \      s[y + 1][x] += s[y][x];\n      }\n    for (int y = 0; y < h; ++y)\n   \
    \   for (int x = 0; x < w; ++x) {\n        s[y][x + 1] += s[y][x];\n      }\n\
    \  }\n\n  // x and y is 0-indexed.\n  T get(const Imos2dPoint &p) { return s[p.y][p.x];\
    \ }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/dp/imos_2d.hpp
  requiredBy: []
  timestamp: '2022-12-29 23:55:31+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/dsl_5_b.test.cpp
documentation_of: src/dp/imos_2d.hpp
layout: document
redirect_from:
- /library/src/dp/imos_2d.hpp
- /library/src/dp/imos_2d.hpp.html
title: src/dp/imos_2d.hpp
---
