---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/string/z_algorithm.hpp
    title: src/string/z_algorithm.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/zalgorithm
    links:
    - https://judge.yosupo.jp/problem/zalgorithm
  bundledCode: "#line 1 \"test/yosupo_judge/zalgorithm.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/zalgorithm\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#line 2 \"src/string/z_algorithm.hpp\"\n\n#line 4 \"src/string/z_algorithm.hpp\"\
    \nusing namespace std;\n\ntemplate <typename T = int> vector<T> z_algorithm(string\
    \ s) {\n  int n = s.size();\n  vector<T> res(n, 0);\n  res[0] = n;\n  int i =\
    \ 1, j = 0;\n  while (i < n) {\n    while (i + j < n && s[j] == s[i + j]) {\n\
    \      ++j;\n    }\n    res[i] = j;\n    if (j == 0) {\n      ++i;\n      continue;\n\
    \    }\n    int k = 1;\n    while (i + k < n && k + res[k] < j) {\n      res[i\
    \ + k] = res[k];\n      ++k;\n    }\n    i += k;\n    j -= k;\n  }\n  return res;\n\
    }\n#line 7 \"test/yosupo_judge/zalgorithm.test.cpp\"\n\nint main() {\n  string\
    \ S;\n  cin >> S;\n  auto res = z_algorithm(S);\n  for (int i = 0; i < res.size();\
    \ i++) {\n    if (i != 0) {\n      cout << \" \";\n    }\n    cout << res[i];\n\
    \  }\n  cout << endl;\n  return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/zalgorithm\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/string/z_algorithm.hpp\"\
    \n\nint main() {\n  string S;\n  cin >> S;\n  auto res = z_algorithm(S);\n  for\
    \ (int i = 0; i < res.size(); i++) {\n    if (i != 0) {\n      cout << \" \";\n\
    \    }\n    cout << res[i];\n  }\n  cout << endl;\n  return 0;\n}\n"
  dependsOn:
  - src/string/z_algorithm.hpp
  isVerificationFile: true
  path: test/yosupo_judge/zalgorithm.test.cpp
  requiredBy: []
  timestamp: '2022-12-22 01:59:18+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo_judge/zalgorithm.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo_judge/zalgorithm.test.cpp
- /verify/test/yosupo_judge/zalgorithm.test.cpp.html
title: test/yosupo_judge/zalgorithm.test.cpp
---
