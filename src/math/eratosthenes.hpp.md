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
  bundledCode: "#line 2 \"src/math/eratosthenes.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\nstruct Eratosthenes {\nprivate:\n  int n;\n  vector<bool>\
    \ is_prime;\n  vector<int> minfactor;\n\npublic:\n  Eratosthenes(int n) : n(n),\
    \ is_prime(n + 1, true), minfactor(n + 1, -1) {\n    is_prime[0] = false;\n  \
    \  is_prime[1] = false;\n    minfactor[1] = 1;\n\n    for (int i = 2; i <= n;\
    \ ++i) {\n      if (!is_prime[i]) {\n        continue;\n      }\n\n      minfactor[i]\
    \ = i;\n\n      for (int j = i * 2; j <= n; j += i) {\n        is_prime[j] = false;\n\
    \n        if (minfactor[j] == -1)\n          minfactor[j] = i;\n      }\n    }\n\
    \  }\n\n  vector<pair<int, int>> factorize(int i) {\n    vector<pair<int, int>>\
    \ res;\n    while (i > 1) {\n      int p = minfactor[i];\n      int exp = 0;\n\
    \n      while (minfactor[i] == p) {\n        i /= p;\n        ++exp;\n      }\n\
    \      res.emplace_back(i, exp);\n    }\n    return res;\n  }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\nstruct\
    \ Eratosthenes {\nprivate:\n  int n;\n  vector<bool> is_prime;\n  vector<int>\
    \ minfactor;\n\npublic:\n  Eratosthenes(int n) : n(n), is_prime(n + 1, true),\
    \ minfactor(n + 1, -1) {\n    is_prime[0] = false;\n    is_prime[1] = false;\n\
    \    minfactor[1] = 1;\n\n    for (int i = 2; i <= n; ++i) {\n      if (!is_prime[i])\
    \ {\n        continue;\n      }\n\n      minfactor[i] = i;\n\n      for (int j\
    \ = i * 2; j <= n; j += i) {\n        is_prime[j] = false;\n\n        if (minfactor[j]\
    \ == -1)\n          minfactor[j] = i;\n      }\n    }\n  }\n\n  vector<pair<int,\
    \ int>> factorize(int i) {\n    vector<pair<int, int>> res;\n    while (i > 1)\
    \ {\n      int p = minfactor[i];\n      int exp = 0;\n\n      while (minfactor[i]\
    \ == p) {\n        i /= p;\n        ++exp;\n      }\n      res.emplace_back(i,\
    \ exp);\n    }\n    return res;\n  }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/math/eratosthenes.hpp
  requiredBy: []
  timestamp: '2022-12-30 15:03:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/math/eratosthenes.hpp
layout: document
redirect_from:
- /library/src/math/eratosthenes.hpp
- /library/src/math/eratosthenes.hpp.html
title: src/math/eratosthenes.hpp
---
