#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T = int> bool cycle_detection(vector<vector<int>> g) {
  bool has_cycle = false;
  vector<bool> seen(g.size());
  vector<bool> finished(g.size());
  auto dfs = [&](auto dfs, int v, int parent) -> void {
    seen[v] = true;
    for (int to : g[v]) {
      if (to == parent) {
        continue;
      }
      if (finished[to]) {
        continue;
      }
      if (seen[to] && !finished[to]) {
        has_cycle = true;
        return;
      }
      dfs(dfs, to, v);
      if (has_cycle) {
        return;
      }
    }
    finished[v] = true;
  };
  for (int v = 0; v < (int)g.size(); ++v) {
    if (seen[v]) {
      continue;
    }
    dfs(dfs, v, -1);
  }
  return has_cycle;
}
