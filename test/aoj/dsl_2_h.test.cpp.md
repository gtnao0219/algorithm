---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/structure/lazy_segment_tree.hpp
    title: src/structure/lazy_segment_tree.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_H
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_H
  bundledCode: "#line 1 \"test/aoj/dsl_2_h.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_H\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/structure/lazy_segment_tree.hpp\"\
    \n\n#line 4 \"src/structure/lazy_segment_tree.hpp\"\nusing namespace std;\n\n\
    template <typename Monoid, typename Action> struct LazySegmentTree {\nprivate:\n\
    \  using FuncMonoid = function<Monoid(Monoid, Monoid)>;\n  using FuncAction =\
    \ function<void(Monoid &, Action)>;\n  using FuncComposition = function<void(Action\
    \ &, Action)>;\n  FuncMonoid func_monoid;\n  FuncAction func_action;\n  FuncComposition\
    \ func_composition;\n  const Monoid identity_monoid;\n  const Action identity_action;\n\
    \  vector<Monoid> data;\n  vector<Action> lazy;\n  int leaf_n;\n\npublic:\n  LazySegmentTree(int\
    \ n, const FuncMonoid fm, const FuncAction fa,\n                  const FuncComposition\
    \ fc, const Monoid &im, const Action &ia)\n      : func_monoid(fm), func_action(fa),\
    \ func_composition(fc),\n        identity_monoid(im), identity_action(ia) {\n\
    \    leaf_n = 1;\n    while (leaf_n < n) {\n      leaf_n *= 2;\n    }\n    int\
    \ data_n = leaf_n * 2;\n    data.assign(data_n, identity_monoid);\n    lazy.assign(data_n,\
    \ identity_action);\n  }\n\n  // a is 0-indexed.\n  void set(int a, const Monoid\
    \ &v) { data[a + leaf_n] = v; }\n\n  void build() {\n    for (int k = leaf_n -\
    \ 1; k > 0; --k) {\n      data[k] = func_monoid(data[2 * k], data[2 * k + 1]);\n\
    \    }\n  }\n\n  // [a, b), a and b are 0-indexed\n  void update(int a, int b,\
    \ const Action &v) { _update(a, b, v, 1, 0, leaf_n); }\n\n  // [a, b), a and b\
    \ are 0-indexed\n  Monoid query(int a, int b) { return _query(a, b, 1, 0, leaf_n);\
    \ }\n\n  // a is 0-indexed.\n  Monoid operator[](int a) const { return data[a\
    \ + leaf_n]; }\n\nprivate:\n  void evaluate(int k) {\n    if (lazy[k] == identity_action)\
    \ {\n      return;\n    }\n    if (k < leaf_n) {\n      func_composition(lazy[2\
    \ * k], lazy[k]);\n      func_composition(lazy[2 * k + 1], lazy[k]);\n    }\n\
    \    func_action(data[k], lazy[k]);\n    lazy[k] = identity_action;\n  }\n\n \
    \ Monoid _query(int a, int b, int k, int l, int r) {\n    evaluate(k);\n\n   \
    \ if (r <= a || b <= l) {\n      return identity_monoid;\n    }\n    if (a <=\
    \ l && r <= b) {\n      return data[k];\n    }\n    return func_monoid(_query(a,\
    \ b, 2 * k, l, (l + r) / 2),\n                       _query(a, b, 2 * k + 1, (l\
    \ + r) / 2, r));\n  }\n\n  void _update(int a, int b, const Action &v, int k,\
    \ int l, int r) {\n    evaluate(k);\n\n    if (r <= a || b <= l) {\n      return;\n\
    \    }\n    if (a <= l && r <= b) {\n      func_composition(lazy[k], v);\n   \
    \   evaluate(k);\n      return;\n    }\n    _update(a, b, v, 2 * k, l, (l + r)\
    \ / 2);\n    _update(a, b, v, 2 * k + 1, (l + r) / 2, r);\n    data[k] = func_monoid(data[2\
    \ * k], data[2 * k + 1]);\n  }\n};\n#line 8 \"test/aoj/dsl_2_h.test.cpp\"\n\n\
    int main() {\n  int n, q;\n  cin >> n >> q;\n  long long INF = (1L << 60);\n \
    \ LazySegmentTree<long long, long long> st(\n      n, [](long long a, long long\
    \ b) { return min(a, b); },\n      [](long long &a, long long b) { a += b; },\n\
    \      [](long long &a, long long b) { a += b; }, INF, 0);\n  for (int i = 0;\
    \ i < n; ++i) {\n    st.set(i, 0);\n  }\n  st.build();\n  for (int i = 0; i <\
    \ q; ++i) {\n    int com, s, t;\n    cin >> com >> s >> t;\n    if (com == 0)\
    \ {\n      long long x;\n      cin >> x;\n      st.update(s, t + 1, x);\n    }\
    \ else {\n      cout << st.query(s, t + 1) << endl;\n    }\n  }\n  return 0;\n\
    }\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/2/DSL_2_H\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/structure/lazy_segment_tree.hpp\"\
    \n\nint main() {\n  int n, q;\n  cin >> n >> q;\n  long long INF = (1L << 60);\n\
    \  LazySegmentTree<long long, long long> st(\n      n, [](long long a, long long\
    \ b) { return min(a, b); },\n      [](long long &a, long long b) { a += b; },\n\
    \      [](long long &a, long long b) { a += b; }, INF, 0);\n  for (int i = 0;\
    \ i < n; ++i) {\n    st.set(i, 0);\n  }\n  st.build();\n  for (int i = 0; i <\
    \ q; ++i) {\n    int com, s, t;\n    cin >> com >> s >> t;\n    if (com == 0)\
    \ {\n      long long x;\n      cin >> x;\n      st.update(s, t + 1, x);\n    }\
    \ else {\n      cout << st.query(s, t + 1) << endl;\n    }\n  }\n  return 0;\n\
    }\n"
  dependsOn:
  - src/structure/lazy_segment_tree.hpp
  isVerificationFile: true
  path: test/aoj/dsl_2_h.test.cpp
  requiredBy: []
  timestamp: '2022-12-30 16:04:53+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/dsl_2_h.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/dsl_2_h.test.cpp
- /verify/test/aoj/dsl_2_h.test.cpp.html
title: test/aoj/dsl_2_h.test.cpp
---
