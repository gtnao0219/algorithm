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
  bundledCode: "#line 2 \"src/template.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\nusing ll = long long;\nusing vi = vector<int>;\nusing vll = vector<ll>;\n\
    using vvi = vector<vi>;\nusing vvll = vector<vll>;\nusing vs = vector<string>;\n\
    \n#define REP(i, a, n) for (ll i = (a); i < (ll)(n); ++i)\n#define rep(i, n) REP(i,\
    \ 0, n)\n\ntemplate <typename T1, typename T2>\nostream &operator<<(ostream &os,\
    \ const pair<T1, T2> &p) {\n  os << p.first << \" \" << p.second;\n  return os;\n\
    }\n\ntemplate <typename T> ostream &operator<<(ostream &os, const vector<T> &v)\
    \ {\n  rep(i, v.size()) { os << v[i] << (i < (ll)v.size() - 1 ? \" \" : \"\");\
    \ }\n  return os;\n}\n\ntemplate <typename T>\nostream &operator<<(ostream &os,\
    \ const vector<vector<T>> &v) {\n  rep(i, v.size()) {\n    rep(j, v[i].size())\
    \ {\n      os << v[i][j] << (j < (ll)v[i].size() - 1 ? \" \" : \"\");\n    }\n\
    \    os << endl;\n  }\n  return os;\n}\n\ntemplate <typename T, typename U>\n\
    ostream &operator<<(ostream &os, const map<T, U> &v) {\n  for (const auto &p :\
    \ v) {\n    os << p.first << \": \" << p.second << endl;\n  }\n  return os;\n\
    }\n\ninline void io_setup(int precision = 15) {\n  cin.tie(nullptr);\n  ios::sync_with_stdio(false);\n\
    \  cout << fixed << setprecision(precision);\n  cerr << fixed << setprecision(precision);\n\
    }\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\nusing ll\
    \ = long long;\nusing vi = vector<int>;\nusing vll = vector<ll>;\nusing vvi =\
    \ vector<vi>;\nusing vvll = vector<vll>;\nusing vs = vector<string>;\n\n#define\
    \ REP(i, a, n) for (ll i = (a); i < (ll)(n); ++i)\n#define rep(i, n) REP(i, 0,\
    \ n)\n\ntemplate <typename T1, typename T2>\nostream &operator<<(ostream &os,\
    \ const pair<T1, T2> &p) {\n  os << p.first << \" \" << p.second;\n  return os;\n\
    }\n\ntemplate <typename T> ostream &operator<<(ostream &os, const vector<T> &v)\
    \ {\n  rep(i, v.size()) { os << v[i] << (i < (ll)v.size() - 1 ? \" \" : \"\");\
    \ }\n  return os;\n}\n\ntemplate <typename T>\nostream &operator<<(ostream &os,\
    \ const vector<vector<T>> &v) {\n  rep(i, v.size()) {\n    rep(j, v[i].size())\
    \ {\n      os << v[i][j] << (j < (ll)v[i].size() - 1 ? \" \" : \"\");\n    }\n\
    \    os << endl;\n  }\n  return os;\n}\n\ntemplate <typename T, typename U>\n\
    ostream &operator<<(ostream &os, const map<T, U> &v) {\n  for (const auto &p :\
    \ v) {\n    os << p.first << \": \" << p.second << endl;\n  }\n  return os;\n\
    }\n\ninline void io_setup(int precision = 15) {\n  cin.tie(nullptr);\n  ios::sync_with_stdio(false);\n\
    \  cout << fixed << setprecision(precision);\n  cerr << fixed << setprecision(precision);\n\
    }\n"
  dependsOn: []
  isVerificationFile: false
  path: src/template.hpp
  requiredBy: []
  timestamp: '2022-12-31 16:07:24+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: src/template.hpp
layout: document
redirect_from:
- /library/src/template.hpp
- /library/src/template.hpp.html
title: src/template.hpp
---
