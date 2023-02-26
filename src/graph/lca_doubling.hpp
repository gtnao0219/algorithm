#pragma once

#include <bits/stdc++.h>
using namespace std;

template <typename T> struct LCADoubling {
private:
  int v;
  int root;
  int h;
  vector<vector<int>> parent;
  vector<int> depth;
  vector<vector<int>> g;

public:
  LCADoubling(int v, int root) : v(v), root(root), depth(v, -1), g(v) {
    h = 1;
    while ((1 << h) < v) {
      ++h;
    }
    parent.assign(h, vector<int>(v, -1));
  }
  void add_edge(int start, int to) { g[start].push_back(to); }
  void build() {
    dfs(root, -1, 0);
    for (int i = 0; i + 1 < parent.size(); ++i) {
      for (int j = 0; j < v; ++j) {
        if (parent[i][j] != -1)
          parent[i + 1][j] = parent[i][parent[i][j]];
      }
    }
  }
  int get(int u, int v) {
    if (depth[u] > depth[v])
      swap(u, v);
    for (int i = 0; i < parent.size(); ++i) {
      if ((depth[v] - depth[u]) & (1 << i))
        v = parent[i][v];
    }
    if (u == v)
      return u;
    for (int i = parent.size() - 1; i >= 0; --i) {
      if (parent[i][u] != parent[i][v]) {
        u = parent[i][u];
        v = parent[i][v];
      }
    }
    return parent[0][u];
  }
  void dfs(int v, int p, int d) {
    parent[0][v] = p;
    depth[v] = d;
    for (int e : g[v])
      if (e != p)
        dfs(e, v, d + 1);
  }
};
