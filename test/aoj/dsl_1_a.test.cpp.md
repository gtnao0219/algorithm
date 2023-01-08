---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/structure/union_find_tree.hpp
    title: src/structure/union_find_tree.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_A
  bundledCode: "#line 1 \"test/aoj/dsl_1_a.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/structure/union_find_tree.hpp\"\
    \n\n#line 4 \"src/structure/union_find_tree.hpp\"\nusing namespace std;\n\nstruct\
    \ UnionFindTree {\nprivate:\n  int n;\n  vector<int> parent, rank;\n\npublic:\n\
    \  UnionFindTree(int n) : n(n), parent(n, -1), rank(n, 0) {}\n\n  int root(int\
    \ x) {\n    if (parent[x] == -1) {\n      return x;\n    }\n    return parent[x]\
    \ = root(parent[x]);\n  }\n\n  void unite(int x, int y) {\n    x = root(x);\n\
    \    y = root(y);\n    if (x == y) {\n      return;\n    }\n    if (rank[x] <\
    \ rank[y]) {\n      swap(x, y);\n    }\n    if (rank[x] == rank[y]) {\n      ++rank[x];\n\
    \    }\n    parent[y] = x;\n  }\n\n  bool is_same(int x, int y) { return root(x)\
    \ == root(y); }\n\n  vector<vector<int>> groups() {\n    vector<vector<int>> ret(n);\n\
    \    for (int i = 0; i < n; i++) {\n      ret[root(i)].emplace_back(i);\n    }\n\
    \    ret.erase(remove_if(begin(ret), end(ret),\n                        [&](const\
    \ vector<int> &v) { return v.empty(); }),\n              end(ret));\n    return\
    \ ret;\n  }\n};\n#line 8 \"test/aoj/dsl_1_a.test.cpp\"\n\nint main() {\n  int\
    \ n, q;\n  cin >> n >> q;\n  UnionFindTree uft(n);\n  for (int i = 0; i < q; ++i)\
    \ {\n    int com, x, y;\n    cin >> com >> x >> y;\n    if (com == 0) {\n    \
    \  uft.unite(x, y);\n    } else {\n      cout << (uft.is_same(x, y) ? 1 : 0) <<\
    \ endl;\n    }\n  }\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/structure/union_find_tree.hpp\"\
    \n\nint main() {\n  int n, q;\n  cin >> n >> q;\n  UnionFindTree uft(n);\n  for\
    \ (int i = 0; i < q; ++i) {\n    int com, x, y;\n    cin >> com >> x >> y;\n \
    \   if (com == 0) {\n      uft.unite(x, y);\n    } else {\n      cout << (uft.is_same(x,\
    \ y) ? 1 : 0) << endl;\n    }\n  }\n  return 0;\n}\n"
  dependsOn:
  - src/structure/union_find_tree.hpp
  isVerificationFile: true
  path: test/aoj/dsl_1_a.test.cpp
  requiredBy: []
  timestamp: '2023-01-08 21:46:20+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/dsl_1_a.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/dsl_1_a.test.cpp
- /verify/test/aoj/dsl_1_a.test.cpp.html
title: test/aoj/dsl_1_a.test.cpp
---
