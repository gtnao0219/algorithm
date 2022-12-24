#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./template.hpp"

template <typename T = long long> struct Diameter {
private:
  using P = pair<T, int>;
  int v;
  Graph<T> g;

public:
  Diameter(int v) : v(v), g(v) {}

  void add_edge(int from, int to, T cost = 1) {
    g[from].emplace_back(from, to, cost);
    g[to].emplace_back(to, from, cost);
  }

  T calc() {
    P f = dfs(0, -1);
    P s = dfs(f.second, -1);
    return s.first;
  }

private:
  P dfs(int i, int parent) {
    P ret = make_pair((T)0, i);
    for (auto edge : g[i]) {
      if (edge.to == parent) {
        continue;
      }
      auto next = dfs(edge.to, i);
      next.first += edge.cost;
      ret = max(ret, next);
    }
    return ret;
  }
};
