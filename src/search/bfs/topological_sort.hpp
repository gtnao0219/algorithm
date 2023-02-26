#pragma once

#include <bits/stdc++.h>
using namespace std;

vector<int> topological_sort(const vector<vector<int>> &g) {
  int n = g.size();
  vector<int> deg(n);
  for (int i = 0; i < n; ++i) {
    for (int to : g[i]) {
      ++deg[to];
    }
  }
  queue<int> que;
  for (int i = 0; i < n; ++i) {
    if (deg[i] == 0) {
      que.push(i);
    }
  }
  vector<int> res;
  while (!que.empty()) {
    int v = que.front();
    que.pop();
    res.push_back(v);
    for (int to : g[v]) {
      --deg[to];
      if (deg[to] == 0) {
        que.push(to);
      }
    }
  }
  return res;
}
