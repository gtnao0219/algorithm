---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/graph/kruskul.hpp
    title: src/graph/kruskul.hpp
  - icon: ':heavy_check_mark:'
    path: src/graph/template.hpp
    title: src/graph/template.hpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/2/GRL_2_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/2/GRL_2_A
  bundledCode: "#line 1 \"test/aoj/grl_2_a.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/2/GRL_2_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/graph/kruskul.hpp\"\
    \n\n#line 4 \"src/graph/kruskul.hpp\"\nusing namespace std;\n\n#line 2 \"src/structure/union_find_tree.hpp\"\
    \n\n#line 4 \"src/structure/union_find_tree.hpp\"\nusing namespace std;\n\nstruct\
    \ UnionFindTree {\nprivate:\n  int n;\n  vector<int> parent, rank;\n\npublic:\n\
    \  UnionFindTree(int n) : n(n), parent(n, -1), rank(n, 0) {}\n\n  int root(int\
    \ x) {\n    if (parent[x] == -1) {\n      return x;\n    }\n    return parent[x]\
    \ = root(parent[x]);\n  }\n\n  void unite(int x, int y) {\n    x = root(x);\n\
    \    y = root(y);\n    if (x == y) {\n      return;\n    }\n    if (rank[x] <\
    \ rank[y]) {\n      swap(x, y);\n    }\n    if (rank[x] == rank[y]) {\n      ++rank[x];\n\
    \    }\n    parent[y] = x;\n  }\n\n  bool is_same(int x, int y) { return root(x)\
    \ == root(y); }\n};\n#line 2 \"src/graph/template.hpp\"\n\n#line 4 \"src/graph/template.hpp\"\
    \nusing namespace std;\n\ntemplate <typename T = long long> struct Edge {\n  int\
    \ from, to;\n  T cost;\n  Edge(int from, int to, T cost = 1) : from(from), to(to),\
    \ cost(cost) {}\n};\n\ntemplate <typename T = long long> using Edges = vector<Edge<T>>;\n\
    template <typename T = long long> using Graph = vector<Edges<T>>;\n\ntemplate\
    \ <typename T = long long> using Matrix = vector<vector<T>>;\n#line 8 \"src/graph/kruskul.hpp\"\
    \n\ntemplate <typename T> struct Kruskal {\nprivate:\n  int v;\n  Edges<T> es;\n\
    \  UnionFindTree uft;\n  long long cost_sum = 0;\n  Edges<T> ans_es;\n\npublic:\n\
    \  Kruskal(int v) : v(v), uft(v) {}\n\n  void add_edge(int from, int to, T cost)\
    \ { es.emplace_back(from, to, cost); }\n\n  void build() {\n    sort(es.begin(),\
    \ es.end(), [](const Edge<T> &e1, const Edge<T> &e2) {\n      return e1.cost <\
    \ e2.cost;\n    });\n    for (Edge<T> &e : es) {\n      if (!uft.is_same(e.from,\
    \ e.to)) {\n        uft.unite(e.from, e.to);\n        cost_sum += e.cost;\n  \
    \      ans_es.emplace_back(e);\n      }\n    }\n  }\n\n  T get_cost_sum() { return\
    \ cost_sum; }\n\n  Edges<T> get_edges() { return ans_es; }\n};\n#line 9 \"test/aoj/grl_2_a.test.cpp\"\
    \n\nint main() {\n  int V, E;\n  cin >> V >> E;\n  Kruskal<long long> kruskal(V);\n\
    \  for (int i = 0; i < E; ++i) {\n    int s, t, d;\n    cin >> s >> t >> d;\n\
    \    kruskal.add_edge(s, t, d);\n  }\n  kruskal.build();\n  cout << kruskal.get_cost_sum()\
    \ << endl;\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/2/GRL_2_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/graph/kruskul.hpp\"\
    \n#include \"../../src/graph/template.hpp\"\n\nint main() {\n  int V, E;\n  cin\
    \ >> V >> E;\n  Kruskal<long long> kruskal(V);\n  for (int i = 0; i < E; ++i)\
    \ {\n    int s, t, d;\n    cin >> s >> t >> d;\n    kruskal.add_edge(s, t, d);\n\
    \  }\n  kruskal.build();\n  cout << kruskal.get_cost_sum() << endl;\n  return\
    \ 0;\n}\n"
  dependsOn:
  - src/graph/kruskul.hpp
  - src/structure/union_find_tree.hpp
  - src/graph/template.hpp
  isVerificationFile: true
  path: test/aoj/grl_2_a.test.cpp
  requiredBy: []
  timestamp: '2023-01-08 01:56:20+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/grl_2_a.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/grl_2_a.test.cpp
- /verify/test/aoj/grl_2_a.test.cpp.html
title: test/aoj/grl_2_a.test.cpp
---
