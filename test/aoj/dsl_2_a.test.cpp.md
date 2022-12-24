---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/structure/segment_tree.hpp
    title: src/structure/segment_tree.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_A
  bundledCode: "#line 1 \"test/aoj/dsl_2_a.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/structure/segment_tree.hpp\"\
    \n\n#line 4 \"src/structure/segment_tree.hpp\"\nusing namespace std;\n\ntemplate\
    \ <typename Monoid> struct SegmentTree {\nprivate:\n  using BinaryOperation =\
    \ function<Monoid(Monoid, Monoid)>;\n  const BinaryOperation binary_operation;\n\
    \  const Monoid identity_element;\n\n  int leaf_n;\n  vector<Monoid> data;\n\n\
    public:\n  SegmentTree(int n, const BinaryOperation bo, const Monoid ie)\n   \
    \   : binary_operation(bo), identity_element(ie) {\n    leaf_n = 1;\n    while\
    \ (leaf_n < n) {\n      leaf_n *= 2;\n    }\n    int data_n = leaf_n * 2;\n  \
    \  data.assign(data_n, identity_element);\n  }\n\n  // i is 0-indexed.\n  void\
    \ set(int i, const Monoid &v) { data[i + leaf_n] = v; }\n\n  void build() {\n\
    \    for (int i = leaf_n - 1; i > 0; --i) {\n      data[i] = binary_operation(data[2\
    \ * i], data[2 * i + 1]);\n    }\n  }\n\n  // i is 0-indexed.\n  void update(int\
    \ i, const Monoid &v) {\n    i += leaf_n;\n    data[i] = v;\n    while (i >>=\
    \ 1) {\n      data[i] = binary_operation(data[2 * i], data[2 * i + 1]);\n    }\n\
    \  }\n\n  // [i, j), i and j are 0-indexed\n  Monoid query(int i, int j) {\n \
    \   Monoid v_left = identity_element, v_right = identity_element;\n    for (int\
    \ left = i + leaf_n, right = j + leaf_n; left < right;\n         left >>= 1, right\
    \ >>= 1) {\n      if (left & 1) {\n        v_left = binary_operation(v_left, data[left++]);\n\
    \      }\n      if (right & 1) {\n        v_right = binary_operation(data[--right],\
    \ v_right);\n      }\n    }\n    return binary_operation(v_left, v_right);\n \
    \ }\n\n  // i is 0-indexed.\n  Monoid operator[](int i) const { return data[i\
    \ + leaf_n]; }\n};\n#line 8 \"test/aoj/dsl_2_a.test.cpp\"\n\nint main() {\n  int\
    \ n, q;\n  cin >> n >> q;\n  long long INF = (1L << 31) - 1;\n  SegmentTree<long\
    \ long> st(\n      n, [](long long a, long long b) { return min(a, b); }, INF);\n\
    \  for (int i = 0; i < q; ++i) {\n    int com, x, y;\n    cin >> com >> x >> y;\n\
    \    if (com == 0) {\n      st.update(x, y);\n    } else {\n      cout << st.query(x,\
    \ y + 1) << endl;\n    }\n  }\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/structure/segment_tree.hpp\"\
    \n\nint main() {\n  int n, q;\n  cin >> n >> q;\n  long long INF = (1L << 31)\
    \ - 1;\n  SegmentTree<long long> st(\n      n, [](long long a, long long b) {\
    \ return min(a, b); }, INF);\n  for (int i = 0; i < q; ++i) {\n    int com, x,\
    \ y;\n    cin >> com >> x >> y;\n    if (com == 0) {\n      st.update(x, y);\n\
    \    } else {\n      cout << st.query(x, y + 1) << endl;\n    }\n  }\n  return\
    \ 0;\n}\n"
  dependsOn:
  - src/structure/segment_tree.hpp
  isVerificationFile: true
  path: test/aoj/dsl_2_a.test.cpp
  requiredBy: []
  timestamp: '2022-12-24 07:22:57+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/dsl_2_a.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/dsl_2_a.test.cpp
- /verify/test/aoj/dsl_2_a.test.cpp.html
title: test/aoj/dsl_2_a.test.cpp
---
