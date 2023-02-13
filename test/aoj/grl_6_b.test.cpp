#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_6_B"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/flow/primal_dual.hpp"

int main() {
  int V, E, F;
  cin >> V >> E >> F;
  PrimalDual<int, int> pd(V);
  for (int i = 0; i < E; i++) {
    int u, v, c, d;
    cin >> u >> v >> c >> d;
    pd.add_edge(u, v, c, d);
  }
  cout << pd.min_cost_flow(0, V - 1, F) << endl;

  return 0;
}
