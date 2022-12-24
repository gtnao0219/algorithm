---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/search/binary_search.hpp
    title: src/search/binary_search.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/1/ALDS1_4_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/1/ALDS1_4_B
  bundledCode: "#line 1 \"test/aoj/alds1_4_b.test.cpp\"\n#define PROBLEM         \
    \                                                       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/1/ALDS1_4_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/search/binary_search.hpp\"\
    \n\n#line 4 \"src/search/binary_search.hpp\"\nusing namespace std;\n\ntemplate\
    \ <typename T> T bin_search(T ng, T ok, function<bool(T)> is_ok) {\n  while (abs(ok\
    \ - ng) > 1) {\n    T mid = (ok + ng) / 2;\n\n    if (is_ok(mid)) {\n      ok\
    \ = mid;\n    } else {\n      ng = mid;\n    }\n  }\n  return ok;\n}\n#line 8\
    \ \"test/aoj/alds1_4_b.test.cpp\"\n\nint main() {\n  int n;\n  cin >> n;\n  vector<int>\
    \ S(n);\n  for (int i = 0; i < n; ++i) {\n    cin >> S[i];\n  }\n  int q;\n  cin\
    \ >> q;\n  vector<int> T(q);\n  for (int i = 0; i < q; ++i) {\n    cin >> T[i];\n\
    \  }\n\n  int ans = 0;\n  for (int i = 0; i < q; ++i) {\n    int lower = bin_search<int>(-1,\
    \ n, [&](int idx) { return S[idx] >= T[i]; });\n    int upper = bin_search<int>(n,\
    \ -1, [&](int idx) { return S[idx] <= T[i]; });\n    if (lower <= upper) {\n \
    \     ans++;\n    }\n  }\n  cout << ans << endl;\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/1/ALDS1_4_B\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/search/binary_search.hpp\"\
    \n\nint main() {\n  int n;\n  cin >> n;\n  vector<int> S(n);\n  for (int i = 0;\
    \ i < n; ++i) {\n    cin >> S[i];\n  }\n  int q;\n  cin >> q;\n  vector<int> T(q);\n\
    \  for (int i = 0; i < q; ++i) {\n    cin >> T[i];\n  }\n\n  int ans = 0;\n  for\
    \ (int i = 0; i < q; ++i) {\n    int lower = bin_search<int>(-1, n, [&](int idx)\
    \ { return S[idx] >= T[i]; });\n    int upper = bin_search<int>(n, -1, [&](int\
    \ idx) { return S[idx] <= T[i]; });\n    if (lower <= upper) {\n      ans++;\n\
    \    }\n  }\n  cout << ans << endl;\n  return 0;\n}\n"
  dependsOn:
  - src/search/binary_search.hpp
  isVerificationFile: true
  path: test/aoj/alds1_4_b.test.cpp
  requiredBy: []
  timestamp: '2022-12-24 14:04:00+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/alds1_4_b.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/alds1_4_b.test.cpp
- /verify/test/aoj/alds1_4_b.test.cpp.html
title: test/aoj/alds1_4_b.test.cpp
---
