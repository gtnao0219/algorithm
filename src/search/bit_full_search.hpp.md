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
  bundledCode: "#line 2 \"src/search/bit_full_search.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ninline void bit_full_search(int n) {\n  for (int bit =\
    \ 0; bit < (1 << n); ++bit) {\n    for (int i = 0; i < n; ++i) {\n      if (bit\
    \ & (1 << i)) {\n        // do something\n      }\n    }\n  }\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ninline\
    \ void bit_full_search(int n) {\n  for (int bit = 0; bit < (1 << n); ++bit) {\n\
    \    for (int i = 0; i < n; ++i) {\n      if (bit & (1 << i)) {\n        // do\
    \ something\n      }\n    }\n  }\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/search/bit_full_search.hpp
  requiredBy: []
  timestamp: '2023-01-08 01:56:20+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/search/bit_full_search.hpp
layout: document
redirect_from:
- /library/src/search/bit_full_search.hpp
- /library/src/search/bit_full_search.hpp.html
title: src/search/bit_full_search.hpp
---
