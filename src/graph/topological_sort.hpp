#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T = int>
vector<int> topological_sort(vector<vector<int>> g) {
  vector<int> res;
  vector<bool> seen(g.size());
  auto dfs = [&](auto dfs, int v) -> void {
    seen[v] = true;
    for (int to : g[v]) {
      if (seen[to]) {
        continue;
      }
      dfs(dfs, to);
    }
    res.push_back(v);
  };
  for (int v = 0; v < (int)g.size(); ++v) {
    if (seen[v]) {
      continue;
    }
    dfs(dfs, v);
  }
  reverse(res.begin(), res.end());
  return res;
}
