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
  bundledCode: "#line 2 \"src/math/sieve_of_eratosthenes.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ntemplate <typename T = int> vector<T> sieve_of_eratosthenes(T\
    \ n) {\n  vector<bool> is_prime(n + 1, true);\n  vector<T> res;\n  is_prime[0]\
    \ = false;\n  is_prime[1] = false;\n  for (T i = 2; i <= n; ++i) {\n    if (is_prime[i])\
    \ {\n      res.push_back(i);\n      for (int j = 2 * i; j <= n; j += i) {\n  \
    \      is_prime[j] = false;\n      }\n    }\n  }\n  return res;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T = int> vector<T> sieve_of_eratosthenes(T n) {\n  vector<bool> is_prime(n\
    \ + 1, true);\n  vector<T> res;\n  is_prime[0] = false;\n  is_prime[1] = false;\n\
    \  for (T i = 2; i <= n; ++i) {\n    if (is_prime[i]) {\n      res.push_back(i);\n\
    \      for (int j = 2 * i; j <= n; j += i) {\n        is_prime[j] = false;\n \
    \     }\n    }\n  }\n  return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/math/sieve_of_eratosthenes.hpp
  requiredBy: []
  timestamp: '2022-12-18 20:53:53+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/math/sieve_of_eratosthenes.hpp
layout: document
redirect_from:
- /library/src/math/sieve_of_eratosthenes.hpp
- /library/src/math/sieve_of_eratosthenes.hpp.html
title: src/math/sieve_of_eratosthenes.hpp
---
