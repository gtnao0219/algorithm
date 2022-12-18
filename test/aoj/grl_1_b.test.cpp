#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/graph/bellman_ford.hpp"
#include "../../src/graph/template.hpp"

int main() {
  int V, E, r;
  cin >> V >> E >> r;
  Edges<int> edges;
  for (int i = 0; i < E; ++i) {
    int s, t, d;
    cin >> s >> t >> d;
    edges.emplace_back(s, t, d);
  }
  auto dist = bellman_ford(edges, V, r);
  if (dist.empty()) {
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    for (int i = 0; i < V; ++i) {
      if (dist[i] == numeric_limits<int>::max()) {
        cout << "INF" << endl;
      } else {
        cout << dist[i] << endl;
      }
    }
  }
  return 0;
}
