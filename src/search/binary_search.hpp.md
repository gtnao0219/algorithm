---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/alds1_4_b.test.cpp
    title: test/aoj/alds1_4_b.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/search/binary_search.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ntemplate <typename T> T bin_search(T ng, T ok, function<bool(T)>\
    \ is_ok) {\n  while (abs(ok - ng) > 1) {\n    T mid = (ok + ng) / 2;\n\n    if\
    \ (is_ok(mid)) {\n      ok = mid;\n    } else {\n      ng = mid;\n    }\n  }\n\
    \  return ok;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T> T bin_search(T ng, T ok, function<bool(T)> is_ok) {\n  while (abs(ok\
    \ - ng) > 1) {\n    T mid = (ok + ng) / 2;\n\n    if (is_ok(mid)) {\n      ok\
    \ = mid;\n    } else {\n      ng = mid;\n    }\n  }\n  return ok;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/search/binary_search.hpp
  requiredBy: []
  timestamp: '2022-12-24 14:04:00+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/alds1_4_b.test.cpp
documentation_of: src/search/binary_search.hpp
layout: document
redirect_from:
- /library/src/search/binary_search.hpp
- /library/src/search/binary_search.hpp.html
title: src/search/binary_search.hpp
---
