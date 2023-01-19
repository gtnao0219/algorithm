#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/5/GRL_6_A"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/flow/ford_fulkerson.hpp"

int main() {
  int V, E;
  cin >> V >> E;
  FordFulkerson<int> ff(V);
  for (int i = 0; i < E; i++) {
    int u, v, c;
    cin >> u >> v >> c;
    ff.add_edge(u, v, c);
  }
  cout << ff.max_flow(0, V - 1) << endl;

  return 0;
}
