#pragma once

#include <bits/stdc++.h>
using namespace std;

#include "./template.hpp"

struct StronglyConnectedComponents {
private:
  int n;
  Graph<> graph;
  Graph<> r_graph;
  vector<bool> used;
  vector<int> order, comp;

public:
  StronglyConnectedComponents(int n)
      : n(n), graph(n), r_graph(n), used(n, false), comp(n, -1) {}

  void add_edge(int u, int v) {
    graph[u].emplace_back(u, v);
    r_graph[v].emplace_back(v, u);
  }

  void build() {
    for (int i = 0; i < n; ++i) {
      if (!used[i]) {
        dfs(i);
      }
    }
    int cnt = 0;
    reverse(order.begin(), order.end());
    for (int i : order) {
      if (comp[i] == -1) {
        r_dfs(i, cnt++);
      }
    }
  }

  int operator[](int k) { return comp[k]; }

private:
  void dfs(int idx) {
    used[idx] = true;
    for (auto edge : graph[idx]) {
      if (!used[edge.to]) {
        dfs(edge.to);
      }
    }
    order.push_back(idx);
  }
  void r_dfs(int idx, int cnt) {
    comp[idx] = cnt;
    for (auto edge : r_graph[idx]) {
      if (comp[edge.to] == -1) {
        r_dfs(edge.to, cnt);
      }
    }
  }
};
