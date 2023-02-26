#define PROBLEM                                                                \
  "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/4/GRL_4_B"

#include <bits/stdc++.h>
using namespace std;

#include "../../src/search/bfs/topological_sort.hpp"

int main() {
  int V, E;
  cin >> V >> E;
  vector<vector<int>> g(V);
  for (int i = 0; i < E; ++i) {
    int s, t;
    cin >> s >> t;
    g[s].push_back(t);
  }
  auto res = topological_sort(g);
  for (int v : res) {
    cout << v << endl;
  }

  return 0;
}
