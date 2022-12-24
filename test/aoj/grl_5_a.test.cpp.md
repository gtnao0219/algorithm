---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: src/graph/diameter.hpp
    title: src/graph/diameter.hpp
  - icon: ':heavy_check_mark:'
    path: src/graph/template.hpp
    title: src/graph/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_5_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_5_A
  bundledCode: "#line 1 \"test/aoj/grl_5_a.test.cpp\"\n#define PROBLEM           \
    \                                                     \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_5_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#line 2 \"src/graph/diameter.hpp\"\
    \n\n#line 4 \"src/graph/diameter.hpp\"\nusing namespace std;\n\n#line 2 \"src/graph/template.hpp\"\
    \n\n#line 4 \"src/graph/template.hpp\"\nusing namespace std;\n\ntemplate <typename\
    \ T = long long> struct Edge {\n  int from, to;\n  T cost;\n  Edge(int from, int\
    \ to, T cost = 1) : from(from), to(to), cost(cost) {}\n};\n\ntemplate <typename\
    \ T = long long> using Edges = vector<Edge<T>>;\ntemplate <typename T = long long>\
    \ using Graph = vector<Edges<T>>;\n\ntemplate <typename T = long long> using Matrix\
    \ = vector<vector<T>>;\n#line 7 \"src/graph/diameter.hpp\"\n\ntemplate <typename\
    \ T = long long> struct Diameter {\nprivate:\n  using P = pair<T, int>;\n  int\
    \ v;\n  Graph<T> g;\n\npublic:\n  Diameter(int v) : v(v), g(v) {}\n\n  void add_edge(int\
    \ from, int to, T cost = 1) {\n    g[from].emplace_back(from, to, cost);\n   \
    \ g[to].emplace_back(to, from, cost);\n  }\n\n  T calc() {\n    P f = dfs(0, -1);\n\
    \    P s = dfs(f.second, -1);\n    return s.first;\n  }\n\nprivate:\n  P dfs(int\
    \ i, int parent) {\n    P ret = make_pair((T)0, i);\n    for (auto edge : g[i])\
    \ {\n      if (edge.to == parent) {\n        continue;\n      }\n      auto next\
    \ = dfs(edge.to, i);\n      next.first += edge.cost;\n      ret = max(ret, next);\n\
    \    }\n    return ret;\n  }\n};\n#line 9 \"test/aoj/grl_5_a.test.cpp\"\n\nint\
    \ main() {\n  int n;\n  cin >> n;\n  Diameter<int> diameter(n);\n  for (int i\
    \ = 0; i < n - 1; i++) {\n    int s, t, w;\n    cin >> s >> t >> w;\n    diameter.add_edge(s,\
    \ t, w);\n  }\n  cout << diameter.calc() << endl;\n  return 0;\n}\n"
  code: "#define PROBLEM                                                         \
    \       \\\n  \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_5_A\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#include \"../../src/graph/diameter.hpp\"\
    \n#include \"../../src/graph/template.hpp\"\n\nint main() {\n  int n;\n  cin >>\
    \ n;\n  Diameter<int> diameter(n);\n  for (int i = 0; i < n - 1; i++) {\n    int\
    \ s, t, w;\n    cin >> s >> t >> w;\n    diameter.add_edge(s, t, w);\n  }\n  cout\
    \ << diameter.calc() << endl;\n  return 0;\n}\n"
  dependsOn:
  - src/graph/diameter.hpp
  - src/graph/template.hpp
  isVerificationFile: true
  path: test/aoj/grl_5_a.test.cpp
  requiredBy: []
  timestamp: '2022-12-24 16:49:35+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/grl_5_a.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/grl_5_a.test.cpp
- /verify/test/aoj/grl_5_a.test.cpp.html
title: test/aoj/grl_5_a.test.cpp
---
