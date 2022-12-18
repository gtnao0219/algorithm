#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/2/GRL_2_A"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/graph/kruskul.hpp"
#include "../../src/graph/template.hpp"

int main() {
  int V, E;
  cin >> V >> E;
  Kruskal<long long> kruskal(V);
  for (int i = 0; i < E; ++i) {
    int s, t, d;
    cin >> s >> t >> d;
    kruskal.add_edge(s, t, d);
  }
  kruskal.build();
  cout << kruskal.get_cost_sum() << endl;
  return 0;
}
