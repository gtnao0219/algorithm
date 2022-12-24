---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/dsl_2_a.test.cpp
    title: test/aoj/dsl_2_a.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"src/structure/segment_tree.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\ntemplate <typename Monoid> struct SegmentTree {\nprivate:\n\
    \  using BinaryOperation = function<Monoid(Monoid, Monoid)>;\n  const BinaryOperation\
    \ binary_operation;\n  const Monoid identity_element;\n\n  int leaf_n;\n  vector<Monoid>\
    \ data;\n\npublic:\n  SegmentTree(int n, const BinaryOperation bo, const Monoid\
    \ ie)\n      : binary_operation(bo), identity_element(ie) {\n    leaf_n = 1;\n\
    \    while (leaf_n < n) {\n      leaf_n *= 2;\n    }\n    int data_n = leaf_n\
    \ * 2;\n    data.assign(data_n, identity_element);\n  }\n\n  // i is 0-indexed.\n\
    \  void set(int i, const Monoid &v) { data[i + leaf_n] = v; }\n\n  void build()\
    \ {\n    for (int i = leaf_n - 1; i > 0; --i) {\n      data[i] = binary_operation(data[2\
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
    \ + leaf_n]; }\n};\n"
  code: "#pragma once\n\n#include <bits/stdc++.h>\nusing namespace std;\n\ntemplate\
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
    \ + leaf_n]; }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: src/structure/segment_tree.hpp
  requiredBy: []
  timestamp: '2022-12-24 07:22:57+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/dsl_2_a.test.cpp
documentation_of: src/structure/segment_tree.hpp
layout: document
redirect_from:
- /library/src/structure/segment_tree.hpp
- /library/src/structure/segment_tree.hpp.html
title: src/structure/segment_tree.hpp
---
