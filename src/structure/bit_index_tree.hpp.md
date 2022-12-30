---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/structure/bit_index_tree.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ntemplate <typename T> struct BIT {\nprivate:\n  int n;\n\
    \  vector<T> bit;\n\npublic:\n  BIT(int n) : n(n), bit(n + 1, 0) {}\n\n  // i\
    \ is 0-indexed.\n  void add(int i, T x) {\n    for (++i; i <= n + 1; i += i &\
    \ -i) {\n      bit[i] += x;\n    }\n  }\n\n  // [0, i), i is 0-indexed.\n  T sum(int\
    \ i) {\n    T res = 0;\n    for (; i > 0; i -= i & -i) {\n      res += bit[i];\n\
    \    }\n    return res;\n  }\n\n  // [l, r), l and r is 0-indexed.\n  T sum(int\
    \ l, int r) { return sum(r) - sum(l); }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T> struct BIT {\nprivate:\n  int n;\n  vector<T> bit;\n\npublic:\n\
    \  BIT(int n) : n(n), bit(n + 1, 0) {}\n\n  // i is 0-indexed.\n  void add(int\
    \ i, T x) {\n    for (++i; i <= n + 1; i += i & -i) {\n      bit[i] += x;\n  \
    \  }\n  }\n\n  // [0, i), i is 0-indexed.\n  T sum(int i) {\n    T res = 0;\n\
    \    for (; i > 0; i -= i & -i) {\n      res += bit[i];\n    }\n    return res;\n\
    \  }\n\n  // [l, r), l and r is 0-indexed.\n  T sum(int l, int r) { return sum(r)\
    \ - sum(l); }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/structure/bit_index_tree.hpp
  requiredBy: []
  timestamp: '2022-12-30 21:24:59+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/structure/bit_index_tree.hpp
layout: document
redirect_from:
- /library/src/structure/bit_index_tree.hpp
- /library/src/structure/bit_index_tree.hpp.html
title: src/structure/bit_index_tree.hpp
---
