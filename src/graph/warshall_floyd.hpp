#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./template.hpp"

template <typename T> struct WarshallFloyd {
private:
  const T INF = numeric_limits<T>::max();
  int n;
  Matrix<T> g;

public:
  WarshallFloyd(int n) : n(n), g(n, vector<T>(n, INF)) {
    for (int i = 0; i < n; ++i) {
      g[i][i] = 0;
    }
  }

  void add_edge(int u, int v, T c) { g[u][v] = c; }

  void build() {
    for (int k = 0; k < n; ++k) {
      for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
          if (g[i][k] == INF || g[k][j] == INF) {
            continue;
          }
          g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
        }
      }
    }
  }

  bool has_negative_cycle() {
    for (int i = 0; i < n; ++i) {
      if (g[i][i] < 0) {
        return true;
      }
    }
    return false;
  }

  T shortest_path_value(int s, int t) { return g[s][t]; }

  bool is_unreachable(int s, int t) { return g[s][t] == INF; }
};
