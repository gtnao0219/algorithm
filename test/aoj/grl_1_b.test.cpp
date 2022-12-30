#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/graph/bellman_ford.hpp"
#include "../../src/graph/template.hpp"

int main() {
  int V, E, r;
  cin >> V >> E >> r;
  BellmanFord<int> bellman_ford(V, r);
  Edges<long long> edges;
  for (int i = 0; i < E; ++i) {
    int s, t, d;
    cin >> s >> t >> d;
    bellman_ford.add_edge(s, t, d);
  }
  bellman_ford.build();
  if (bellman_ford.has_negative_cycle()) {
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    for (int i = 0; i < V; ++i) {
      if (bellman_ford.is_unreachable(i)) {
        cout << "INF" << endl;
      } else {
        cout << bellman_ford.shortest_path_value(i) << endl;
      }
    }
  }
  return 0;
}
