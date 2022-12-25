#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_A"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/graph/dijkstra.hpp"

int main() {
  int V, E, r;
  cin >> V >> E >> r;
  Dijkstra<int> dijkstra(V, r);
  for (int i = 0; i < E; ++i) {
    int s, t, d;
    cin >> s >> t >> d;
    dijkstra.add_edge(s, t, d);
  }
  dijkstra.build();
  for (int i = 0; i < V; ++i) {
    if (dijkstra.is_unreachable(i)) {
      cout << "INF" << endl;
    } else {
      cout << dijkstra.shortest_path_value(i) << endl;
    }
  }
  return 0;
}
