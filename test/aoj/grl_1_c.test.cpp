#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_C"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/graph/template.hpp"
#include "../../src/graph/warshall_floyd.hpp"

int main() {
  int V, E;
  cin >> V >> E;
  WarshallFloyd<long long> wf(V);
  for (int i = 0; i < E; ++i) {
    int s, t, d;
    cin >> s >> t >> d;
    wf.add_edge(s, t, d);
  }
  wf.build();
  if (wf.has_negative_cycle()) {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }
  for (int i = 0; i < V; ++i) {
    for (int j = 0; j < V; ++j) {
      if (wf.is_unreachable(i, j)) {
        cout << "INF";
      } else {
        cout << wf.shortest_path_value(i, j);
      }

      if (j == V - 1) {
        cout << endl;
      } else {
        cout << " ";
      }
    }
  }
  return 0;
}
