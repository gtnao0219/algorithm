#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/3/GRL_3_C"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/graph/strongly_connected_components.hpp"
#include "../../src/graph/template.hpp"

int main() {
  int V, E;
  cin >> V >> E;
  StronglyConnectedComponents scc(V);
  for (int i = 0; i < E; ++i) {
    int s, t;
    cin >> s >> t;
    scc.add_edge(s, t);
  }
  scc.build();
  int Q;
  cin >> Q;
  for (int i = 0; i < Q; ++i) {
    int u, v;
    cin >> u >> v;
    cout << (scc[u] == scc[v] ? "1" : "0") << endl;
  }
  return 0;
}
