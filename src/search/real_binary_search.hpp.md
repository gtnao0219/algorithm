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
  bundledCode: "#line 2 \"src/search/real_binary_search.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ntemplate <typename T>\nT real_bin_search(T ng, T ok, function<bool(T)>\
    \ is_ok, int loop = 100) {\n  for (int i = 0; i < loop; i++) {\n    T mid = (ok\
    \ + ng) / 2;\n\n    if (is_ok(mid)) {\n      ok = mid;\n    } else {\n      ng\
    \ = mid;\n    }\n  }\n  return ok;\n}\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
    \ <typename T>\nT real_bin_search(T ng, T ok, function<bool(T)> is_ok, int loop\
    \ = 100) {\n  for (int i = 0; i < loop; i++) {\n    T mid = (ok + ng) / 2;\n\n\
    \    if (is_ok(mid)) {\n      ok = mid;\n    } else {\n      ng = mid;\n    }\n\
    \  }\n  return ok;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: src/search/real_binary_search.hpp
  requiredBy: []
  timestamp: '2023-01-08 01:56:20+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/search/real_binary_search.hpp
layout: document
redirect_from:
- /library/src/search/real_binary_search.hpp
- /library/src/search/real_binary_search.hpp.html
title: src/search/real_binary_search.hpp
---
